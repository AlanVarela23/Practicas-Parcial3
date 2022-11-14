// P015_MaximoComunDivisor
// 14/11/22 Alan Varela
/*
MCD 24,18
24,18 
18,(24 % 18) = 6
6, (18 % 6)  = 0
retornar 6

MCD 72, 30
72, 30
30,(72 % 30) = 12
12, (30 % 12) = 6
6, (12 % 6) = 0

*/
#include <iostream>

int MCD(int x, int y);


int main()
{
    int n1, n2;
    
    std::cout << "Maximo Comun Divisor de 2 numeros\nIngresa el primer numero: "; std::cin >> n1;
    std::cout << "\nIngresa el segundo numero: "; std::cin >> n2;
    std::cout << "\nEl Maximo Comun Divisor de "<<n1<<" y "<<n2<<" es: "<< MCD(n1,n2)<<std::endl;
}

int MCD(int x, int y)
{
    
    if (y == 0) 
    {
        return x;
    }
    else
    {
        MCD(y, x % y);
    }
}
