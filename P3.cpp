// Simulacro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h> //Libreria para utilizar las funciones de generar aleatorios
#include "conio.h"
using namespace std;

//Declarar funciones
void GenerarMostrarDatos(int *vector);
void Lista_DebajodelPromedio(int *vector);
void Devuelve_menor(int *vector);

int main()
{
	int fin=0;
	int *vAlumnos = new int[39];
	do
	{
		GenerarMostrarDatos(vAlumnos);
		//cout<<"Listar "<<vAlumnos[1]<<endl;
		Lista_DebajodelPromedio(vAlumnos);
		Devuelve_menor(vAlumnos);

		cout << "Para terminar el programa ingresar 0 "<<endl;
		cin >> fin;
	} while (fin != 0);

	_getch();
}

void GenerarMostrarDatos(int *vector) {
	srand(time(NULL)); // Inicializar los número aleatorios
	for (int i = 0; i < 40; i++)
	{
		vector[i]= rand() % 51; //Asignar valores al vector
	}
	for (int i = 0; i < 40; i++)
	{
		cout<<"La nota del alumno "<< i << " es "<<vector[i]<<endl; //Mostrar elementos
	}
}

void Lista_DebajodelPromedio(int *vector) {

}

void Devuelve_menor(int *vector) {

}



