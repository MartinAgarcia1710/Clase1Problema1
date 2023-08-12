#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED
#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "alumnos.h"

class alumno{
    private:
        string _nombre;
        string _apellido;
        float _notaFinalSemestre;


    public:
        alumno();
        alumno(string nombre, string apellido, float notaFinalSemestre);
        string getNombre();
        string getApellido();
        float getNotafinalSemestre();
        void setNombre(string nombre);
        void setApellido(string apellido);
        void setNotaFinalSemestre(float notaFinalSemestre);

    };


#endif // ALUMNOS_H_INCLUDED
