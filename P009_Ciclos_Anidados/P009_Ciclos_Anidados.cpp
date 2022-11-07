// P009_Ciclos_Anidados.cpp : 
// 22_17_10_009
// Alan Varela


#include <iostream>
#include <Windows.h>

int main()
{
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			Sleep(1000);
			std::cout << j << k << std::endl;
		}
	}
}
