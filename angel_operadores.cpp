#include <iostream>

using namespace std;

int main() {

    // * 1) Almacena 4 en una variable, incrementa en 2, la variable, e imprime el valor de la variable con el método cout

    int valor = 4;

    cout << "Valor inicial de la variable valor: " << valor << endl;

    // Incrementar valor en 2 
    valor += 2; // valor = valor + 2

    cout << "Valor incrementado de la variable valor: " << valor << endl;

    cout << "----------------COMPARACION -------------" << endl;

    // * 2) Declara 4 variables enteras
    int n, x, y, z;

    // Inicialización de variables
    x = 1;
    y = 2;
    z = 4;
    n = 3;

    // Comparación
    if( x < y && y < z) {
        cout << "x es menor que z" << endl;
    }


    return 0;
}