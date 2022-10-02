#ifndef Persona_h
#define Persona_h
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

class Persona
{
 private:
    string nombre;
    string clave;

 public:
   Persona(string,string);
   ~Persona();
   void setNombre(string);
   void setClave(string);
   string getNombre();
   string getClave();
   string toString();
};

#endif 

