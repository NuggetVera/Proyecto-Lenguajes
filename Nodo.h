#ifndef Nodo_h
#define Nodo_h
#include <string>
#include "Persona.h"


using namespace std;

class Nodo
{
  public:
   Nodo();
   Nodo(Persona *, Nodo *);
   void setPersona(Persona *);
   void setSiguiente(Nodo *);
   Nodo *getSiguiente();
   Persona *getPersona();
   ~Nodo();

  private:
  Persona *Per;
  Nodo *Sig;
   
};

#endif 

