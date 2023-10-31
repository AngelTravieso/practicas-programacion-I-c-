#include <iostream>
#include <string>

using namespace std;

// Función para calcular los cambios en edad, peso y estatura al cumplir un año
void Cumpleanios(int& edad, double& peso, double& estatura) {
    // Si la edad es menor o igual a 20, realizar cambios
    if (edad <= 20) {
        ++edad;          // Aumentar la edad en 1 año
        peso += 2.0;     // Aumentar el peso en 2 kilogramos
        estatura += 0.01; // Aumentar la estatura en 1 centímetro
    }
}

int main() {
    string nombre;
    int edad;
    double peso, estatura;

    // Solicitar información al usuario
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su peso (en kg): ";
    cin >> peso;
    cout << "Ingrese su estatura (en metros): ";
    cin >> estatura;

    // Mostrar los datos iniciales
    cout << "Saludo: " << nombre << " saluda y dice sus datos:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Estatura: " << estatura << " m" << endl;

    // Simular el paso de un año y calcular cambios
    Cumpleanios(edad, peso, estatura);

    cout << "-------------------------" << endl;

    // Mostrar los datos actualizados
    cout << "Despues de un 1 year:" << endl;
    cout << "-------------------------" << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Estatura: " << estatura << " m" << endl;

    return 0;
}
