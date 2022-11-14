 // P018 ProductoDeDosNumeros
 //  14/11/22 Alan Varela

#include<iostream>

/*
2x8=16   2+2+2+2+2+2+2+2

5x3=15
5 es multiplicando
3 es multiplicador
15 es producto

*/
//Funcion Producto
int productoDosNumeros(int multiplicando, int multiplicador);

int main() 
{
    //Variables
    int multiplicando, multiplicador;
    //Calculadora
    std::cout << "Calculadora del producto de 2 numeros " << std::endl;
    std::cout << "Ingresa el multiplicando: ";
    std::cin >> multiplicando;
    std::cout << "Ingrese el multiplicador: ";
    std::cin >> multiplicador;

    std::cout << "El producto de " << multiplicando << " y " << multiplicador << " es: " << productoDosNumeros(multiplicando, multiplicador) << std::endl;

    return 0;
}
//Funcion Producto
int productoDosNumeros(int multiplicando, int multiplicador) {
    //2x0 or 0x2 = 0
    if (multiplicando == 0 || multiplicador == 0)
    {
        return 0;
    }
    //2x1 = 2
    if (multiplicador == 1)
    {
        return multiplicando;
    }
    //1x2 = 2
    if (multiplicando == 1)
    {
        return multiplicador;
    }
    /*
    2x4= 2+2+2+2
    */
    else
    {
        return multiplicando + productoDosNumeros(multiplicando, multiplicador - 1);
    }
}