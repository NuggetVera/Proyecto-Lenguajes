#include "Lista.h"
#include "Nodo.h"
#include "Persona.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std; 

int main()
{


  ifstream archivo("Persona.txt");


  
  Lista *ve = new Lista();
  Lista *ve2 = new Lista();
  
  Persona *Per1 = new Persona("Juan","1234");
  ve->ingresarPersona(Per1);
  
  Persona *Per2 = new Persona("Pedro","567");
  ve2->ingresarPersona(Per2);
  
  
  cout<<ve->toString()<<endl;
  cout<<ve2->toString()<<endl;

  
  

  
  return 0;
  

}
