#include <iostream>
#include <math.h>

using namespace std; 

//Desarrolle un programa en C++ en que al crear una clase, 
//esta tenga 3 formulas de longitud para realizar conversiones.

int menu(){
	int opcion; 
	
	system ("cls");
	
	cout<<"*******************************************\n";
	cout<<"*                  MENU                   *\n";
	cout<<"*  1. Convertir metros a centimetros      *\n";
	cout<<"*  2. Convertir kilometros a metros       *\n";
	cout<<"*  3. Convertir pies a pulgadas           *\n";
	cout<<"*  4. Salir                               *\n";
	cout<<"*******************************************\n";
	cout<<"\n";
	cout<<"  Seleccione la opcion: ";
	cin>>opcion;
	
	return opcion;
}

class Conversiones{
	public: 
		void Mtrs_Cm (){
			system ("cls");
			int metros, centimetros; 
			cout<<"\n";
			cout<<"***********  Convertir metros a centimetros  ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese los metros: ";
			cin>>metros;
			centimetros= metros*100;
			cout<<"\n"; 
			cout<<metros<<" metros son: "<<centimetros<<" Centimetros."<<endl;
			cout<<"\n";
		system ("pause");
		}
		void Km_Mtrs(){
		system ("cls");
			int Kilometros, Metros;
			cout<<"\n";
			cout<<"***********  Convertir kilometros a metros  ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese los kilometros: ";
			cin>>Kilometros;
			Metros=Kilometros*1000;
			cout<<"\n";
			cout<<Kilometros<<" Kilometros son: "<<Metros<<" Metros."<<endl;
			cout<<"\n";
		system ("pause");
		}
		void pies_pulgadas(){
		system ("cls");
			double pies, pulgadas; 
			cout<<"\n";
			cout<<"***********  Convertir pies a pulgadas  ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese los pies: ";
			cin>>pies;
			cout<<"\n";
			pulgadas= pies * 12;
			cout<<pies<<" Pies son: "<<pulgadas<<" Pulgadas."<<endl;
			cout<<"\n";
		system ("pause");
		}	
};

int main(int argc, char** argv) {
	int opt;
	Conversiones C;
	
	while (opt!=4){
		opt = menu();
		
		switch(opt){
			
			case 1: 
				C.Mtrs_Cm();
				break;
			case 2: 
				C.Km_Mtrs();
				break;
			case 3:  
				C.pies_pulgadas();
				break;
			case 4: 
			
				break;
			default: 
				cout<<"Opcion no valida."<<endl;
				cout<<"\n";
				system ("pause");
		}
	}

	return 0;
}
