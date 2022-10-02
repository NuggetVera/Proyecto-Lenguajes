#include "Lista.h"
#include "Nodo.h"
#include "Persona.h"
#include <string>
#include <iostream>

using namespace std; 

Lista::Lista(){Prp = NULL;}

void Lista::ingresarPersona(Persona *per){Prp = new Nodo(per,Prp);}

string Lista::toString()
{
  Nodo *p = Prp;
  string respuesta1;
  
  while(p != NULL)
  {
   respuesta1 = p->getPersona()->toString()+ "\n";
   p = p->getSiguiente(); 
  }

  return respuesta1;
}

Lista::~Lista()
{
  Nodo *p = Prp;
  Nodo *ac;

  while(p != NULL)
  {
    ac = p->getSiguiente();
    delete p;
    p = ac;  
  }
  
  Prp = NULL; 
}



