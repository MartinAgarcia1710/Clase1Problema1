#include <iostream>
#include <string>

using namespace std;

#include "alumnos.h"
#include "funciones.h"

void cargarAlumnos(alumno vectorAlumnos[], int cantidad, float &acumuladorNotas){
    string nombre;
    string apellido;
    float nota;
    acumuladorNotas = 0;
    for(int x = 0; x < cantidad; x++){
        cout << "Ingrese nombre: " << endl;
        cin >> nombre;
        vectorAlumnos[x].setNombre(nombre);
        cout << "Ingrese apellido: " << endl;
        cin >> apellido;
        vectorAlumnos[x].setApellido(apellido);
        cout << "Ingrese nota final del semestre: " << endl;
        cin >> nota;
        vectorAlumnos[x].setNotaFinalSemestre(nota);
        acumuladorNotas += nota;
    }
}

float calcularPromedio(alumno vectorAlumnos[], int cantodadAlumnos){
    float promedio;
    float acumulador = 0;

    for(int x = 0; x < cantodadAlumnos; x++){
        acumulador += vectorAlumnos[x].getNotafinalSemestre();
    }
    promedio = acumulador / cantodadAlumnos;
    return promedio;
}

int busquedaNotasMayores(float promedio, alumno vectorAlumnos[], int cantidadAlumnos){
    int contador = 0;
    for(int x = 0; x < cantidadAlumnos; x++){
        if(vectorAlumnos[x].getNotafinalSemestre() > promedio){
            contador++;
        }
    }
    return contador;
}

void busquedaNotasMayoresAprobados(float promedio, alumno vectorAlumnos[], int cantodadAlumnos){
    cout << "----------------------------------------------------------" << endl << "LISTADO DE ALUMNOS APROBADOS CON NOTA SUPERIOR AL PROMEDIO" << endl;
    for(int x = 0; x < cantodadAlumnos; x++){
        if(vectorAlumnos[x].getNotafinalSemestre() > promedio && vectorAlumnos[x].getNotafinalSemestre() > 6){
            cout << "Alumno: " << vectorAlumnos[x].getNombre() << " " << vectorAlumnos[x].getApellido() << endl << "------------------------------------------" << endl;
        }
    }
}

void mostrarAlumnosMayoresApromedio(float promedio, int alumnosMayorApromedio){
    cout << "-------------------------------------------------------------" << endl << " PUNTO A" << endl;
    cout << "El promedio general de notas finales es: " << promedio << endl << alumnosMayorApromedio << " son los alumnos con nota superior a dicho promedio" << endl;
}

