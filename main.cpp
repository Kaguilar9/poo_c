//comentarios para github 
#include "Cliente.cpp" //llamando la clase
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin >> apellidos;
	cout<<"Ingrese Direccion: ";
	cin >> direccion;
	cout<<"Ingrese Fecha de nacimiento: ";
	cin >> fecha_nacimiento;
	cout<<"Ingrese Teléfono: ";
	cin >> telefono;
	Cliente objc = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit); //Instanciar la clase
	objc.leer();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	objc.setNit(nit);
	cout<<objc.getNit()<<", "<< objc.getNombres() << ", "<<objc.getApellidos()<<endl;
	}
