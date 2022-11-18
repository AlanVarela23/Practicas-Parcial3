// P020 Tutorial 1.cpp
//

#include <iostream>
#include "P020Tutorial1.h"

int main()
{
	int n1, n2;
	std::cout << "Introduce el primer numero: "; std::cin >> n1;
	std::cout << "Introduce el segundo numero: "; std::cin >> n2;
	std::cout << "\nLa suma es: " << Aritmetica::Suma(n1, n2) << std::endl;
	std::cout << "La resta es: " << Aritmetica::Resta(n1, n2) << std::endl;
	std::cout << "La multiplicacion es: " << Aritmetica::Multiplicacion(n1, n2) << std::endl;
	std::cout << "La division es: " << Aritmetica::Division(n1, n2) << std::endl;
}

