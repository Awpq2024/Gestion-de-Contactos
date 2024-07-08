#include <iostream>
using namespace std;

struct contactoEmail{
	string nombreCompleto;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
};
void agregarContacto(contactoEmail &contacto){
	cout<<"Ingrese el nombre completo: ";
	getline(cin,contacto.nombreCompleto);
	cout<<"Ingrese la edad: ";
	cin>>contacto.edad;
	cout<<"Ingrese el telefono: ";
	cin>>contacto.telefono;
	cout<<"Ingrese el Email: ";
	cin>>contacto.email;
	cout<<"Ingrese la nacionalidad: ";
	cin>>contacto.nacionalidad;
}
int main(){
	contactoEmail contacto;
	int opcion;
	do{
		cout<<"\nMenu de contactos Email"<<endl;
		cout<<"1. Agregar un contacto"<<endl;
		cout<<"2. Salir del programa"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opcion;
		cin.ignore();
		switch (opcion){
			case 1:
				agregarContacto(contacto);
				break;
			case 2:
				cout<<"Saliendo del programa...";
				break;
			default:
				cout<<"Opcion no valida, seleccione una opcion del 1 al 2."<<endl;
				break;
		}
	}while(opcion!=2);
	return 0;
}