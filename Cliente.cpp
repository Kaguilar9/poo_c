#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{ //Los dos puntos con espacio y el nombre de la clase a heredar, ayuda a heredar
	private :
		string nit;
		
	// metodos (contructor y metods crud	
	public :
		Cliente(){
		}
		Cliente (string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, fn, tel){
			nit = n;
		}
		//set = modificar un atributo o para enviar los datos al atributo
		void setNit(string n){
			nit = n;
		}
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		void setFechaNacimiento(string fn){
			fecha_nacimiento = fn;
		}
		string getNit(){ //el get ayuda a solo mostrar un campo, es decir, solo quiero que me muestre un campo
			return nit; 
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}	
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		string getFechaNacimiento(){
			return fecha_nacimiento;
		}
		void leer(){
			cout<<"Nit: " << nit <<endl;
			cout<<"Nombre: " << nombres <<endl;
			cout<<"Apellidos: " << apellidos <<endl;
			cout<<"Direccion: " << direccion <<endl;
			cout<<"Telefono: " << telefono <<endl;
			cout<<"Fecha de Nacimiento: " << fecha_nacimiento <<endl;
		}
		/*void leer(){
			//this.	//Si agregamos el " : Persona" automáticamente nos aparecerá acá, sin eso, Solo que esa clase tiene
		}*/
};
