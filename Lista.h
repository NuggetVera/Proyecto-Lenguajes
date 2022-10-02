#ifndef Lista_h
#define Lista_h
#include <string>
#include "Nodo.h"

using namespace std;

class Lista
{

 public:
 Lista();
 void ingresarPersona(Persona*);
 string toString();
 void menu();
 ~Lista();

 private:
 Nodo *Prp;
 
};

#endif 





  
