#include <iostream>
using namespace std;
main(){
//--------------------------------EJERCICIO 3-----------------------------------------------
/*	int num=0;
	cout<<"Ingresar el numero: ";
	cin>>num;
	if(num>0){
		cout<<"Positivo"<<endl;
	}else{
		if(num==0){
			cout<<"Neutro"<<endl;
			}else{
				cout<<"Negativo"<<endl;
		}
	
	}*/
//------------------------------EJERCICIO 2------------------------------------------------
/*	string pais="";
	cout<<"ingrese el Pais: ";
	cin>>pais;
	if(pais=="Guatemala" or pais=="guatemala" or pais=="guate" or pais=="Guate") {
		cout<<"Yo soy de "<<pais<<endl;
	}else{
		cout<<pais<<endl;
	}*/
//------------------------------EJERCICIO 3------------------------------------------------
/*	int num=0;
	cout<<"Ingrese Numero";
	cin>>num;
	if ((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}*/
//------------------------------EJERCICIO 4------------------------------------------------	
/*  char lapiz,lapicero;
	cout<<"Trae lapiz (S/N): ";
	cin>>lapiz;
	cout<<"Trae lapicero (S/N): ";
	cin>>lapicero;
	
	if(lapiz=='s' && lapicero=='s' || lapiz=='S' && lapicero=='S'){
		cout<<"Puede entrar a mi clase"<<endl;
		}else{
			cout<<"No puede entrar a mi clase"<<endl;
		}*/


	int codigo=0;
	cout<<"Ingrese Codigo de Area: ";
	cin>>codigo;
	switch(codigo){
			case 501 : cout<<"Belice"<<endl;
				break;
			case 502 : cout<<"Guatemala"<<endl;
				break;
			case 503 : cout<<"El salvador"<<endl;
				break;
			case 504 : cout<<"Honduras"<<endl;
				break;
			case 505 : cout<<"Nicaragua"<<endl;
				break;
			case 506 : cout<<"Panama"<<endl;
				break;
			default : cout<<"Este codigo no es de Centro america"<<endl;
	}


	system("pause");

}
