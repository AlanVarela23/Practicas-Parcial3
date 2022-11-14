// P016_Palindroma
//14/11/22 Alan Varela

#include <iostream>
#include <cstring>

//Funcion Palindroma
int palindroma(char palabra[], int ini, int fin);

int main()
{
    //Variables
    char palabra[20];
    int longitud, EsPalindroma;
    
    std::cout << "Introduce una palabra y te voy a decir si es palindroma o no" << std::endl;;
    std::cin.getline(palabra, 20);
    //Longitud palabra
    longitud = strlen(palabra);
    //(palabra, inicia en 0, longitud -1(final de palabra))[5]{r,o,t,o,r}
    EsPalindroma = palindroma(palabra, 0, longitud-1);
    //Es palindroma
    if (EsPalindroma == 1)
        std::cout << "\nLa palabra ES palindroma\n";
    //No es palindroma
    else if (EsPalindroma == 0)
        std::cout << "\nLa palabra NO es palindroma\n";
    
    return 0;
}

//Funcion Palindroma(palabra, inicio, final)
int palindroma(char palabra[], int posicionInicial, int posicionFinal) {
    if (posicionInicial >= posicionFinal) 
    {
        return 1;
    }    
    if (palabra[posicionInicial] == palabra[posicionFinal])
    {
        palindroma(palabra, posicionInicial + 1, posicionFinal - 1);
    }
    else 
    {
        return 0;
    }
}

