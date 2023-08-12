/*
Un profesor desea poder cargar la cantidad de alumnos que tiene en su materia y que un programa
le solicite el Apellido y Nombres de cada uno de ellos así como también sus correspondientes notas
finales del semestre.
De ese procesamiento de datos desea poder conocer:
La cantidad de alumnos que hayan obtenido un puntaje final que exceda el promedio general del curso.
Un listado con los apellidos y nombres de aquellos alumnos cuya puntaje final exceda el promedio
general de los aprobados (se aprueba con nota final mayor a 6).

*/

#include <iostream>
#include <string>
#include "alumnos.h"
#include "funciones.h"

using namespace std;

int main(){
    alumno *vectorAlumnos;
    int cantodadAlumnos;
    float acumuladorNotas = 0;
    float promedio;
    int alumnosNotaMayor = 0;

    cout << "Ingrese cantidad de alumnos" << endl;
    cin >> cantodadAlumnos;

    vectorAlumnos = new alumno[cantodadAlumnos];

    cargarAlumnos(vectorAlumnos, cantodadAlumnos, acumuladorNotas);

    promedio = calcularPromedio(vectorAlumnos, cantodadAlumnos);

    alumnosNotaMayor = busquedaNotasMayores(promedio, vectorAlumnos, cantodadAlumnos);

    mostrarAlumnosMayoresApromedio(promedio, alumnosNotaMayor);

    busquedaNotasMayoresAprobados(promedio, vectorAlumnos, cantodadAlumnos);

    delete [] vectorAlumnos;

    return 0;
}
