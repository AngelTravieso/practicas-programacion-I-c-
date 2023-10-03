#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    // * 1) Imprimir por consola el mensaje "Hola, vienvenidos a programacion I"
    cout << "Hola, bienvenidos a Programacion I" << endl;

    int numero1, numero2;

    // * 2) Recibe por teclado dos números enteros

    cout << "--------------- VERIFICA EL NUMERO MAYOR (INGRESE SOLO NUMEROS) -----------" << endl;

    // Obtener número 1
    cout << "\tIngrese el 1er numero: ";
    cin >> numero1;

    // Obtener número 2
    cout << "\tIngrese el 2do numero: ";
    cin >> numero2;

    // * 3) Imprime los valores de las variables indicando cual es el mayor y cual es el menor con la instrucción cout

    // Si los números son iguales
    if( numero1 == numero2 ) {
        cout << "\tLos numeros son iguales\n" << endl;
      
      // Si el 1er numero es mayor al 2do numero
    } else if( numero1 > numero2 ) {
        cout << "\t\tResultado: el numero " << numero1 << " es mayor que el numero " << numero2 << endl;

      // Si el 2do numero es mayor al 1er numero
    } else {
        cout << "\t\tResultado: el numero " << numero2 << " es mayor que el numero " << numero1 << endl;
    }

    // * 4) Declara una variable inicializandola con el valor de true e imprime su valor
    bool valorLogico = true;

    cout << "\tEl valor de la variable booleana es: " << valorLogico << endl;
    
    return 0;
}