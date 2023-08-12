#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

#include "alumnos.h"
#include "funciones.h"

void cargarAlumnos(alumno vectorAlumnos[], int cantidad, float &acumuladorNotas);
float calcularPromedio(alumno vectorAlumnos[], int cantodadAlumnos);
int busquedaNotasMayores(float promedio, alumno vectorAlumnos[], int cantidadAlumnos);
void busquedaNotasMayoresAprobados(float promedio, alumno vectorAlumnos[], int cantodadAlumnos);



void mostrarAlumnosMayoresApromedio(float promedio, int alumnosNotaMayorAprobados);
#endif // FUNCIONES_H_INCLUDED
