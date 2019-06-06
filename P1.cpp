#include "pch.h"
#include <iostream>
#include "conio.h"
using namespace std;

//Declarar Funciones
void menu(int *opcion);
int fibonacci(int numero);
void graficar(int n);

int main()
{
	int *opcion = new int;
	int n=0;
	do
	{
		menu(opcion);
		switch (*opcion)
		{
		case 1:
			cout << "Ingrese n: ";
			cin >> n;
			//Validacion de n
			cout<< "El n-esimo termino es "<< fibonacci(n) << endl;
			break;
		case 2:
			cout << "Ingrese n: ";
			cin >> n;
			graficar(n);
			break;
		case 3:
			break;
		default:
			cout << "Por favor ingresar una alternativa correcta." << endl;
			break;
		}
	} while (*opcion != 3);

	_getch();
}

void menu(int *opcion) {
	cout << "MENU PRINCIPAL" << endl;
	cout << "[1] Hallar n-esimo termino" << endl;
	cout << "[2] Graficar" << endl;
	cout << "[3] Fin" << endl;
	cout << "Opcion: ";
	cin >> *opcion;
}

int fibonacci(int numero) {
	int fib = 0;
	if (numero == 1 || numero == 2) {
		fib = 1;
	}
	else {
		fib = fibonacci(numero-1)+ fibonacci(numero - 2);
	}
	return fib;
}

void graficar(int n) {
												
	for (int j = 0; j < n; ++j) {             
		for (int i = 0; i < n - j - 1; ++i)     
			cout << " ";
		for (int i = 0; i < j+1; ++i)  
			cout << fibonacci(i+1) << " ";
		cout << endl;
	}

}