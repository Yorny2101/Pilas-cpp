#include <iostream>
using namespace std;

struct Nodo{   //nodo de la pila
    int dato;
    Nodo *siguiente;
};

void add_pile(Nodo *&, int);

int main() {

}

void add_pile(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo; //asignacion dinamica de memoria para un nuevo nodo
    nuevo_nodo ->dato = n;
    nuevo_nodo -> siguiente = pila; //enlace con los datos q se tenian con anterioridad
    pila = nuevo_nodo;              // asinacion del nuevo nodo a pila
    



}