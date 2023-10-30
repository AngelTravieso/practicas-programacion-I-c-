#include <iostream>
#include <string.h>

using namespace std;

int main() {

    cout << "DIAS DE LA SEMANA:" << endl;

    int numeroDia;
    string nombreDia;    

    cout << "Ingresa el numero del dia de la semana (1 al 7):" << endl;
    cin >> numeroDia;

    switch (numeroDia)
    {
    case 1:
        nombreDia = "Lunes";
        break;
    case 2:
        nombreDia = "Martes";
        break;
    case 3:
        nombreDia = "Miercoles";
        break;
    case 4:
        nombreDia = "Jueves";
        break;
    case 5:
        nombreDia = "Viernes";
        break;
    case 6:
        nombreDia = "Sabado";
        break;
    case 7:
        nombreDia = "Domingo";
        break;
    default:
        nombreDia = "Dia no reconocido";
        break;
    }

        cout << "El dia " << numeroDia << " es " << nombreDia << "." << endl;

    return 0;

}