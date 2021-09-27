#include "iostream"  
#include <stdlib.h>

using namespace std;

int main () {
	
	//declaracion de las varibales 
	int pin, quetzales, dolares, opcion, deseo, quet1, dolar1;
	
	cout<<"bienvenido a su cuenta para efectuar cualquiere transaccion debe de ingresar su pin"<<endl;
	cout<<"ingrese su pin"<<endl;
	cin>>pin;
	
	quetzales= 5000;
	dolares= 650;
	
	if (pin == 2021){  //se hace una comparacion con lo ingresado y con el codigo del pin 
		cout<<"bienvenido, Jose Antonio Vargas Henriquez. carnet: 0909-21-13598"<<endl;
		
		cout<<"escoja el tipo de moneda con la que desea hacer la transaccion, ingrese el numeral de su seleccion"<<endl;
		cout<<"1. Quetzales"<<endl;   
		cout<<"2. dolares"<<endl;
		cin>> opcion;
		
		switch (opcion){ //se ingreso un switch para poder trabajr segun la opcion que el usuario haya escogido 
			
			case 1: 
			cout<<"su saldo actual es de Q"<<quetzales<<endl;
			cout<<"si desea retirar dinero o hacer un pago presione 1"<<endl;
			cin>> deseo;  //variable para aguardar el dinero que se va a gastar en quetzales 
			
			if (deseo==1 ) {
				
				do{
					cout<<"ingrese la cantidad de dinero que desea retirar o pagar"<<endl,
					cin>> quet1;
						quetzales= quetzales - quet1;
						cout<<"su nuevo saldo es de Q"<<quetzales<<endl;
				}
				while (quetzales>=0);
				cout<<"su saldo es insuficiente"<<endl;
					
		}
			else {
				cout<<"gracias por preferinos, esperamos regrese pronto"<<endl;
			}
		break;
		 case 2:
		 	cout<<"su saldo actual es de $"<<dolares<<endl,
		 	cout<<"si desea retirar o hacer un pago dinero presione 1"<<endl;
		 	cin>>deseo;
		 	
		 	if (deseo==1) {
				
				do{
					cout<<"ingrese la cantidad de dinero que desea retirar o pagar"<<endl;
					cin>> dolar1;
						dolares= dolares - dolar1;
						cout<<"su nuevo saldo es de $"<<dolares<<endl;
				}
				while (dolares >=0);
				cout<<"su saldo es insuficiente"<<endl;
					
		}
			else {
				cout<<"gracias por preferinos, esperamos regrese pronto"<<endl;
			}
		break;
	}
	
}
else {	
		cout<<"el pin ingresado es incorrecto, por favor ingrese el pin correcto"<<endl;
}
}