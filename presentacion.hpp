#ifndef PRESENTACION_HPP
#define PRESENTACION_HPP

#include <iostream>
using namespace std;

// Voy a Colocar aqui todas las declaraciones de variables y funciones para hacer el programa principal mas legible y sencillo



int aleatoriador(int aleatorio);




// clase persona declarada y un constructor para la misma
class Persona {
public:
    string nombre;
    string apellido1;
    string apellido2;
    int edad;
    
    // Constructor
    Persona(string nom, string ap1, string ap2, int ed) {
        nombre = nom;
        apellido1 = ap1;
        apellido2 = ap2;
        edad = ed;
    }
};



#endif
