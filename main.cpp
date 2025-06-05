#include "Songs.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    ifstream archivo("Songs.csv");
    string linea;
    vector<Songs> arrSongs;  // Usamos vector en lugar de array estático
    
    if (!archivo.is_open()) {
        cerr << "Error: No se pudo abrir el archivo Songs.csv" << endl;
        return 1;
    }

    // Saltar el encabezado
    getline(archivo, linea);
    
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string token;
        vector<string> datos;
        
        // Leer campos separados por ;
        while (getline(ss, token, ';')) {
            // Limpiar espacios en blanco
            token.erase(0, token.find_first_not_of(" \t\n\r\f\v"));
            token.erase(token.find_last_not_of(" \t\n\r\f\v") + 1);
            datos.push_back(token);
        }
        
        // Validar campos (title;artist;genre;duration_min)
        if (datos.size() != 4) {
            cerr << "Error en línea: " << linea << " - Número incorrecto de campos" << endl;
            continue;
        }
        
        try {
            // Convertir duración (minutos a segundos)
            float minutos = stof(datos[3]);
            int segundos = static_cast<int>(minutos * 60);
            
            // Crear objeto Song (title, author, calif=0, duration, genre)
            arrSongs.emplace_back(datos[0], datos[1], 0, segundos, datos[2]);
            
        } catch (const exception& e) {
            cerr << "Error procesando línea: " << linea << " - " << e.what() << endl;
        }
    }
    
    archivo.close();
    
    // Mostrar resultados
    cout << "\nCanciones cargadas (" << arrSongs.size() << "):\n";
    for (size_t i = 0; i < arrSongs.size(); i++) {
        cout << i+1 << ". " << arrSongs[i].getTitle()
            << " - " << arrSongs[i].getAuthor()
            << " (" << arrSongs[i].getDuration() << "s)"
            << " [Género: " << arrSongs[i].getMusicGenre()
            << ", Calificación: " << arrSongs[i].getCalification() << "]\n";
    }
    
    return 0;
}