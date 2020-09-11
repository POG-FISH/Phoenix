#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>
#include <Windows.h> // adds "Sleep()" function

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

void battle(bool &infight, Enemy &i, Player &q) { //The menu system here uses math to move around 
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
		std::cout << "\n PhoenixV.350";
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

		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 4) {
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
	switch (option)
	{
	case 0:
		return gameOver = false;
		break;
	case 1:
		//Settings
		menu_settings();
		break;
	case 2:
		//About/Help
		menu_about();
		break;
	case 3:
		//Extras
		menu_extra();
	case 4:
		//Quit game
		return gameOver = true;
		break;
	default:
		break;
	}
}

void menu_settings() {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
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
		menu_controls();
	if (option == 1 && select == true) {
	bool i = false;
	menu(i);
	}

}

void menu_about() {
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

void menu_controls() {
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
	menu_settings();
}

void menu_paused() {

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
	std::cout << "\nSettings ";
	if (option == 1)
		std::cout << arrow;
	std::cout << "\nContinue playing";
	if (option == 2)
		std::cout << arrow;
	std::cout << "\nReturn to main menu";
	if (option == 3)
		std::cout << arrow;
	std::cout << "\nQuit game";
	if (option == 4)
		std::cout << arrow;
	std::cout << "\n\n--<>--<>--<>--<>--<>--<>--<>\n";

	if (_kbhit()) {
		switch (_getch())
		{
		case 's':
			if (option == 0 || option < 4) {
				option++;
			}
			break;
		case 'w':
			if (option > 0 || option == 4) {
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

	if (select == true) {
		if (option == 0) { //Items
			std::cout << "\n";
			display_inventory();
		}
		else if (option == 1) { //Setting
			std::cout << "\n";
			menu_settings();
		}
		else if (option == 2) { //Continue playing
			std::cout << "\n";
		}
		else if (option == 3) {// Return to menu
			std::cout << "\n";
			bool i = false;
			menu(i);

		}
		if (option == 4) { //Quit game
			std::cout << "\n";

		}
	}
}

}

void menu_extra() {
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
			std::cout << "\nRandom loop I made  ";
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
			ringspin_looped();
		if (option == 1 && select == true) {
			bool i = false;
			menu(i);
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
	
	int i = 0;
	std::vector<char> hit = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int answer = NULL;
	int attempts = 0;
	while (passcode != answer && attempts < 5) {
		system("cls");
		std::cout << answer;
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
		if (answer > 9999) {
			answer = 0;
			"Hm, that answer seems too big...";
		}
		std::cout << answer;
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
				answer += 1;
				break;
			case '2':
				i = 1;
				hit[1] = '#';
				answer += 2;
				break;
			case '3':
				i = 2;
				hit[2] = '#';
				answer += 3;
				break;
			case '4':
				i = 3;
				hit[3] = '#';
				answer += 4;
				break;
			case '5':
				i = 4;
				hit[4] = '#';
				answer += 5;
				break;
			case '6':
				i = 5;
				hit[5] = '#';
				answer += 6;
				break;
			case '7':
				i = 6;
				hit[6] = '#';
				answer += 7;
				break;
			case '8':
				i = 7;
				hit[7] = '#';
				answer += 8;
				break;
			case '9':
				i = 8;
				hit[8] = '#';
				answer += 9;
				break;
			default:
				break;
			}
		}
		attempts++;
	}
	std::cout << "\nDammit, im locked out. Gonna have to try again later.";
}

void chest() {

}

void display_inventory() {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
		std::cout << "\n--<>--<>--<>--<>";
		std::cout << "\n\nInventory\n";
		std::cout << "\nControls ";
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
		menu_controls();
	if (option == 1 && select == true) {
		bool i = false;
		menu(i);
	}
}