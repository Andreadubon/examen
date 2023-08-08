
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream archivoSalida("datos.txt", ios::app);
    if (!archivoSalida) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return 1;
    }

    string dato;
    cout << "Ingrese un dato: ";
    getline(cin, dato);

    archivoSalida << dato << endl;

    archivoSalida.close();

    ifstream archivoEntrada("datos.txt");
    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
        return 1;
    }

    cout << "Contenido del archivo:" << endl;
    string linea;
    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
    }

    archivoEntrada.close();

    return 0;
}
