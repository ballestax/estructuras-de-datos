#include <iostream.h>
#include <stdio.h>
#include <string.h>

struct pelicula{
	char nombre[30];
	char genero[20];
	char fecha[20];
	char protagonistas[50];
	char antagonistas[50];
};

const int MAX = 20;

int main(){
	
	pelicula peliculas[MAX];
	int opc;
	int ind = 0, i;
	
	do{
		cout<<" \n======== PELICULAS =========="<<endl;
		cout<<"1. Ingresar una pelicula."<<endl;
		cout<<"2. Buscar una pelicula."<<endl;
		cout<<"3. Modificar una pelicula."<<endl;
		cout<<"0. Salir."<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingrese los datos de la pelicula."<<endl;
				cout<<" Nombre:";
				gets(peliculas[ind].nombre);
				cout<< "Genero:";
				gets(peliculas[ind].genero);
				cout<<" Fecha de lanzamiento:";
				gets(peliculas[ind].fecha);
				cout<<" Protagonistas:";
				gets(peliculas[ind].protagonistas);
				cout<<" Antagonistas:";
				gets(peliculas[ind].antagonistas);
				ind++;
				break;
			case 2:
				char nombre[30];
				int encontrada = 0;
				cout<<"Ingrese el nombre de la pelicula a buscar: ";
				gets(nombre);
				for(i=0; i<ind; i++){
					if(strcmp(nombre, peliculas[i].nombre)==0){
						encontrada = 1;
						break;
					}
				}
				if(encontrada == 1){
					cout<<"Pelicula encontrada"<<endl;
					cout<<" Nombre: "<<peliculas[i].nombre<<endl;
					cout<<" Genero: "<<peliculas[i].genero<<endl;
					cout<<" Fecha de lanzamiento: "<<peliculas[i].fecha<<endl;
					cout<<" Protagonistas: "<<peliculas[i].protagonistas<<endl;
					cout<<" Antagonistas: "<<peliculas[i].antagonistas<<endl;		
				}else{
					cout<<"Pelicula no enontrada"<<endl;
				}
				break;
			case 3:
				int indP;
				if(ind>0){
					cout<<"Ingrese la pelicula a modificar (1-"<<ind<<"):";
					cin>>indP;
					if(indP<=ind){
						cout<<"Ingrese el nuevo nombre para["<<peliculas[indP-1].nombre<<"]:";
						gets(peliculas[indP-1].nombre);
					}else{
						cout<<"indice no valido"<<endl;
					}
				}else{
					cout<<"Error: no hay peliculas para modificar"<<endl;
				}
		}
		
	}while(opc!=0);
	
}