#include <iostream>
#include "Persona.hpp"
using namespace std;
Persona::Persona(string Nombre, string Apellido) {
 this->Nombre = Nombre;
 this->Apellido = Apellido;
}
string Persona::obtenerNombre() {
 return Nombre;
}
void Persona::imprimir() const {
 cout << Nombre << ' ' << Apellido;
}