#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "alumnos.h"

    alumno::alumno(){
        _nombre = "no asignado";
        _apellido = "no asignado";
        _notaFinalSemestre = 0;
        }

    alumno::alumno(string nombre, string apellido, float notaFinalSemestre){
        _nombre = nombre;
        _apellido = apellido;
        _notaFinalSemestre = notaFinalSemestre;
    }

    string alumno::getNombre(){
        return _nombre;
    }


    string alumno::getApellido(){
        return _apellido;
        }


    float alumno::getNotafinalSemestre(){
        return _notaFinalSemestre;
        }

    void alumno::setNombre(string nombre){
            _nombre = nombre;
            }

    void alumno::setApellido(string apellido){
            _apellido = apellido;
        }

    void alumno::setNotaFinalSemestre(float notaFinalSemestre){
            _notaFinalSemestre = notaFinalSemestre;
        }
