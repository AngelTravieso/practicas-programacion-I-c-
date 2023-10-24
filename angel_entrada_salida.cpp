#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string nombre, carrera, semestre;
    string materias[7];

    printf("Bienvenido a ISUM ONLINE\n");

    printf("Soy el estudiante No.xxxx (Ingresa tu numero de carnet): ");
    string numeroCarnet;
    cin >> numeroCarnet;
    printf("Soy el estudiante No.%s\n", numeroCarnet.c_str());

    printf("Ingresa tu nombre completo: ");
    cin.ignore();
    getline(cin, nombre);

    printf("Indica la carrera que cursas: ");
    getline(cin, carrera);

    printf("Ingresa el semestre que cursas actualmente (Nro): ");
    getline(cin, semestre);

    int numeroMaterias = sizeof(materias) / sizeof(materias[0]);

    printf("Ingresa las materias que cursas en el %s semestre:\n", semestre.c_str());
    for (int i = 0; i < numeroMaterias; i++) {
        printf("Materia No.%d: ", i + 1);
        getline(cin, materias[i]);
    }

    printf("Hola %s, estas en el %s semestre de la carrera %s\n", nombre.c_str(), semestre.c_str(), carrera.c_str());

    printf("Estas cursando las siguientes materias:\n");
    for (int i = 0; i < numeroMaterias; i++) {
        string prelacion;

        if (materias[i] == "estadistica general") {
            prelacion = "estadistica aplicada";
        } else if (materias[i] == "matematica I") {
            prelacion = "matematica II";
        } else if (materias[i] == "programacion I") {
            prelacion = "programacion II";
        } else if (materias[i] == "estructura de datos") {
            prelacion = "procesamiento de datos";
        } else if (materias[i] == "ingles instrumental I") {
            prelacion = "ingles instrumental II";
        } else if (materias[i] == "tecnicas de estudio e investigacion") {
            prelacion = "No hay prelacion";
        } else if (materias[i] == "redaccion de informes tecnicos") {
            prelacion = "No hay prelacion";
        } else {
            prelacion = "Materia no reconocida";
        }

        printf("Materia No.%d (%s) -> prelacion: %s\n", i + 1, materias[i].c_str(), prelacion.c_str());
    }

    printf("Programa finalizado...");

    return 0;
}
