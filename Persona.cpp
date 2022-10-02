#include <iostream>
#include <string>
#include "Persona.h"

using namespace std; 

Persona::Persona(string n,string c)
{nombre = n;clave = c;}

Persona::~Persona() {}

void Persona::setNombre(string n){nombre = n;}

void Persona::setClave(string c){clave = c;}

string Persona::getNombre(){return nombre;}

string Persona::getClave(){return clave;}

string Persona::toString()
{
string respuesta;
    respuesta = "Nombre: ";
    respuesta = respuesta + nombre + "\n";
    respuesta = respuesta + "Clave: ";
    respuesta = respuesta + clave + "\n";
    return respuesta;
}
