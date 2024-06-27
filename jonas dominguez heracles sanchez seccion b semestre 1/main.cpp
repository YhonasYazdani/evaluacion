#include<iostream>

using namespace std;
int main(){
	string rsz, ced_rif, nom, prod;
	int cant;
	float total;
	cout<<"ingrese la razon social: ";
	cin>>rsz;
	cout<<"ingrese la cedula o RIF: ";
	cin>>ced_rif;
	cout<<"coloque su nombre: ";
	cin>>nom;
	cout<<"ingrese el producto a comprar: ";
	cin>>prod;
	cout<<"¿Que cantidad de "<<prod<<" desea comprar? ";
	cin>>cant;
	if (prod=="refresco" /*&& prod=="Refresco" && prod=="refrescos" && prod=="Refrescos"*/){
		if (cant>= 6){
			total=5*cant;
		}
		else{
		total=10*cant;
		}
	}
	else if (prod=="malta" /*&& prod=="Malta" && prod=="maltas" && prod=="Maltas"*/){
		if (cant>=6){
			total=7*cant;
		}
		else{
		total=12*cant;
		}	
	}
	else{ 
	cout<<"producto no encontrado";
	}
	cout<<"\nmonto a pagar "<<total<<" $ ";
	 
	return 0;
}
