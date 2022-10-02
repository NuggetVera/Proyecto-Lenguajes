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
  Lista *ve3 = new Lista();
  Lista *ve4 = new Lista();
  Lista *ve5 = new Lista();
  Lista *ve6 = new Lista();
  Lista *ve7 = new Lista();
  Lista *ve8 = new Lista();
  Lista *ve9 = new Lista();
  Lista *ve10 = new Lista();
  
  Persona *Per1 = new Persona("Juan","1234");
  ve->ingresarPersona(Per1);
  
  Persona *Per2 = new Persona("Pedro","567");
  ve2->ingresarPersona(Per2);
  
  Persona *Per3 = new Persona("Samuel","234567");
  ve2->ingresarPersona(Per2);
  
  Persona *Per4 = new Persona("Issac","657489");
  ve2->ingresarPersona(Per2);
  
  Persona *Per5 = new Persona("Matias","34238238");
  ve2->ingresarPersona(Per2);
  
  Persona *Per6 = new Persona("Walter","657820");
  ve2->ingresarPersona(Per2);
  
  Persona *Per7 = new Persona("Esteban","638329");
  ve2->ingresarPersona(Per2);
  
  Persona *Per8 = new Persona("Maria","020210");
  ve2->ingresarPersona(Per2);
  
  Persona *Per9 = new Persona("Manuela","71821390");
  ve2->ingresarPersona(Per2);
  
  Persona *Per10 = new Persona("Mariana","238489");
  ve2->ingresarPersona(Per2);
  
  
  cout<<ve->toString()<<endl;
  cout<<ve2->toString()<<endl;
  cout<<ve3->toString()<<endl;
  cout<<ve4->toString()<<endl;
  cout<<ve5->toString()<<endl;
  cout<<ve6->toString()<<endl;
  cout<<ve7->toString()<<endl;
  cout<<ve8->toString()<<endl;
  cout<<ve9->toString()<<endl;
  cout<<ve10->toString()<<endl;

  
  return 0;
  

}
