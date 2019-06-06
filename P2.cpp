// Simulacro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "conio.h"
using namespace std;

//Declarar Funciones
int *Determinar_area_perimetro(int lado);


int main()
{
	int lado=0;
	int *resultados = new int[1]; //Creamos y reservamos la memoria del vector
	do
	{
		cout << "Ingrese el lado (para terminar el programa indique 0): ";
		cin >> lado;
		resultados = Determinar_area_perimetro(lado);//retorna el puntero

		cout << "El perimetro es: " << resultados[0] << endl;
		cout << "El area es: " << resultados[1] << endl;

		cout << "El perimetro es: " << Determinar_area_perimetro(lado)[0] << endl;
		cout << "El area es: " << Determinar_area_perimetro(lado)[1] << endl;
		
	} while (lado != 0);

	_getch();
}

//Lleva * porque estamos devolviendo un vector a traves de un puntero
int* Determinar_area_perimetro(int lado) { 
	int *r = new int[1];

	r[0] = lado * 4;
	r[1] = lado * lado;

	return r;
}
