#include <iostream>
using namespace std;

class Persona{
	//Atributos
	protected : //Sólo se utiliza para heredar
	string nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
		
	//Metodos
	//Constructor debe tener el mismo el nombre de la clase
	protected :
	Persona(){
	}
	Persona(string nom, string ape, string dir, string fn, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	
	//CRUD
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
