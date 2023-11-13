#include <iostream>

using namespace std;

int main() {

    // Declaración de una matriz 3x3 de enteros
    int matriz[3][3];

    // Inicialización de la matriz mediante un bucle
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j + 1;
        }
    }

    // Acceso e impresión de los elementos de la matriz
    cout << "Elementos de la matriz" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << endl;
        }

        cout << endl;
    }
    
    return 0;

}