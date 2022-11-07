/*
Alan Varela
25/10/2022

27-283 Es un jugador Europeo
283-616 Americano, Asiatico o Africano
*/



#include <iostream>
#include <Windows.h>
#include <conio.h>

int main()
{

    char resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9, resp10, resp11, resp12;

    std::cout << "Elige un futbolista y voy a tratar de adivinarlo\n";
    Sleep(500);
    std::cout << "Listo?" << std::endl;
    std::cout << "\n";
    std::cout << "Presiona ENTER para empezar...";
    std::cin.get();
    system("cls");
    //1.- Si es europeo
    std::cout << "Tu futbolista nacio en europa? (S/N)\n";
    std::cin >> resp1;
    if (resp1 == 'S' || resp1 == 's')
    {
        //2. Es europeo y ha ganado un balon de oro
        std::cout << "Tu futbolista ha ganado algun balon de oro? (S/N)\n";
        std::cin >> resp2;
        if (resp2 == 'S' || resp2 == 's')
        {
            //3.-Es europeo, ha ganado un balon de oro y ha jugado/juega en el Real Madrid
            std::cout << "Tu futbolista juega actualmente o alguna vez jugo en el Real Madrid? (S/N)\n";
            std::cin >> resp3;
            if (resp3 == 'S' || resp3 == 's')
            {
                //4.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, es frances
                std::cout << "Tu futbolista es frances? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, es frances y sigue jugando futbol
                    std::cout << "Tu futbolista sigue jugando futbol? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Karim Benzema";
                    }
                    //5.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, es frances y NO jugando futbol
                    else
                    {
                        std::cout << "\nTu futbolista es Zinedine Zidane";
                    }
                }
                //4.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, NO es frances
                else
                {
                    //5.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, es portugues
                    std::cout << "Tu futbolista es portugues? (S/N)\n";
                    std::cin >> resp5;

                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Cristiano Ronaldo";
                    }
                    //5.-Es europeo, ha ganado un balon de oro, ha jugado/juega en el Real Madrid, es portugues, la unica opcion es CRISTIANO RONALDO
                    else
                    {
                        std::cout << "Esa opcion no es posible, tu futbolista es Cristiano Ronaldo?";
                    }
                }
            }
            //3.-Es europeo, ha ganado un balon de oro y NO ha jugado/juega en el Real Madrid
            else
            {
                //4.-Es europeo, ha ganado un balon de oro y NO ha jugado/juega en el Real Madrid, ya se retiro del futbol
                std::cout << "Tu futbolista ya se retiro del futbol? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.-Es europeo, ha ganado un balon de oro y NO ha jugado/juega en el Real Madrid, ya se retiro del futbol, es Ucraniano
                    std::cout << "Tu futbolista es Ucraniano? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Andriy Shevchenko";
                    }
                    //5.-Es europeo, ha ganado un balon de oro y NO ha jugado/juega en el Real Madrid, ya se retiro del futbol, es Italiano o no existe
                    else
                    {
                        std::cout << "Tu futbolista es Italiano? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            std::cout << "\nTu futbolista es Roberto Baggio";
                        }
                        else
                        {
                            std::cout << "No existe tu jugador";
                        }
                    }
                }
                //4.-Es europeo, ha ganado un balon de oro, NO ha jugado/juega en el Real Madrid, NO se ha retirado del futbol
                else
                {
                    std::cout << "\nNo se quien es tu jugador\n";
                }
            }
        }
        //2.- Es europeo pero no ha ganado un balon de oro
        else
        {
            //3.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol
            std::cout << "Tu futbolista sigue jugando futbol? (S/N)\n";
            std::cin >> resp3;
            if (resp3 == 'S' || resp3 == 's')
            {
                //4.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en la Premier League
                std::cout << "Tu futbolista juega en la Premier League? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en la Premier League y en el Manchester City
                    std::cout << "Tu futbolista juega en el Manchester City? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        //6.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en la Premier League y en el Manchester City, es de Noruega
                        std::cout << "Tu futbolista es de Noruega? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            std::cout << "\nTu futbolista es Erling Haaland\n";
                        }
                        //6.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en la Premier League y en el Manchester City, es de Belgica
                        else
                        {
                            std::cout << "Tu futbolista es de Belgica? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                std::cout << "\nTu futbolista es Kevin De Bruyne\n";

                            }
                            else
                            {
                                std::cout << "Tu futbolista no existe\n";
                            }

                        }

                    }
                    //5.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en la Premier League pero NO en el Manchester City
                    else
                    {
                        std::cout << "\nTu futbolista no esta disponible en esta version del programa\n";
                    }
                }
                //4.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega una liga DIFERENTE a la Premier League
                else
                {
                    std::cout << "Tu futbolista juega en LaLiga? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        //5.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en LaLiga Santander, juega en el FC Barcelona
                        std::cout << "Tu futbolista juega en el FC Barcelona? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            //6.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en LaLiga Santander, juega en el FC Barcelona, es aleman
                            std::cout << "Tu futbolista es aleman? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                std::cout << "\nTu futbolista es Robert Lewandoski\n";
                            }
                            //6.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en LaLiga Santander, juega en el FC Barcelona, NO es aleman, era novio de Shakira
                            else
                            {
                                std::cout << "Tu futbolista era novio de Shakira? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu futbolista es Gerard Pique\n";
                                }
                                else
                                {
                                    std::cout << "\nEl futbolista no existe\n";
                                }
                            }

                        }
                        //5.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega en LaLiga Santander, NO juega en el FC Barcelona
                        else
                        {
                            std::cout << "\nTu futbolista no esta disponible en esta version del programa\n";
                        }

                    }
                    //4.- Es europeo pero NO ha ganado un balon de oro y sigue jugando futbol, juega una liga DIFERENTE a la Premier League y a LaLiga
                    else
                    {
                        std::cout << "\nTu futbolista no esta en esta disponible version del programa\n";
                    }
                }

            }
            //3.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol
            else
            {
                //4.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol, Jugo en el Real Madrid
                std::cout << "Tu futbolista jugo en el Real Madrid?  (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol, jugo en el Real Madrid, es ingles
                    std::cout << "Tu futbolista es ingles?  (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es David Beckham\n";
                    }
                    //5.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol, jugo en el Real Madrid, es 
                    else
                    {
                        std::cout << "\nTu futbolista no esta disponible en esta version del programa\n";
                    }
                }
                //4.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol, NO jugo en el Real Madrid
                else
                {
                    //5.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol, NO jugo en el Real Madrid, jugo en FC Barcelona
                    std::cout << "Tu futbolista jugo en el FC Barcelona?  (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        //6.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y es español
                        std::cout << "Tu futbolista es espanol?  (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            std::cout << "Tu futbolista jugaba de defensa?  (S/N)\n";
                            std::cin >> resp7;
                            //7.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y es español, defensa
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                std::cout << "\nTu futbolista es Charles Puyol\n";
                            }
                            //7.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y es español, NO es defensa
                            else
                            {
                                std::cout << "\nTu futbolista Xavi Hernandez\n";
                            }
                        }
                        //6.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y NO es español
                        else
                        {
                            std::cout << "Tu futbolista era suizo?  (S/N)\n";
                            std::cin >> resp7;
                            //7.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y es suizo
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                std::cout << "\nTu futbolista es Henrik Larsson\n";
                            }
                            //7.- Es europeo pero NO ha ganado un balon de oro y NO sigue jugando futbol,jugo en FC Barcelona y  NO es español NI suizo
                            else
                            {
                                std::cout << "\nTu jugador no esta disponible en esta version del programa\n";
                            }
                        }
                    }
                }
            }

        }

    }
    //1.- No es europeo
    else
    {
        //2.- Es del continente americano
        std::cout << "Tu futbolista nacio en el continente americano? (S/N)\n";
        std::cin >> resp2;
        if (resp2 == 'S' || resp2 == 's')
        {
            //3.- Es del continente americano, ha ganado un balon de oro
            std::cout << "Tu futbolista ha ganado algun balon de oro?(S/N)\n";
            std::cin >> resp3;
            if (resp3 == 'S' || resp3 == 's')
            {
                //4.- Es del continente americano, ha ganado un balon de oro, es de sudamerica
                std::cout << "Tu futbolista es de sudamerica?(S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.- Es del continente americano, ha ganado un balon de oro, es argentino
                    std::cout << "Tu futbolista es argentino?(S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu jugador es Lionel Messi\n";
                    }
                    //5.- Es del continente americano, ha ganado un balon de oro, NO es argentino
                    else
                    {
                        //6.- Es del continente americano, ha ganado un balon de oro, es brasileno
                        std::cout << "Tu futbolista es brasileno?(S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            //7.- Es del continente americano, ha ganado un balon de oro, es brasileno y jugo en el real madrid
                            std::cout << "Tu futbolista jugo en el Real Madrid?(S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                //8.- Es del continente americano, ha ganado un balon de oro, es brasileno y jugo en el real madrid y Ac Milan
                                std::cout << "Tu futbolista tambien jugo en AC Milan? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu jugador es Kaka\n";
                                }
                                //8.- Es del continente americano, ha ganado un balon de oro, es brasileno y jugo en el real madrid y pero NO Ac Milan
                                else
                                {
                                    std::cout << "\nTu jugador es Ronaldo Nazario\n";
                                }
                            }
                            //7.- Es del continente americano, ha ganado un balon de oro, es brasileno, NO jugo en el Real Madrid
                            else
                            {
                                std::cout << "\nTu jugador es Ronaldinho\n";
                            }
                        }
                        //6.- Es del continente americano, ha ganado un balon de oro, NO ES ARGENTINO NI ES BRASILENO
                        else
                        {
                            std::cout << "\nTu jugador no existe\n";
                        }
                    }
                }
                //4.- Es del continente americano, ha ganado un balon de oro, NO es de sudamerica
                else
                {
                    std::cout << "\nTu jugador no existe\n";
                }

            }
            //3.- Es del continente americano, NO ha ganado un balon de oro
            else
            {
                //4.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano
                std::cout << "Tu futbolista es mexicano? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    //5.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en europa
                    std::cout << "Tu futbolista juega en europa? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu jugador es Hirving Lozano \n";
                    }
                    //5.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico
                    else
                    {
                        //6.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en las chivas
                        std::cout << "Tu futbolista juega en las Chivas? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            //7.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en las chivas, es delantero
                            std::cout << "Tu futbolista es delantero? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                //8.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en las chivas, es delantero, solo ha jugado en mexico
                                std::cout << "Tu futbolista solo ha jugado en mexico? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu jugador es Alexis Vega\n";
                                }
                                //8.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en las chivas, es delantero, ha jugado fuera de Mexico
                                else
                                {
                                    std::cout << "\nTu jugador es J.J. Macias\n";
                                }
                            }
                            //7.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en las chivas, NO es delantero
                            else
                            {
                                std::cout << "\nTu jugador no esta disponible en esta version del programa\n";
                            }
                        }
                        //6.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico, NO juega en las chivas
                        else
                        {
                            //7.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico, juega en el america
                            std::cout << "Tu futbolista juega en el America? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                //8.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico, juega en el america es portero                               
                                std::cout << "Tu futbolista es portero? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu jugador es Guillermo Ochoa\n";
                                }
                                //8.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico, juega en el america es delantero 
                                else
                                {
                                    std::cout << "Tu futbolista es delantero? (S/N)\n";
                                    std::cin >> resp9;
                                    if (resp9 == 'S' || resp9 == 's')
                                    {
                                        std::cout << "\nTu jugador es Jurgen Damm\n";
                                    }
                                    //9.- Es del continente americano, NO ha ganado un balon de oro, Es mexicano, juega en Mexico, juega en el america NO es delantero 
                                    else
                                    {
                                        std::cout << "\nTu jugador no esta disponible en esta version del programa\n";
                                    }
                                }
                            }
                            else
                            {
                                std::cout << "\nTu jugador no esta disponible en esta version del programa\n";
                            }
                        }
                    }
                }
                //4.- Es del continente americano, NO ha ganado un balon de oro, NO es mexicano
                else
                {
                    //5.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica
                    std::cout << "Tu futbolista es de norteamerica? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        //6.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, es de Estados Unidos
                        std::cout << "Tu futbolista es de Estados Unidos? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            std::cout << "Tu futbolista sigue jugando? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                std::cout << "\nTu futbolista es Christian Pulisic \n";
                            }
                            else
                            {
                                std::cout << "Tu futbolista estuvo en la seleccion de USA? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu futbolista es Landon Donovan\n";
                                }
                                else
                                {
                                    std::cout << "\nTu futbolista no se encuentra en esta version del programa\n";
                                }
                            }
                        }
                        //6.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, es de canada
                        else
                        {
                            std::cout << "Tu futbolista es de Canada? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                //7.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, es de canada, juega en el Bayern de Munich
                                std::cout << "Tu futbolista juega en el Bayern de Munich? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu futbolista es Alphonso Davies\n";
                                }
                                //7.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, es de canada, NO juega en el Bayern de Munich
                                else
                                {
                                    std::cout << "\nTu futbolista no se encuentra en esta version del programa\n";
                                }
                            }
                            //6.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, NO ES DE CANADA O USA
                            else
                            {
                                std::cout << "\nNo conozco a tu futbolista\n";
                            }
                        }
                    }
                    //5.- Es del continente americano, NO ha ganado un balon de oro, es de Sudamerica
                    else
                    {
                        std::cout << "Tu futbolista es de sudamerica? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            //6.- Es del continente americano, NO ha ganado un balon de oro, es de Sudamerica, juega en el PSG
                            std::cout << "Tu futbolista juega en el PSG? (S/N)\n";
                            std::cin >> resp7;
                            if (resp7 == 'S' || resp7 == 's')
                            {
                                //7.- Es del continente americano, NO ha ganado un balon de oro, es de Sudamerica, juega en el PSG y es brasileno
                                std::cout << "Tu futbolista es brasileno? (S/N)\n";
                                std::cin >> resp8;
                                if (resp8 == 'S' || resp8 == 's')
                                {
                                    std::cout << "\nTu futbolista es Neymar\n";
                                }
                                //7.- Es del continente americano, NO ha ganado un balon de oro, es de Norteamerica, es de canada, NO juega en el Bayern de Munich
                                else
                                {
                                    std::cout << "\nTu futbolista no se encuentra en esta version del programa\n";
                                }
                            }
                            //6.- Es del continente americano, NO ha ganado un balon de oro, es de Sudamerica, NO juega en el PSG                           
                            else
                            {
                                std::cout << "\nNo esta disponible tu jugador en esta version del programa";
                            }
                        }
                        else
                        {
                            std::cout << "\nNo esta disponible tu jugador en esta version del programa";
                        }
                    }
                }
            }
        }
        //2.- NO es de America
        else
        {
            //3.- Es asiatico    
            std::cout << "Tu futbolista es asiatico? (S/N)\n";
            std::cin >> resp3;
            if (resp3 == 'S' || resp3 == 's')
            {
                //4.- Es asiatico , juega actualmente
                std::cout << "Tu futbolista juega actualmente? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    std::cout << "Tu futbolista juega en Tottenham? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Heung-min Son\n";
                    }
                    else
                    {
                        std::cout << "\nNo esta disponible tu jugador en esta version del programa";
                    }
                }
                //4.- Es asiatico , NO juega actualmente
                else
                {
                    std::cout << "Tu futbolista ya se retiro y jugo en Manchester United? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Park Ji-Sung\n";
                    }
                    else
                    {
                        std::cout << "Entonces,no se quien sea tu jugador\n";
                    }
                }
            }
            //3.- NO es de America NI es asiatico  
            else
            {
                std::cout << "Tu futbolista es de Africa? (S/N)\n";
                std::cin >> resp4;
                if (resp4 == 'S' || resp4 == 's')
                {
                    std::cout << "Tu futbolista juega en el Liverpool? (S/N)\n";
                    std::cin >> resp5;
                    if (resp5 == 'S' || resp5 == 's')
                    {
                        std::cout << "\nTu futbolista es Mohamed Salah\n";
                    }
                    else
                    {
                        std::cout << "Tu futbolista juega en el Bayern de Munich? (S/N)\n";
                        std::cin >> resp6;
                        if (resp6 == 'S' || resp6 == 's')
                        {
                            std::cout << "\nTu futbolista es Sadio Mane\n";
                        }
                        else
                        {
                            std::cout << "\nTu futbolista no existe\n";
                        }
                    }
                }
                else
                {
                    std::cout << "\nTu futbolista no esta disponible en esta version del programa\n";
                }
            }
        }
    }
    _getch();
}