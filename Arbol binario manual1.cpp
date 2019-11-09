#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* izquierda, *derecha;
};
Nodo* raiz = NULL;
int main(){
	Nodo *aux=raiz;
	raiz = new Nodo();
	raiz->dato=7;
	raiz->izquierda=new Nodo();
	raiz->derecha=new Nodo();
	aux=raiz->izquierda;
	aux->dato=5;
	aux->izquierda=new Nodo();
	aux->derecha=new Nodo();
	aux=aux->izquierda;
	aux->dato=2;
	aux->izquierda=NULL;
	aux->derecha=NULL;
	aux=raiz->izquierda;
	aux=aux->derecha;
	aux->dato=3;
	aux->izquierda=NULL;
	aux->derecha=NULL;
	aux=raiz->derecha;
	aux->dato=4;
	aux->izquierda=NULL;
	aux->derecha=new Nodo();
	aux=aux->derecha;
	aux->dato=1;
	aux->izquierda=NULL;
	aux->derecha=NULL;
	
	cout<<"  "<<raiz->dato<<endl;
	cout<<" "<<raiz->izquierda->dato<<" "<<raiz->derecha->dato<<endl;
	cout<<raiz->izquierda->izquierda->dato<<" "<<raiz->izquierda->derecha->dato<<" "<<raiz->derecha->derecha->dato<<endl;
	return 0;
}

