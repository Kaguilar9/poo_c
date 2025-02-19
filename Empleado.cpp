#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	private :
		string codigo;string Empleado;
		
	public :
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, int tel, string fn, int cod, string emp)	: Persona(string nom, string ape, string dir, string fn, int tel){
		codigo = cod;
		empleado = emp;
	}
}
