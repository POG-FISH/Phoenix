#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>
#include <Windows.h> // adds "Sleep()" function
#include <string>

Item::Item() {

}
Item::~Item() {

}

void entrance() { //See if its possible to show one letter at a time
	bool select = false;
	for (int b = 0; b < 50; b++) {
		system("cls");
		std::cout << "\n      ___           ___           ___       ___           ___           ___           ___                    ___           ___     ";
		std::cout << "\n     /\\__\\         /\\  \\         /\\__\\     /\\  \\         /\\  \\         /\\__\\         /\\  \\                  /\\  \\         /\\  \\    ";
		std::cout << "\n    /:/ _/_       /::\\  \\       /:/  /    /::\\  \\       /::\\  \\       /::|  |       /::\\  \\                 \\:\\  \\       /::\\  \\   ";
		std::cout << "\n   /:/ /\\__\\     /:/\\:\\  \\     /:/  /    /:/\\:\\  \\     /:/\\:\\  \\     /:|:|  |      /:/\\:\\  \\                 \\:\\  \\     /:/\\:\\  \\  ";
		std::cout << "\n  /:/ /:/ _/_   /::\\~\\:\\  \\   /:/  /    /:/  \\:\\  \\   /:/  \\:\\  \\   /:/|:|__|__   /::\\~\\:\\  \\                /::\\  \\   /:/  \\:\\  \\ ";
		std::cout << "\n /:/_/:/ /\\__\\ /:/\\:\\ \\:\\__\\ /:/__/    /:/__/ \\:\\__\\ /:/__/ \\:\\__\\ /:/ |::::\\__\\ /:/\\:\\ \\:\\__\\              /:/\\:\\__\\ /:/__/ \\:\\__\\";
		std::cout << "\n \\:\\/:/ /:/  / \\:\\~\\:\\ \\/__/ \\:\\  \\    \\:\\  \\  \\/__/ \\:\\  \\ /:/  / \\/__/~~/:/  / \\:\\~\\:\\ \\/__/             /:/  \\/__/ \\:\\  \\ /:/  /";
		std::cout << "\n  \\::/_/:/  /   \\:\\ \\:\\__\\    \\:\\  \\    \\:\\  \\        \\:\\  /:/  /        /:/  /   \\:\\ \\:\\__\\              /:/  /       \\:\\  /:/  / ";
		std::cout << "\n   \\:\\/:/  /     \\:\\ \\/__/     \\:\\  \\    \\:\\  \\        \\:\\/:/  /        /:/  /     \\:\\ \\/__/              \\/__/         \\:\\/:/  /  ";
		std::cout << "\n    \\::/  /       \\:\\__\\        \\:\\__\\    \\:\\__\\        \\::/  /        /:/  /       \\:\\__\\                               \\::/  /   ";
		std::cout << "\n     \\/__/         \\/__/         \\/__/     \\/__/         \\/__/         \\/__/         \\/__/                                \\/__/    ";
		}
	for (int v = 0; v < 35; v++) {
		
		system("cls");
		std::cout << "\n      ___           ___           ___       ___           ___           ___           ___                    ___           ___     ";
		std::cout << "\n     /\\__\\         /\\  \\         /\\__\\     /\\  \\         /\\  \\         /\\__\\         /\\  \\                  /\\  \\         /\\  \\    ";
		std::cout << "\n    /:/ _/_       /::\\  \\       /:/  /    /::\\  \\       /::\\  \\       /::|  |       /::\\  \\                 \\:\\  \\       /::\\  \\   ";
		std::cout << "\n   /:/ /\\__\\     /:/\\:\\  \\     /:/  /    /:/\\:\\  \\     /:/\\:\\  \\     /:|:|  |      /:/\\:\\  \\                 \\:\\  \\     /:/\\:\\  \\  ";
		std::cout << "\n  /:/ /:/ _/_   /::\\~\\:\\  \\   /:/  /    /:/  \\:\\  \\   /:/  \\:\\  \\   /:/|:|__|__   /::\\~\\:\\  \\                /::\\  \\   /:/  \\:\\  \\ ";
		std::cout << "\n /:/_/:/ /\\__\\ /:/\\:\\ \\:\\__\\ /:/__/    /:/__/ \\:\\__\\ /:/__/ \\:\\__\\ /:/ |::::\\__\\ /:/\\:\\ \\:\\__\\              /:/\\:\\__\\ /:/__/ \\:\\__\\";
		std::cout << "\n \\:\\/:/ /:/  / \\:\\~\\:\\ \\/__/ \\:\\  \\    \\:\\  \\  \\/__/ \\:\\  \\ /:/  / \\/__/~~/:/  / \\:\\~\\:\\ \\/__/             /:/  \\/__/ \\:\\  \\ /:/  /";
		std::cout << "\n  \\::/_/:/  /   \\:\\ \\:\\__\\    \\:\\  \\    \\:\\  \\        \\:\\  /:/  /        /:/  /   \\:\\ \\:\\__\\              /:/  /       \\:\\  /:/  / ";
		std::cout << "\n   \\:\\/:/  /     \\:\\ \\/__/     \\:\\  \\    \\:\\  \\        \\:\\/:/  /        /:/  /     \\:\\ \\/__/              \\/__/         \\:\\/:/  /  ";
		std::cout << "\n    \\::/  /       \\:\\__\\        \\:\\__\\    \\:\\__\\        \\::/  /        /:/  /       \\:\\__\\                               \\::/  /   ";
		std::cout << "\n     \\/__/         \\/__/         \\/__/     \\/__/         \\/__/         \\/__/         \\/__/                                \\/__/    ";
		std::cout << "\n      ___           ___           ___            ___         ___           ___           ___     ";
		std::cout << "\n     /\\  \\         /\\  \\         /\\  \\          /\\  \\       /\\  \\         /\\  \\         /\\  \\    ";
		std::cout << "\n    /::\\  \\       /::\\  \\       /::\\  \\         \\:\\  \\     /::\\  \\       /::\\  \\        \\:\\  \\   ";
		std::cout << "\n   /:/\\:\\  \\     /:/\\:\\  \\     /:/\\:\\  \\    ___ /::\\__\\   /:/\\:\\  \\     /:/\\:\\  \\        \\:\\  \\  ";
		std::cout << "\n  /::\\~\\:\\  \\   /::\\~\\:\\  \\   /:/  \\:\\  \\  /\\  /:/\\/__/  /::\\~\\:\\  \\   /:/  \\:\\  \\       /::\\  \\ ";
		std::cout << "\n /:/\\:\\ \\:\\__\\ /:/\\:\\ \\:\\__\\ /:/__/ \\:\\__\\ \\:\\/:/  /    /:/\\:\\ \\:\\__\\ /:/__/ \\:\\__\\     /:/\\:\\__\\";
		std::cout << "\n \\/__\\:\\/:/  / \\/_|::\\/:/  / \\:\\  \\ /:/  /  \\::/  /     \\:\\~\\:\\ \\/__/ \\:\\  \\  \\/__/    /:/  \\/__/";
		std::cout << "\n      \\::/  /     |:|::/  /   \\:\\  /:/  /    \\/__/       \\:\\ \\:\\__\\    \\:\\  \\         /:/  /     ";
		std::cout << "\n       \\/__/      |:|\\/__/     \\:\\/:/  /                  \\:\\ \\/__/     \\:\\  \\        \\/__/      ";
		std::cout << "\n                  |:|  |        \\::/  /                    \\:\\__\\        \\:\\__\\                  ";
		std::cout << "\n                   \\|__|         \\/__/                      \\/__/         \\/__/             ";
	}
	while (select != true) {
		system("cls");
		for (int i = 0; i < 50; i++) {
			system("cls");
			display_gamelogo();
		}
		std::cout << "\n\nPlease type anything to continue...";
		if (_kbhit) {
			switch (_getch())
			{
			default:
				select = true;
				break;
			}
		}
	}
}

void battle(bool &infight, bool& gameOver, Enemy &i, Player &q) { //The menu system here uses math to move around 
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	

	while (infight == true) {
		
			system("cls");
			i.display_enemy();
			std::cout << "\n--<>--<>--<>--<>\n";
			std::cout << "\nYou are fighting " << i.get_enem_name() << "\n";
			std::cout << "\nAttack "; //option 0
			if (option == 0)
				std::cout << arrow;
			std::cout << "  Magic "; //option 1
			if (option == 1)
				std::cout << arrow;
			std::cout << "\nItems "; //option 2
			if (option == 2)
				std::cout << arrow;
			std::cout << "  Retreat "; //option 3
			if (option == 3)
				std::cout << arrow;
			std::cout << "\n\n--<>--<>--<>--<>";


			if (option == 0 && select == true) { //Attack
				std::cout << "\ntest";
				select = false;
			}
			else if (option == 1 && select == true) { //Magic
				std::cout << "\ntest";
				select = false;
			}
			else if (option == 2 && select == true) { //Items
				std::cout << "\ntest";
				select = false;
			}
			else if (option == 3 && select == true) { //Retreat
				std::cout << "\nMust retreat!!!";
				infight = false;
			}


			if (_kbhit()) {
				switch (_getch())
				{
				case 's':
					if (option == 0 || option == 1) {
						option = option + 2;
					}
					break;
				case 'w':
					if (option == 2 || option == 3) {
						option = option - 2;
					}
					break;
				case 'a':
					if (option == 1 || option == 3) {
						option--;
					}
					break;
				case 'd':
					if (option == 0 || option == 2) {
						option++;
					}
					break;
				case 'f':
					select = true;
					break;
				default:
					break;
				}
			}


		
	}
	std::cout << "\nEND OF BATTLE";
}

void health_display(Player player) {
	if (player.get_player_health() == 100) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|+++|+++|+++|+++|+++|\n";
		std::cout << "[=======[" << player.get_player_health() << "]=======]\n";

	}
	else if (player.get_player_health() > 100) {
		std::cout << "[==================================]} " << player.get_player_name() << "\n";
		std::cout << "|How do you have this much health??|\n";
		std::cout << "[==============[" << player.get_player_health() << "]===============]\n";
	}
	else if (player.get_player_health() >= 80 && player.get_player_health() < 100) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|   |+++|+++|+++|+++|\n";
		std::cout << "[=======[ " << player.get_player_health() << "]=======]\n";
	}
	else if (player.get_player_health() >= 60 && player.get_player_health() < 80) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|   |   |+++|+++|+++|\n";
		std::cout << "[=======[ " << player.get_player_health() << "]=======]\n";
	}
	else if (player.get_player_health() >= 40 && player.get_player_health() < 60) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|   |   |   |+++|+++|\n";
		std::cout << "[=======[ " << player.get_player_health() << "]=======]\n";
	}
	else if (player.get_player_health() >= 20 && player.get_player_health() < 40) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|   |   |   |   |+++|\n";
		std::cout << "[=======[ " << player.get_player_health() << "]=======]\n";
	}
	else if (player.get_player_health() > 1 && player.get_player_health() < 20) {
		std::cout << "[===================]} " << player.get_player_name() << "\n";
		std::cout << "|   |   |   |   |  +|\n";
		std::cout << "[=======[ " << player.get_player_health() << "]=======]\n";
	}
	else if (player.get_player_health() == 0) {
		std::cout << "[-=====-=*==-=======]} " << player.get_player_name() << "\n";
		std::cout << "| -*    |-  |*  |   |\n";
		std::cout << "[*=-====[  " << player.get_player_health() << "]===-=+=]\n";
	}
	else if (player.get_player_health() < 0) {
		std::cout << "[-=====-=*==-=======]} " << player.get_player_name() << "\n";
		std::cout << "| -*    |-  |*  |   |\n";
		std::cout << "[*=-====[" << player.get_player_health() << "]===-=+=]\n";
	}

}

bool menu(bool &gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
		std::cout << "\n PhoenixV.320";
		std::cout << "\n I used ascii text generator for this logo. Specifically 'Small Isometric1'";
		std::cout << "\n    ___       ___       ___       ___            ___       ___       ___       ___      ";
		std::cout << "\n   /\\__\\     /\\  \\     /\\  \\     /\\__\\          /\\__\\     /\\  \\     /\\__\\     /\\__\\     ";
		std::cout << "\n  /::L_L_   /::\\  \\   _\\:\\  \\   /:| _|_        /::L_L_   /::\\  \\   /:| _|_   /:/ _/_    ";
		std::cout << "\n /:/L:\\__\\ /::\\:\\__\\ /\\/::\\__\\ /::|/\\__\\      /:/L:\\__\\ /::\\:\\__\\ /::|/\\__\\ /:/_/\\__\\   ";
		std::cout << "\n \\/_/:/  / \\/\\::/  / \\::/\\/__/ \\/|::/  /      \\/_/:/  / \\:\\:\\/  / \\/|::/  / \\:\\/:/  /   ";
		std::cout << "\n   /:/  /    /:/  /   \\:\\__\\     |:/  /         /:/  /   \\:\\/  /    |:/  /   \\::/  /    ";
		std::cout << "\n   \\/__/     \\/__/     \\/__/     \\/__/          \\/__/     \\/__/     \\/__/     \\/__/     ";
		
		std::cout << "\n\n--<>--<>--<>--<>--<>\n";
		std::cout << "\nPlay ";
		if(option == 0)
			std::cout << arrow;
		std::cout << "\nSettings ";
		if (option == 1)
			std::cout << arrow;
		std::cout << "\nAbout/Help ";
		if (option == 2)
			std::cout << arrow;
		std::cout << "\nExtras ";
		if (option == 3)
			std::cout << arrow;
		std::cout << "\nQuit Game ";
		if (option == 4)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>--<>";
		std::cout << "\nOPTION: " << option;

		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option < 4) {
					option++;
				}
				else if (option == 4) {
					option = option - 4;
				}
				break;
			case 'w':
				if (option > 0) {
					option--;
				}
				else if (option == 0) {
					option = option + 4;
				}
				break;
			case 'f':
				select = true;
				break;
			default:
				break;
			}
		}
	}
	switch (option)
	{
	case 0:
		return gameOver = false;
		break;
	case 1:
		//Settings
		menu_settings(gameOver);
		break;
	case 2:
		//About/Help
		menu_about(gameOver);
		break;
	case 3:
		//Extras
		menu_extra(gameOver);
	case 4:
		//Quit game
		return gameOver = true;
		break;
	default:
		break;
	}
}

void menu_settings(bool& gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	std::string output;
	while (select == false) {
		system("cls");
			std::cout << "\n    ___       ___       ___       ___       ___       ___       ___       ___   ";
			std::cout << "\n   /\\  \\     /\\  \\     /\\  \\     /\\  \\     /\\  \\     /\\__\\     /\\  \\     /\\  \\  ";
			std::cout << "\n  /::\\  \\   /::\\  \\    \\:\\  \\    \\:\\  \\   _\\:\\  \\   /:| _|_   /::\\  \\   /::\\  \\ ";
			std::cout << "\n /\\:\\:\\__\\ /::\\:\\__\\   /::\\__\\   /::\\__\\ /\\/::\\__\\ /::|/\\__\\ /:/\\:\\__\\ /\\:\\:\\__\\";
			std::cout << "\n \\:\\:\\/__/ \\:\\:\\/  /  /:/\\/__/  /:/\\/__/ \\::/\\/__/ \\/|::/  / \\:\\:\\/__/ \\:\\:\\/__/";
			std::cout << "\n  \\::/  /   \\:\\/  /   \\/__/     \\/__/     \\:\\__\\     |:/  /   \\::/  /   \\::/  / ";
			std::cout << "\n   \\/__/     \\/__/                         \\/__/     \\/__/     \\/__/     \\/__/";
		std::cout << "\n--<>--<>--<>--<>";
		std::cout << "\n\nWelcome to the settings section.\n";
		std::cout << "\nControls ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\nChange Color ";
		if (option == 1)
			std::cout << arrow;
		std::cout << "\nGo Back ";
		if (option == 2)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";
		std::cout << "\nOPTION: "<< option << "\n";


		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 2) {
					option++;
				}
				else if (option == 2) {
					option = option - 2;
				}
				break;
			case 'w':
				if (option > 0) {
					option--;
				}
				else if (option == 0) {
					option = option + 2;
				}
				break;
			case 'f':
				select = true;
				break;
			default:
				break;
			}
		}
	}
	if (select == true) {
		switch (option)
		{
		case 0:
			menu_controls(gameOver);
			break;
		case 1:
			menu_color();
			break;
		case 2:
			menu(gameOver);
			break;
		default:
			break;
		}
	}

}

void menu_color() {
	int repeat = 1;
	char yn;
	while (repeat == 1) {
		std::string output = "color ";
		char color1, color2;
		system("cls");
		system("color %");
		std::cout << "\nNow type in the color combo you would like to choose: ";
		std::cin >> color1;
		std::cout << color1;
		std::cin >> color2;
		output = "color ";
		output = output += color1;
		output = output += color2;
		std::cout << output << "\n";
		system(output.c_str());
		std::cout << "\nVoila! Are you happy with this color? (y or n): ";
		std::cin >> yn;
		if (yn == 'n')
			repeat = 1;
		else if (yn == 'y')
			repeat = 0;
		
	}
}

void menu_about(bool& gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");

					std::cout << "\n    ___       ___       ___       ___       ___   ";
					std::cout << "\n   /\\  \\     /\\  \\     /\\  \\     /\\__\\     /\\  \\  ";
					std::cout << "\n  /::\\  \\   /::\\  \\   /::\\  \\   /:/ _/_    \\:\\  \\ ";
					std::cout << "\n /::\\:\\__\\ /::\\:\\__\\ /:/\\:\\__\\ /:/_/\\__\\   /::\\__\\";
					std::cout << "\n \\/\\::/  / \\:\\::/  / \\:\\/:/  / \\:\\/:/  /  /:/\\/__/";
					std::cout << "\n   /:/  /   \\::/  /   \\::/  /   \\::/  /   \\/__/   ";
					std::cout << "\n   \\/__/     \\/__/     \\/__/     \\/__/            ";

		std::cout << "\n--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>\n";
		std::cout << "\nWelcome to the about section!";
		std::cout << "\n\nI started working on this game about 6 days ago(9-2-20 if my memory holds up).";
		std::cout << "\nI don't really work at a consistant pace, its more so a couple hours here";
		std::cout << "\nand there. However, developing something like this has been really fun do in";
		std::cout << "\nmy free time and its sort of personal in a way. It's an outlet for me and sure its janky,";
		std::cout << "\nbut compared to my first project that had literally the same goal, this seems ";
		std::cout << "\nlike god made this game in comparison. I'm a lot more organized on this project, i've";
		std::cout << "\nlearned new terms, i've gotten a small amount more experience using the free";
		std::cout << "\ntrial for codecademy and doing the projects, all around I've become a much better developer. ";
		std::cout << "\nI certainly don't expect this game to be good in any way shape or form, ";
		std::cout << "\nbut I am striving for a complete text-based game that I can say is my first real project with";
		std::cout << "\nsubstance. My last was to create a tic-tac-toe game, but altough I was ";
		std::cout << "\nable to complete it and come out with a product that is very much playable, the way it's written";
		std::cout << "\nand organized it not something i'm proud about, so I do plan on remaking ";
		std::cout << "\nit at some point to see what I would do differently. Anyways, I hope you enjoy whatever experience";
		std::cout << "\ni've developed for you, and please, go off yourself.";
		std::cout << "\n\nGo back ";
		if (option == 0)
		std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>";

		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {
					
				}
				break;
			case 'w':
				if (option > 0) {
					
				}
				break;
			case 'f':
				select = true;
				break;
			default:
				break;
			}
		}
	}
	bool i = false;
	menu(i);
}

void menu_controls(bool& gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
			std::cout << "\n    ___       ___       ___       ___       ___       ___       ___       ___   ";
			std::cout << "\n   /\\  \\     /\\  \\     /\\__\\     /\\  \\     /\\  \\     /\\  \\     /\\__\\     /\\  \\  ";
			std::cout << "\n  /::\\  \\   /::\\  \\   /:| _|_    \\:\\  \\   /::\\  \\   /::\\  \\   /:/  /    /::\\  \\ ";
			std::cout << "\n /:/\\:\\__\\ /:/\\:\\__\\ /::|/\\__\\   /::\\__\\ /::\\:\\__\\ /:/\\:\\__\\ /:/__/    /\\:\\:\\__\\";
			std::cout << "\n \\:\\ \\/__/ \\:\\/:/  / \\/|::/  /  /:/\\/__/ \\;:::/  / \\:\\/:/  / \\:\\  \\    \\:\\:\\/__/";
			std::cout << "\n  \\:\\__\\    \\::/  /    |:/  /   \\/__/     |:\\/__/   \\::/  /   \\:\\__\\    \\::/  / ";
			std::cout << "\n   \\/__/     \\/__/     \\/__/               \\|__|     \\/__/     \\/__/     \\/__/";
		std::cout << "\n--<>--<>--<>--<>--<>--<>--<>--<>\n";
		std::cout << "\nWelcome to the controls section!";
		std::cout << "\nThis feature is in development";
		std::cout << "\n\nGo back ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>--<>--<>--<>--<>";

		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {

				}
				break;
			case 'w':
				if (option > 0) {

				}
				break;
			case 'f':
				select = true;
				break;
			default:
				break;
			}
		}
	}
	bool i = false;
	menu_settings(gameOver);
}

bool menu_paused(bool &gameOver) {

int option = 0;
bool select = false;
std::string arrow = "<---";
while (select == false) {
	system("cls");

	std::cout << "\n    ___       ___       ___       ___       ___       ___   ";
	std::cout << "\n   /\\  \\     /\\  \\     /\\__\\     /\\  \\     /\\  \\     /\\  \\  ";
	std::cout << "\n  /::\\  \\   /::\\  \\   /:/ _/_   /::\\  \\   /::\\  \\   /::\\  \\ ";
	std::cout << "\n /::\\:\\__\\ /::\\:\\__\\ /:/_/\\__\\ /\\:\\:\\__\\ /::\\:\\__\\ /:/\\:\\__\\";
	std::cout << "\n \\/\\::/  / \\/\\::/  / \\:\\/:/  / \\:\\:\\/__/ \\:\\:\\/  / \\:\\/:/  /";
	std::cout << "\n    \\/__/    /:/  /   \\::/  /   \\::/  /   \\:\\/  /   \\::/  / ";
	std::cout << "\n             \\/__/     \\/__/     \\/__/     \\/__/     \\/__/  ";

	std::cout << "\n--<>--<>--<>--<>--<>--<>--<>--<>\n";
	std::cout << "\nInventory ";
	if (option == 0)
		std::cout << arrow;
	std::cout << "\nContinue playing";
	if (option == 1)
		std::cout << arrow;
	std::cout << "\nReturn to main menu";
	if (option == 2)
		std::cout << arrow;
	std::cout << "\nQuit game";
	if (option == 3)
		std::cout << arrow;
	std::cout << "\n\n--<>--<>--<>--<>--<>--<>--<>\n";

	if (_kbhit()) {
		switch (_getch())
		{
		case 's':
			if (option == 0 || option < 3) {
				option++;
			}
			else if (option == 3) {
				option = option - 3;
			}
			break;
		case 'w':
			if (option > 0) {
				option--;
			}
			else if (option == 0) {
				option = option + 3;
			}
			break;
		case 'f':
			select = true;
			break;
		default:
			break;
		}
	}

	if (select == true) {
		if (option == 0) { //Inventory
			std::cout << "\n";
			display_inventory(gameOver);
		}
		else if (option == 1) { //Continue playing
			std::cout << "\n";
		}
		else if (option == 2) { //Return to main menu
			std::cout << "\n";
			menu(gameOver);
		}
		if (option == 3) { //Quit game
			std::cout << "\n";
			return gameOver = true;
		}
	}
}

}

void menu_extra(bool& gameOver) {
		int option = 0;
		bool select = false;
		std::string arrow = "<---";
		while (select == false) {
			system("cls");
			std::cout << "\n    ___       ___       ___       ___       ___   ";
			std::cout << "\n   /\\  \\     /\\__\\     /\\  \\     /\\  \\     /\\  \\  ";
			std::cout << "\n  /::\\  \\   |::L__L    \\:\\  \\   /::\\  \\   /::\\  \\ ";
			std::cout << "\n /::\\:\\__\\ /::::\\__\\   /::\\__\\ /::\\:\\__\\ /::\\:\\__\\";
			std::cout << "\n \\:\\:\\/  / \\;::;/__/  /:/\\/__/ \\;:::/  / \\/\\::/  /";
			std::cout << "\n  \\:\\/  /   |::|__|   \\/__/     |:\\/__/    /:/  / ";
			std::cout << "\n   \\/__/     \\/__/               \\|__|     \\/__/ ";
			std::cout << "\n--<>--<>--<>--<>";
			std::cout << "\n\nWelcome to the extras section.\n";
			std::cout << "\nRandom loop I made ";
			if (option == 0)
				std::cout << arrow;
			std::cout << "\nINSTANT SEIZURE ";
			if (option == 1)
				std::cout << arrow;
			std::cout << "\nGo Back ";
			if (option == 2)
				std::cout << arrow;
			std::cout << "\n\n--<>--<>--<>--<>";


			if (_kbhit()) {
				switch (_getch())
				{
				case 's':
					if (option < 2) {
						option++;
					}
					else if (option == 2) {
						option = option - 2;
					}
					break;
				case 'w':
					if (option > 0) {
						option--;
					}
					else if (option == 0) {
						option = option + 2;
					}
					break;
				case 'f':
					select = true;
					break;
				default:
					break;
				}
				 
			}
		}
		if (option == 0 && select == true)
			ringspin_looped();
		else if (option == 1 && select == true) {
			menu_seizure(gameOver);
		}
		else if (option == 2 && select == true) {
			bool i = false;
			menu(i);
		}
}

void menu_seizure(bool& gameOver) {
	int in1, in2;
	char color1 = '0', color2 = 'f';
	/*0-9 and A-f. 16 unique inputs*/
	gameOver = false;

	for (int i = 0; i < 100; i++) {

		std::string output = "color ";
		in1 = rand() % 16;
		in2 = rand() % 16;

		switch (in1)
		{
		case 0:
			in1 = '0';
			break;
		case 1:
			in1 = '1';
			break;
		case 2:
			in1 = '2';
			break;
		case 3:
			in1 = '3';
			break;
		case 4:
			in1 = '4';
			break;
		case 5:
			in1 = '5';
			break;
		case 6:
			in1 = '6';
			break;
		case 7:
			in1 = '7';
			break;
		case 8:
			in1 = '8';
			break;
		case 9:
			in1 = '9';
			break;
		case 10:
			in1 = 'a';
			break;
		case 11:
			in1 = 'b';
			break;
		case 12:
			in1 = 'c';
			break;
		case 13:
			in1 = 'd';
			break;
		case 14:
			in1 = 'e';
			break;
		case 15:
			in1 = 'f';
			break;
		default:
			break;
		}

		switch (in2)
		{
		case 0:
			in2 = '0';
			break;
		case 1:
			in2 = '1';
			break;
		case 2:
			in2 = '2';
			break;
		case 3:
			in2 = '3';
			break;
		case 4:
			in2 = '4';
			break;
		case 5:
			in2 = '5';
			break;
		case 6:
			in2 = '6';
			break;
		case 7:
			in2 = '7';
			break;
		case 8:
			in2 = '8';
			break;
		case 9:
			in2 = '9';
			break;
		case 10:
			in2 = 'a';
			break;
		case 11:
			in2 = 'b';
			break;
		case 12:
			in2 = 'c';
			break;
		case 13:
			in2 = 'd';
			break;
		case 14:
			in2 = 'e';
			break;
		case 15:
			in2 = 'f';
			break;
		default:
			break;
		}
	color1 = in1;
	color2 = in2;
	output = output += color1;
	output = output += color2;
	std::cout << "\n\n\n\n\n\n\n\n\n\n" << color1 << "\n" << color2 << "\n" << in1 << "\n" << in2 << "\n" << output << "\n\n\n\n\n\n";
	system(output.c_str());
	}
	
	system("color 0f");
	system("cls");
	std::cout << "\nI hope you enjoyed! :)";
	std::cout << "\nEnter anything to go back to main menu.\n";

	std::string anything;
	std::cin >> anything;
	if (anything == "anything") {
		std::cout << "\nSo you wanna be a smartass huh? Just because of that you have to type something else again.\n";
		std::cin >> anything;
		if (anything == "anything") {
			std::cout << "\nIf you type that again im gonna do something you're not gonna like.\n";
			std::cin >> anything;
			if (anything == "anything") {
				std::cout << "\nI'm warning ya.\n";
				std::cin >> anything;
				if (anything == "anything") {
					menu_seizure(gameOver);
				}
			}
		}
	}
	else {
		menu(gameOver);
	}

}
void hacking_game() {

}

void score() {

}

void end_game() {

}

void setup() {

}

void dot() {

}

void hunger() {

}

void passcode(int passcode) {
	

	int useless = 1;
	int i = 0; //Purpose of this int is to clear numpad of the #Numhere# pound keys. 
	std::vector<char> hit = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int answer = NULL;
	int digits = int(log10(passcode) + 1);
	int test = digits - 1;

	//This gets the bases. So if we have a 4 digit passcode, bases(0) == 1, bases(1) == 10, bases(2) == 100, and bases(3) == 1000,
	std::vector<int> bases(digits);
	for (int i = 0; i < digits; i++) {
		bases[i] = pow(10, i);
	}

	//This gets the max number that can be put in
	int max = 9;
	for (int i = 1; i < digits; i++) {
	 	max = max + 9*bases[i];
	}	
		
	int attempts = 0;
	while (passcode != answer) {
		//This Numpad is the one drawn most of the time
		system("cls");
		std::cout << "Digits: " << digits << " Answer: " << answer << " Attempts: " << attempts << " Num: " << test << " Max: " << max;
		for (int i = 0; i < digits; i++) {
			std::cout << " Base[" << i << "] = " << bases[i];
		}
		std::cout << "\n  _________________ ";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | "<< hit[0] << "1" << hit[0] << " | " << hit[1] << "2" << hit[1] << " | " << hit[2] << "3" << hit[2] << " |";
		std::cout << "\n |_____|_____|_____|";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | " << hit[3] << "4" << hit[3] << " | " << hit[4] << "5" << hit[4] << " | " << hit[5] << "6" << hit[5] << " |";
		std::cout << "\n |_____|_____|_____|";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | " << hit[6] << "7" << hit[6] << " | " << hit[7] << "8" << hit[7] << " | " << hit[8] << "9" << hit[8] << " |";
		std::cout << "\n |_____|_____|_____|";
		hit[i] = ' ';
		system("cls");
		
		if (answer > max) {
			answer = 0;
			test = digits - 1;
			std::cout << "That number seems to big. Let me try again.\n";
		}

		//This Numpad is drawn only when the player inputs a number and will then draw the single frame of the visual effect
		std::cout << "Digits: " << digits << " Answer: " << answer << " Attempts: " << attempts << " Num: " << test << " Max: " << max;
		for (int i = 0; i < digits; i++) {
			std::cout << " Base[" << i << "] = " << bases[i];
		}
		std::cout << "\n  _________________ ";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | " << hit[0] << "1" << hit[0] << " | " << hit[1] << "2" << hit[1] << " | " << hit[2] << "3" << hit[2] << " |";
		std::cout << "\n |_____|_____|_____|";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | " << hit[3] << "4" << hit[3] << " | " << hit[4] << "5" << hit[4] << " | " << hit[5] << "6" << hit[5] << " |";
		std::cout << "\n |_____|_____|_____|";
		std::cout << "\n |     |     |     |";
		std::cout << "\n | " << hit[6] << "7" << hit[6] << " | " << hit[7] << "8" << hit[7] << " | " << hit[8] << "9" << hit[8] << " |";
		std::cout << "\n |_____|_____|_____|";

		if (_kbhit) {
			switch (_getch())
			{
			case '1':
				i = 0;
				hit[0] = '#';
				answer = answer + 1*bases[test];
				break;
			case '2':
				i = 1;
				hit[1] = '#';
				answer = answer + 2 * bases[test];
				break;
			case '3':
				i = 2;
				hit[2] = '#';
				answer = answer + 3 * bases[test];
				break;
			case '4':
				i = 3;
				hit[3] = '#';
				answer = answer + 4 * bases[test];
				break;
			case '5':
				i = 4;
				hit[4] = '#';
				answer = answer + 5 * bases[test];
				break;
			case '6':
				i = 5;
				hit[5] = '#';
				answer = answer + 6 * bases[test];
				break;
			case '7':
				i = 6;
				hit[6] = '#';
				answer = answer + 7 * bases[test];
				break;
			case '8':
				i = 7;
				hit[7] = '#';
				answer = answer + 8 * bases[test];
				break;
			case '9':
				i = 8;
				hit[8] = '#';
				answer = answer + 9 * bases[test];
				break;
			case 'f':
				answer = 0000;
				test = 4;
			default:
				break;
			}
		}
		attempts++;
		test--;
		if (test < 0) {
			test = test + digits;
		}

		else if (std::to_string(answer).length() == 0) {
			test = 3;
			answer = NULL;
		}
		else if (attempts >= 5) {
			test = 3;
			answer = 0;
			attempts = 1;
		}
	}
	if (passcode != answer)
		std::cout << "\nDammit, im locked out. Gonna have to try again later.";
	else if (passcode == answer)
		std::cout << "\nYes! I got it right!";
}

void chest() {

}

void display_inventory(bool& gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
		std::cout << "\n--<>--<>--<>--<>";
		std::cout << "\n\nInventory\n";
		std::cout << "\nFeature in development ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\nGo Back ";
		if (option == 1)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";


		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0) {
					option++;
				}
				break;
			case 'w':
				if (option > 0) {
					option--;
				}
				break;
			case 'f':
				select = true;
				break;
			default:
				break;
			}
		}
	}
	if (option == 0 && select == true)
		std::cout << "\ndidnt you see that its still in development? Are you blind?";
	if (option == 1 && select == true) {
		menu_paused(gameOver);
	}
}