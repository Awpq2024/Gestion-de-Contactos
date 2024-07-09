#include <iostream>
using namespace std;

const int limiteContactos=100;

struct contactoEmail{
	string nombreCompleto;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
};
void agregarContacto(contactoEmail contacto[], int &numeroContactos){
	if(numeroContactos>=limiteContactos){
		cout<<"\nLimite de contactos alcanzado, no se puede registrar mas contactos";
	}else{
	cout<<"\nIngrese el nombre completo: ";
	getline(cin,contacto[numeroContactos].nombreCompleto);
	cout<<"Ingrese la edad: ";
	cin>>contacto[numeroContactos].edad;
	cout<<"Ingrese el telefono: ";
	cin>>contacto[numeroContactos].telefono;
	cin.ignore();
	cout<<"Ingrese el Email: ";
	cin>>contacto[numeroContactos].email;
	cout<<"Ingrese la nacionalidad: ";
	cin>>contacto[numeroContactos].nacionalidad;
	cout<<"Contacto numero "<<(numeroContactos+1)<<" registrado con exito"<<endl;
	cout<<"\n";
	numeroContactos++;
	}
}
void mostrarContactos(contactoEmail contacto[],int numeroContactos){
	if(numeroContactos==0){
		cout<<"\nNo existen contactos registrados de momento"<<endl<<endl;
	}else{
		for(int i=0;i<numeroContactos;i++){
			cout<<"\nContacto numero "<<(i+1)<<": ";
			cout<<"\nNombre Completo: "<<contacto[i].nombreCompleto;
			cout<<"\nEdad: "<<contacto[i].edad;
			cout<<"\nTelefono: "<<contacto[i].telefono;
			cout<<"\nEmail: "<<contacto[i].email;
			cout<<"\nNacionalidad: "<<contacto[i].nacionalidad<<endl<<endl;
		}
	}
}
int main(){
	contactoEmail contacto[limiteContactos];
	int numeroContacto=0;
	int opcion;
	do{
		cout<<"Menu de contactos Email"<<endl;
		cout<<"1. Agregar un contacto"<<endl;
		cout<<"2. Mostrar lista de contactos registrados al momento"<<endl;
		cout<<"3. Salir del programa"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opcion;
		cin.ignore();
		switch (opcion){
			case 1:
				agregarContacto(contacto,numeroContacto);
				break;
			case 2:
				mostrarContactos(contacto,numeroContacto);
				break;
			case 3:
				cout<<"\nSaliendo del programa...";
				break;
			default:
				cout<<"Opcion no valida, seleccione una opcion del 1 al 2."<<endl;
				break;
		}
	}while(opcion!=3);
	return 0;
}