#include "iostream"  

using namespace std;

int main(){
	//declaracion de las variables 
float  pesokilo, largo, ancho, alto, tarifapeso, tarivolumen, pesovolumetrico, tarivolume;
int opcion, conoce, lugar;
//mensaje agradable con las intrucciones para usar el programa 
	cout << "bienvenido al portal de envios de paquetes  P&P. es un gusto servirle, este es un programa que le idicara el costo que tendra su envio."<<endl;
cout<<"nosotros como empresa manejamos las siguientes tarifas: Q 2.50 por kilogramo mas Q 0.13 por kilometro recorrido"<<endl;
cout<< "¿que clase de paquete desea enviar? ingrese el numeral que corresponde a la opcion que corresponda al paquete que desea enviar"<<endl;
cout<<"1. Documento" <<endl;  //menu de opciones 
cout<<"2. paquetes, mobiliario, repuestos y art. Electrónicos"<<endl;
cin>> opcion;

//declaracion de las constantes, seran las que limiten el peso del producto 
const int pesoreal = 30 ;
const int persovolumetrico = 50;



//parte del desarrollo del programa, utilizando un bucle de opciones le daremos una repuesta al usuario 
switch(opcion) {
	//en este caso como la tarifa de los documentos ya es fija, no se necesita hacer ninguna operacion 
	case 1:
		cout<<"la cantidad a pagar es de Q 40.00, gracias por escoger nnuestro servicio" <<endl;
		break;
		
		//tenemos que averiguar si el usuario conoce el peso del paquete 
	case 2:
		cout<<"¿conoce el peso del paquete?"<<endl;
		cout << "ingrese el numeral de su opcion"<<endl;
		cout<< "1. si"<<endl;
		cout <<"2. No"<<endl;
		cin>> conoce; //dependiendo la repuesta del usuario el switch para operarse 
		switch (conoce){
		case 1: 
			cout<<"por favor ingreso el peso real en kilogramos"<<endl; 
			cin>> pesokilo; //varible que utilizaremos para guardar el dato del peso que nos de el usuario 
			cout<< "por el momento solo tenemos surcusarles en departamentos en especifico, donde desea enviarlo"<<endl;
			cout<< "1. Guatemala"<<endl;
			cout<< "2. Izabal"<<endl;
			cout<< "3. Petén"<<endl,
			cout<< "4. Chiquimula"<<endl;
			cout<< "5. Ratalhuleu"<<endl;
			cin>> lugar;
			
			switch(lugar) {  //dependiendo el lugar donde vaya asi se aplicara los kilometros 
		 	case 1: 
			    tarifapeso = (pesokilo * 2.50) + (10* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl; 
				break;
				
			 case 2:
				tarifapeso =(pesokilo * 2.50) + (300* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			    break;
			case 3: 
		    	tarifapeso =(pesokilo * 2.50) + (460* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			    break;                                                                          //finalizado el primer swicht por si el usuario si conoce el peso del producto 
	        case 4:
				tarifapeso =(pesokilo * 2.50) + (178* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			    break;	
			case 5: 
			    tarifapeso =(pesokilo * 2.50) + (200* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			    break;
			}
		 break;
		 case 2: //como el usuario no conoce el peso del envio se tendra que aplicar la formula de volumetrico"
		 cout<< "muy bien como no conoce el peso del envio, por favor ingrese el largo de lo que desea enviar"<<endl;
		 cin>> largo;
		 cout<<"ahora ingrese el ancho del envio"<<endl;
		 cin >> ancho;                                      //se le pidio al usuario los datos que se necesitaan para usar la formula del volumen 
		 cout<< "y por ultimo ingrese el alto del envio"<<endl;
		 cin>> alto;
		 
		 pesovolumetrico =(largo*ancho*alto)/2272; // formula del peso volumetrico que se empleara en la formula para conocer el valor a pagar
		 
		cout<< "por el momento solo tenemos surcusarles en departamentos en especifico, donde desea enviarlo"<<endl;
			cout<< "1. Guatemala"<<endl;
			cout<< "2. Izabal"<<endl;
			cout<< "3. Petén"<<endl,
			cout<< "4. Chiquimula"<<endl;
			cout<< "5. Ratalhuleu"<<endl;
			cin>> lugar;
			
			
			switch (lugar){  //dependiendo el lugar donde vaya asi se aplicara los kilometros 
			case 1: 
			    tarivolumen =(pesovolumetrico * 2.50) + (10* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			break;
			case 2:
				tarivolumen =(pesovolumetrico * 2.50) + (300* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			break;
			case 3: 
			tarivolumen =(pesovolumetrico * 2.50) + (460* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			break;                                                                          //finalizado el primer swicht por si el usuario si conoce el peso del producto 
			case 4:
				tarivolumen =(pesovolumetrico * 2.50) + (178* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			break;	
			case 5: 
			    tarivolumen =(pesovolumetrico * 2.50) + (200* 0.13);
			    cout << "la tarifa a pagar por su envio es de Q"<<tarifapeso<<endl;
			    break;
			
		}		
break;	
}
break;
}
}