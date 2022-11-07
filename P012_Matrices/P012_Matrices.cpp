// P012_Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Apuntador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>

int main()
{
	int matriz[2][3];
	 
	//Introducir datos matriz 2x3
	std::cout << "Matriz 2x3\n";
	for (int i = 0; i < sizeof(matriz) / sizeof(matriz[0]); i++)
	 {
		 for (int j = 0; j < sizeof(matriz[0])/sizeof(matriz[0][0]); j++)
		 {
			 std::cout << "Introduce el valor de la posicion [" << i << "] [" << j << "] : ";
			 std::cin >> matriz[i][j];
		 }
	 }
	 
	 //Mostrar datos matriz 2x3
	 for (int i = 0; i < sizeof(matriz) / sizeof(matriz[0]); i++)
	 {
		 for (int j = 0; j < sizeof(matriz[0]) / sizeof(matriz[0][0]); j++)
		 {
			 std::cout << matriz[i][j] << " ";

		 }
		 std::cout << "\n";
	 }
	 std::cout << "\n";


	//Matriz dinamica 
	std::cout << "Matriz dinamica\n";
	
	//Variables
	int fila;
	int col;
	srand(time(0));
	
	std::cout << "Introduce el numero de filas: "; std::cin >> fila;
	std::cout << "Introduce el numero de columnas: "; std::cin >> col;
	int** matrizDin = new int* [fila];
	for (int i = 0; i < fila; i++)
	{
		matrizDin[i] = new int[col];

	}

	if (col > 3 || fila > 3)
	{
		for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matrizDin[i][j] = rand() % 10;
			}
		}

	}
	else
	{
		for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < col; j++)
			{
				std::cout << "Introduce el valor de la posicion [" << i << "] [" << j << "] : ";
				std::cin >> matrizDin[i][j];
			}
		}
	}


	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << matrizDin[i][j] << " ";

		}
		std::cout << "\n";
	}
	
	return 0;
}