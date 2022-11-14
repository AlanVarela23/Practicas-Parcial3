/* P019 SumaNumerosNaturales
    Suma de “n” Números Naturales con Recusividad:
    Ejercicio: Determinar la suma de los primeros “n” numeros naturales
    n=4
    1 + 2 + 3 + 4 =10
    4 + (4-1) 3 + (3-1) 2 + (2-1) 1 = 10
    14/11/22 Alan Varela
*/

#include <iostream>

//Funcion Suma
int sumaNumerosNaturales(int n);

int main() 
{
    //Variables
    int n;
  
    std::cout << "Calculadora de la suma de los primeros 'n' numeros naturales" << std::endl;
    std::cout << "Ingrese la cantidad de numeros: "; std::cin >> n;
    //Mostrar numeros
    for (int i = 1; i < n + 1; i++) 
    {   
        std::cout << i;
        if (i < n) 
        {
            std::cout << " + ";
        }
    }
    std::cout << " = " << sumaNumerosNaturales(n) << std::endl;

    return 0;
}

//Funcion Suma
int sumaNumerosNaturales(int n) 
{
    //0=0
    if (n == 0)
    {
        return 0;
    }
    //1=1
    if (n == 1)
    {
        return 1;
    }
    //1+2=3
    else
    {
        return n + sumaNumerosNaturales(n - 1);
    }

}