#include "Nodo.h"
#include <string>

using namespace std; 

Nodo::Nodo()
{Per = NULL;Sig = NULL;}

Nodo::Nodo(Persona *per, Nodo *sig)
{Per = per;Sig = sig;}

void Nodo::setPersona(Persona *per)
{Per = per;}

void Nodo::setSiguiente(Nodo *sig)
{Sig = sig;}

Nodo *Nodo::getSiguiente()
{return Sig;}

Persona *Nodo::getPersona()
{return Per;}

Nodo::~Nodo(){
