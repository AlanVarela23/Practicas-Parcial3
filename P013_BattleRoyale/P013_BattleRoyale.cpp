// P013_BattleRoyale
// 13/11/11 Alan Varela

#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>
#include <conio.h>



//Propiedades Juego
struct propiedadesJuego
{
	bool partidaEnCurso = true;
	int disparos = 0;
	int muertesTotales = 0;
	int jugadoresVivos = 20;
}battle;
//Jugadores
struct propiedadesJugador {
	std::string nombre;
	int escudo = 0;
	int vida = 0;
	int ataque = 0;
	int habilidad = 0;
	int muertes = 0;
	bool Vivo = true;
}jugadores[20];

//Funcion Pelea
void desarrolloPartida(int a, int b);
//Asignacion Valores
void Valores();
//Aviones
void Aviones();
//Jugador con mas muertes
void masKills();
//PowerUp
void powerUp(int i);

int main()
{
	//Jugadores
	jugadores[1].nombre = "Randy Orton"; jugadores[2].nombre = "John Cena"; jugadores[3].nombre = "Chabelo"; jugadores[4].nombre = "Amlo"; jugadores[5].nombre = "Trump";
	jugadores[6].nombre = "Mau"; jugadores[7].nombre = "Pepe"; jugadores[8].nombre = "Toretto"; jugadores[9].nombre = "Goku"; jugadores[10].nombre = "Jorge el curioso";
	jugadores[11].nombre = "Isaac Newton"; jugadores[12].nombre = "Dwayne Johnson"; jugadores[13].nombre = "Frida Kahlo"; jugadores[14].nombre = "Napoleon";
	jugadores[15].nombre = "Benito Juarez"; jugadores[16].nombre = "Michael Jackson"; jugadores[17].nombre = "Kratos"; jugadores[18].nombre = "Master Chief";
	jugadores[19].nombre = "Walter White";

	//Variables
	srand(time(0));



	std::cout << "******************* Battle Royale ******************" << std::endl;
	std::cout << "Cual es tu nombre?" << std::endl;
	std::getline(std::cin, jugadores[0].nombre);
	Sleep(500);
	std::cout << "Bienvenido a la batalla " << jugadores[0].nombre << "!" << std::endl;
	Sleep(500);
	std::cout << "Antes de comenzar, vamos a presentar a los jugadores!" << std::endl;
	Sleep(1200);
	for (int i = 0; i <= 19; i++)
	{
		std::cout << "Representando al Distrito " << i + 1 << " " << jugadores[i].nombre << "!" << std::endl;
		Sleep(400);
	}
	std::cout << "\nPresiona ENTER para empezar..." << std::endl;
	std::cin.get();
	system("CLS");
	//Asignacion de valores
	Valores();
	//Empieza la batalla
	Aviones();


	//Contador batalla
	std::cout << "La batalla empieza en " << std::endl;
	for (int i = 10; i >= 0; i--)
	{
		Sleep(500);
		std::cout << i << std::endl;
	}
	std::cout << "\nSuerte a todos y que gane el mejor!" << std::endl;
	Sleep(1500);
	system("CLS");
	std::cout << "Jugadores vivos: " << battle.jugadoresVivos << "\n" << std::endl;
	while (battle.partidaEnCurso)
	{
		int jugadorUno = rand() % 20;
		int jugadorDos = rand() % 20;
		int jugadorRand = rand() % 20;
		//Desarrolla Battle Royale
		if ((jugadores[jugadorUno].Vivo == true && jugadores[jugadorDos].Vivo == true) && (jugadorUno != jugadorDos))
		{
			desarrolloPartida(jugadorUno, jugadorDos);
			if (jugadores[jugadorRand].Vivo == true)
			{
				powerUp(jugadorRand);
			}
		}
	}
	masKills();
	_getch();
	return 0;
	//Main Final
}

//Pelea
void desarrolloPartida(int a, int b)
{

	//Comparar habilidades, jugador con mayor habilidad ataca primero.
	if (jugadores[a].habilidad > jugadores[b].habilidad)
	{
		std::cout << jugadores[a].nombre << " esta peleando con " << jugadores[b].nombre << std::endl;
		if (jugadores[a].ataque > jugadores[b].escudo)
		{
			jugadores[b].escudo = 0;
		}
		else
		{
			for (int i = 0; jugadores[b].escudo <= 0; i++)
			{
				jugadores[b].escudo -= jugadores[a].ataque;
			}
			jugadores[b].escudo = 0;

		}
		std::cout << jugadores[a].nombre << " le rompio el escudo a " << jugadores[b].nombre << std::endl;
		if (jugadores[a].ataque > jugadores[b].vida)
		{
			std::cout << jugadores[a].nombre << " mato a " << jugadores[b].nombre << std::endl;
		}
		else
		{
			for (int i = 0; jugadores[b].vida <= 0; i++)
			{
				jugadores[b].vida -= jugadores[a].ataque;
			}
			std::cout << jugadores[a].nombre << " mato a " << jugadores[b].nombre << std::endl;
		}
		jugadores[a].muertes += 1; //Jugador A mato a jugador B
		jugadores[b].vida = 0; //Vida Jugador B es 0
		jugadores[b].Vivo = false; //Jugador B !Vivo esta muerto
		battle.jugadoresVivos--;
		std::cout << "\nJugadores vivos: " << battle.jugadoresVivos << std::endl;
		Sleep(400);
		if (battle.jugadoresVivos == 1)
		{
			battle.partidaEnCurso = false;
			std::cout << "\n";
			std::cout << jugadores[a].nombre << " es el ultimo sobreviviente en pie " << std::endl;
		}
		else
		{
			std::cout << "\nPresiona ENTER para continuar..." << std::endl;
			std::cin.get();
			system("CLS");
		}
	}

}
//Aviones
void Aviones()
{
	std::cout << "                    _                                      " << std::endl;
	std::cout << "                  -=\\`\\                                  " << std::endl;
	std::cout << "              |\\ ____\\_\\__                              " << std::endl;
	std::cout << "            -=\\c`\"\"\"\"\"\"\" \"`)                      " << std::endl;
	std::cout << "               `~~~~~/ /~~`\                               " << std::endl;
	std::cout << "                 -==/ /                                    " << std::endl;
	std::cout << "                   '-'                                     " << std::endl;
	std::cout << "                  _  _                                     " << std::endl;
	std::cout << "                 ( `   )_                                  " << std::endl;
	std::cout << "                (    )    `)                               " << std::endl;
	std::cout << "              (_   (_ .  _) _)                             " << std::endl;
	Sleep(777);
	system("CLS");
	std::cout << "                      _                                    " << std::endl;
	std::cout << "                    -=\\`\\                                " << std::endl;
	std::cout << "                |\\ ____\\_\\__                            " << std::endl;
	std::cout << "              -=\\c`\"\"\"\"\"\"\" \"`)                    " << std::endl;
	std::cout << "                 `~~~~~/ /~~`\                             " << std::endl;
	std::cout << "                   -==/ /                                  " << std::endl;
	std::cout << "                     '-'                                   " << std::endl;
	std::cout << "          _  _											 " << std::endl;
	std::cout << "         ( `   )_										     " << std::endl;
	std::cout << "        (    )    `)									     " << std::endl;
	std::cout << "      (_   (_ .  _) _)									 " << std::endl;
	Sleep(777);
	system("CLS");
	std::cout << "                          _                                    " << std::endl;
	std::cout << "                        -=\\`\\                                " << std::endl;
	std::cout << "                    |\\ ____\\_\\__                            " << std::endl;
	std::cout << "                  -=\\c`\"\"\"\"\"\"\" \"`)                    " << std::endl;
	std::cout << "                     `~~~~~/ /~~`\                             " << std::endl;
	std::cout << "                       -==/ /                                  " << std::endl;
	std::cout << "                        '-'                                    " << std::endl;
	std::cout << "     _  _													     " << std::endl;
	std::cout << "    ( `   )_													 " << std::endl;
	std::cout << "   (    )    `)							  					 " << std::endl;
	std::cout << " (_   (_ .  _) _)											     " << std::endl;
	Sleep(400);
	std::cout << "\nEntrando al campo de batalla... " << std::endl;
	Sleep(2000);
	system("CLS");

}
//Asignacion de valores
void Valores()
{
	for (int i = 0; i < 20; i++)
	{
		jugadores[i].vida = 1 + rand() % 50;
		jugadores[i].escudo = 1 + rand() % 50;
		jugadores[i].ataque = 1 + rand() % 50;
		jugadores[i].habilidad = 1 + rand() % 50;
		jugadores[i].muertes = 0;
		jugadores[i].Vivo = true;
	}
}
//Mas muertes
void masKills()
{
	std::cout << "\n";
	int mayorMuertes = 0;
	for (int i = 0; i < 20; i++)
	{
		if (jugadores[i].muertes > mayorMuertes)
		{
			mayorMuertes = jugadores[i].muertes;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (jugadores[i].muertes == mayorMuertes)
		{
			std::cout << "El jugador con mas kills fue " << jugadores[i].nombre << " con " << jugadores[i].muertes << std::endl;
		}
	}
}
//PowerUp
void powerUp(int i)
{

	int opc = rand() % 5;;

	switch (opc)
	{
	case 1:
		std::cout << jugadores[i].nombre << " encontro balas perforantes, su ataque de " << jugadores[i].ataque << " aumento a " << jugadores[i].ataque + 10 << std::endl;
		jugadores[i].ataque += 10;
		std::cout << "\n";
		break;
	case 2:
		std::cout << jugadores[i].nombre << " encontro un libro, su habilidad de " << jugadores[i].habilidad << " aumento a " << jugadores[i].habilidad + 5 << std::endl;
		jugadores[i].habilidad += 5;
		std::cout << "\n";
		break;
	case 3:
		std::cout << jugadores[i].nombre << " encontro una armadura de combate, su escudo de " << jugadores[i].escudo << " aumento a " << jugadores[i].escudo + 7 << std::endl;
		jugadores[i].escudo += 7;
		std::cout << "\n";
		break;
	case 4:
		std::cout << jugadores[i].nombre << " encontro una pocion de vida, su vida de " << jugadores[i].vida << " aumento a " << jugadores[i].vida + 5 << std::endl;
		jugadores[i].vida += 5;
		std::cout << "\n";
		break;
	}
}