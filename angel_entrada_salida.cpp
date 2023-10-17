#include <iostream>
#include <cstdio>
#include <string>
#include <cctype> // Necesaraio para tolower

using namespace std;

/**
 * @brief Valida las prelaciones de una materia dada.
 * @param materia La materia que se va a validar.
 * @return Un string que describe las prelaciones de la materia.
 */
string validarPrelaciones( string materia ) {

    // Convertir la materia a minusculas
    for(char &c : materia) {
        c = tolower(c);
    }

    if( materia == "tecnicas de estudio e investigación") {
        return "No hay prelación";
    } else if(materia == "estructura de datos") {
        return "procesamiento de datos";
    } else if(materia == "ingles instrumental I") {
        return "ingles instrumental II";
    } else if(materia == "programacion I") {
        return "programacion II";
    } else if("estadistica general") {
        return "estadistica aplicada";
    } else if(materia == "matematica II") {
        return "matematica III";
    } else if(materia == "redaccion de informes tecnicos") {
        return "No hay prelacion";
    } else {
        return "Materia no reconocida";
    }
}

// * Práctica 04 - Programación I ISUM
int main() {

    string nombre, carrera, semestre;
    string materias[7];

    // * 1. Imprime como primera línea: Bienvenido a ISUM ONLINE
    printf("Bienvenido a ISUM ONLINE \n");

    // * 2. Imprime como segunda línea: Soy el estudiante No.xxxx (xxxxx numero de carnet)
    printf("Soy el estudiante No. V28302991 \n");

    // * Ingresa tu nombre completo
    printf("Ingresa tu nombre completo: \n");
    scanf("%s", nombre);

    // * Ingresa la carrera que cursas
    printf("Indica la carrera que cursas: \n");
    scanf("%s", carrera);

    // * Ingresa el semestre que cursas
    printf("Ingresa el semestre que cursas actualmente (Nro): \n");
    scanf("%s", semestre);

    int numeroMaterias = sizeof(materias) / sizeof(materias[0]);

    // * Prelaciones de las materias cursadas (2do semestre)
    printf("Ingresa las materias que cursas en el %s semestre: \n", semestre);
    for(int i = 0; i < numeroMaterias; i++) {
        printf("Materia Nro %d: ", i + 1);
        cin >> materias[i];
    }

    // * Imprimir resultado final
    printf("Hola %s, eres de la carrera, estas en el %s semestre de %s \n", nombre, semestre, carrera);

    // * Imprimir materias cursadas
    printf("Estas cursando las siguientes materias: \n");
    for(int i = 0; i < numeroMaterias; i++) {
        cout << "Materia Nro. " << i + 1 << ": " << materias[i] << " -> prelacion: " << validarPrelaciones(materias[i]) << endl;
    }

    printf("Programa finalizado...");

    return 0;

}