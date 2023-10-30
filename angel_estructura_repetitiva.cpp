#include <iostream>

using namespace std;

int main() {
    int contador = 0;

    // Ciclo for para contar cuantos número múltiplos de 13 hay entre 0 y 10000
    for (int numero = 0; numero <= 10000; numero++) {
        if (numero % 13 == 0) {
            contador++;
        }
    }

    cout << "Hay " << contador << " numeros entre 0 y 10,000 que son multiplos de 13." << std::endl;

    // Ciclo for para imprimir los números múltiplos de 13 entre el 0 y el 10000
    for (int i = 0; i <= 10000; i++) {
        if (i % 13 == 0) {
            cout << "Numero: " << i << endl;
        }
    }

    return 0;
}
