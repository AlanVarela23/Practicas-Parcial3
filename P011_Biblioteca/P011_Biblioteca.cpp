// P011_Biblioteca.cpp 
// 2022_10_24
// Alan Varela

#include <iostream>
#include <string>

int main()
{
    //Variables
    std::string Titulo[3];
    int Ano[3];
    std::string Autor[3];

    //Pedir datos de los libros
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Introduce el titulo del libro " << i + 1 << ": "; std::getline(std::cin, Titulo[i]);
        std::cout << "Introduce los datos del ano de publicacion del libro " << i + 1 << ": ";
        std::cin >> Ano[i];
        std::cin.ignore();
        std::cout << "Introduce el autor del libro " << i + 1 << ": "; std::getline(std::cin, Autor[i]);
        std::cout << "\n";

    }
    //Mostrar datos de los libros
    std::cout << "Los datos de los libros son: " << std::endl;
    for (int j = 0; j < 3; j++)
    {
        std::cout << "Libro " << j + 1 << " " << Titulo[j] << std::endl;
        std::cout << "Ano de publicacion del libro " << j + 1 << ": " << Ano[j] << std::endl;
        std::cout << "Autor del libro " << j + 1 << ": " << Autor[j] << std::endl;
        std::cout << "\n";
    }

    return 0;
}
