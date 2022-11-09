// P014 Decimal a binario
//Alan Varela
#include <iostream>


void binario(int numero)
{
	if (numero>1)
	{
		binario(numero / 2);
	}
	std::cout << numero % 2 ;
}

int main()
{
	int numero;
	
	std::cout << "Decimal a binario"<<std::endl;
	std::cout << "Introduce un numero: "; std::cin >> numero;
	std::cout << "El numero " << numero << " en binario es: "; 
	binario(numero);
}

