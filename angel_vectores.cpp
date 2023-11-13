#include <iostream>
#include <string>
#include <vector> // Incluye la biblioteca vector para utilizar el contenedor de vectores.

using namespace std;

int main() {

    // Creación de un vector que almacena pares (número, nombre) para representar los días de la semana.
    vector<pair<int, string>> semana;

    // Inicializar el vector con números y nombres de la semana
    semana.push_back({1, "Lunes"});
    semana.push_back({2, "Martes"});
    semana.push_back({3, "Miercoles"});
    semana.push_back({4, "Jueves"});
    semana.push_back({5, "Viernes"});
    semana.push_back({6, "Sabado"});
    semana.push_back({7, "Domingo"});

    // Imprimir por pantalla los números y nombres de la semana
    cout << "Numeros y Nombres de la Semana:" << endl;

    // Iteración sobre el vector y impresión de los números y nombres de la semana en la consola.
    for (const auto& dia : semana) {
        cout << "Dia " << dia.first << ": " << dia.second << endl;
    }

    return 0;

}