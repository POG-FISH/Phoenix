#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>

void game_logo() {

}

void Player::make_player(std::string new_pname, int new_phealth, int new_pstrength, int new_pspeed) {
	pname = new_pname;
	phealth = new_phealth;
	pstrength = new_pstrength;
	pspeed = new_pspeed;
}

std::string Enemy::get_enem_name() {
	return eName;
}
int Enemy::get_enem_health() {
	return eHealth;
}
int Enemy::get_enem_strength() {
	return eStrength;
}
int Enemy::get_enem_speed() {
	return eSpeed;
}


void Enemy::new_randenemy(int min, int max) { //Add parameters to do a "max-min" thing were monsters can have a minimum and maximum eHealth and eStrength with variation from prefixes
	srand(time(NULL));
	std::vector<std::string> first_name = { "Dru'", "Val'", "Xivu'", "Ur'", "La'", "Vau'", "Kui'", "Yuru'", "Shura'", "Xira'" };
	std::vector<std::string> last_name = { "Olack", "Irath", "Thura", "Xuntu", "Esdu", "Rathu", "Ouxi", "Xithu", "Kilath", "Vunxi" };
	std::vector<std::string> prefix = { ", the weak", ", the mighty", ", the durable", ", the honorable", ", the heavy", ", the nimble" };
	int f = rand() % first_name.size();
	int l = rand() % last_name.size();
	int p1 = rand() % 10; //This is the chance that the random enemy will have a prefix
	int p2 = rand() % prefix.size(); // Chooses the random prefix
	if (p1 == 1) {
		eName = first_name[f] + last_name[l] + prefix[p2];
	}
	else {
		eName = first_name[f] + last_name[l];
	}


	eHealth = rand() % max + min;
	eStrength = rand() % max + min;
	eSpeed = rand() % max + min;
	//Adds the prefix modifer is the rng is good enough
	if (p2 == 0 && p1 == 1) {
		eHealth = eHealth - 20;
		eStrength = eStrength - 20;
	}
	else if (p2 == 1 && p1 == 1) {
		eStrength = eStrength + 40;
	}
	else if (p2 == 2 && p1 == 1) {
		eHealth = eHealth + 40;
	}
	else if (p2 == 3 && p1 == 1) {
		eHealth = eHealth + 10;
		eStrength = eStrength + 10;
	}
	else if (p2 == 4 && p1 == 1) {
		eSpeed = eSpeed - 20;
		eStrength = eStrength + 10;
	}
	else if (p2 == 5 && p1 == 1) {
		eSpeed = eSpeed + 20;
	}

	//Makes sure to put health, strength, and speed to at least 1 and not negative
	if (eHealth < 0) {
		int tempH = eHealth;
		for (int i = 0; i < abs(tempH); i++) {
			//std::cout << "\nLOOPING HEALTH: " << eHealth;
			eHealth++;
		}
		eHealth++;
	}

	if (eStrength < 0) {
		int tempSt = eStrength;
		for (int i = 0; i < abs(tempSt); i++) {
			//std::cout << "\nLOOPING STRENGTH: " << eStrength;
			eStrength++;
		}
		eStrength++;
	}

	if (eSpeed < 0) {
		int tempSp = eSpeed;
		for (int i = 0; i < abs(tempSp); i++) {
			//std::cout << "\nLOOPING SPEED: " << eSpeed;
			eSpeed++;
		}
		eSpeed++;
	}

}

void battle(Enemy &i, Player &q) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";


	while (select == false) {
		system("cls");
		std::cout << "\n--<>--<>--<>--<>\n";
		std::cout << "\nYou are fighting " << i.get_enem_name();
		std::cout << "\nAttack ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\nMagic ";
		if (option == 1)
			std::cout << arrow;
		std::cout << "\nItems ";
		if (option == 2)
			std::cout << arrow;
		std::cout << "\nRetreat ";
		if (option == 3)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";


		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {
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
}

void Enemy::get_enem_info() {
	std::cout << "\nName: " << eName;
	std::cout << "\nHealth: " << eHealth;
	std::cout << "\nStrength: " << eStrength;
	std::cout << "\nSpeed: " << eSpeed;
}

void health_display(int health) {
	if (health == 100) {
		std::cout << "[===================]\n";
		std::cout << "|+++|+++|+++|+++|+++|\n";
		std::cout << "[=======[" << health << "]=======]\n";

	}
	else if (health > 100) {
		std::cout << "[==================================]\n";
		std::cout << "|How do you have this much health??|\n";
		std::cout << "[==============[" << health << "]===============]\n";
	}
	else if (health >= 80 && health < 100) {
		std::cout << "[===================]\n";
		std::cout << "|   |+++|+++|+++|+++|\n";
		std::cout << "[=======[ " << health << "]=======]\n";
	}
	else if (health >= 60 && health < 80) {
		std::cout << "[===================]\n";
		std::cout << "|   |   |+++|+++|+++|\n";
		std::cout << "[=======[ " << health << "]=======]\n";
	}
	else if (health >= 40 && health < 60) {
		std::cout << "[===================]\n";
		std::cout << "|   |   |   |+++|+++|\n";
		std::cout << "[=======[ " << health << "]=======]\n";
	}
	else if (health >= 20 && health < 40) {
		std::cout << "[===================]\n";
		std::cout << "|   |   |   |   |+++|\n";
		std::cout << "[=======[ " << health << "]=======]\n";
	}
	else if (health > 1 && health < 20) {
		std::cout << "[===================]\n";
		std::cout << "|   |   |   |   |  +|\n";
		std::cout << "[=======[ " << health << "]=======]\n";
	}
	else if (health == 0) {
		std::cout << "[-=====-=*==-=======]\n";
		std::cout << "| -*    |-  |*  |   |\n";
		std::cout << "[*=-====[  " << health << "]===-=+=]\n";
	}
	else if (health < 0) {
		std::cout << "[-=====-=*==-=======]\n";
		std::cout << "| -*    |-  |*  |   |\n";
		std::cout << "[*=-====[" << health << "]===-=+=]\n";
	}

}

void Enemy::new_enemy(std::string new_name, int new_eHealth, int new_eStrength, int new_eSpeed) {

}

bool menu(bool &gameOver) {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
		std::cout << "\n--<>--<>--<>--<>\n";
		std::cout << "\nPlay ";
		if(option == 0)
			std::cout << arrow;
		std::cout << "\nSettings ";
		if (option == 1)
			std::cout << arrow;
		std::cout << "\nAbout/Help ";
		if (option == 2)
			std::cout << arrow;
		std::cout << "\nQuit Game ";
		if (option == 3)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";

		
		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {
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
		std::cout << "\n--<>--<>--<>--<>\n";
		std::cout << "\nWelcome to the settings section.";
		std::cout << "\nThis is a work in progress, please come back later";
		std::cout << "\nGo Back ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";


		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {
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
	bool i = false;
	menu(i);
}
void menu_about() {
	int option = 0;
	bool select = false;
	std::string arrow = "<---";
	while (select == false) {
		system("cls");
		std::cout << "\n--<>--<>--<>--<>\n";
		std::cout << "\nWelcome to the about section.";
		std::cout << "\nThis is a work in progress, please come back later";
		std::cout << "\nGo back ";
		if (option == 0)
			std::cout << arrow;
		std::cout << "\n\n--<>--<>--<>--<>";

		if (_kbhit()) {
			switch (_getch())
			{
			case 's':
				if (option == 0 || option < 3) {
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
	bool i = false;
	menu(i);
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

void passcode(int passcode) {
	
	char o;
	
	std::cout << "\n  _________________ ";
	std::cout << "\n |     |     |     |";
	std::cout << "\n |  1  |  2  |  3  |";
	std::cout << "\n |_____|_____|_____|";
	std::cout << "\n |     |     |     |";
	std::cout << "\n |  4  |  5  |  6  |";
	std::cout << "\n |_____|_____|_____|";
	std::cout << "\n |     |     |     |";
	std::cout << "\n |  7  |  8  |  9  |";
	std::cout << "\n |_____|_____|_____|";
}

void map(int &x, int &y) {

	int const width = 80; //map x
	int const height = 20; //map y

	if (x > width-2) {
		for (int i = 0; x > width-2; i++) {
			x--;
		}
	}
	else if (y > height-2) {
		for (int i = 0; y > height-2; i++) {
			y--;
		}
	}
	else if (x < 1) {
		for (int i = 0; x < 1; i++) {
			x++;
		}
	}
	else if (y < 1) {
		for (int i = 0; y < 1; i++) {
			y++;
		}
	}

	for (int i = 0; i < height; i++) { //i for height(x), j for width(y)
		for (int j = 0; j < width; j++) {
			if (i == 0 || j == 0 || i == height-1 || j == width-1) { 
				std::cout << "#";
			}
			else if (x == j && y == i) {
				std::cout << "O";
			}
			else {
			std::cout << " ";
			}
		}
		std::cout << "\n";
		
	}
	std::cout << "X: " << x << " Y: " << y;
}

void map_controls(int &x, int &y) {
	if (_kbhit) {
		switch (_getch())
		{
		case 'w':
			y--;
			break;
		case 'a':
			x--;
			break;
		case 's':
			y++;
			break;
		case 'd':
			x++;
			break;
		default:
			break;
		}
	}
}

//Below is visuals for the game. Pretty much all are broken when actually used
void display_monster1() {
std::cout << "	       ,     .\n";
std::cout << "        /(     )\               A\n";
std::cout << "   .--.( `.___.' ).--.         /_\\n";
std::cout << "   `._ `%_&%#%$_ ' _.'     /| <___> |\\n";
std::cout << "      `|(@\*%%/@)|'       / (  |L|  ) \\n";
std::cout << "       |  |%%#|  |       J d8bo|=|od8b L\n";
std::cout << "        \ \$#%/ /        | 8888|=|8888 |\n";
std::cout << "        |\|%%#|/|        J Y8P |=| Y8P F\n";
std::cout << "        | (. .)%|         \ (  |L|  ) / \n";
std::cout << "    ___.'  `-'  `.___      \|  |L|  |/\n";
std::cout << "  .'#*#`-       -'$#*`.       / )|\n";
std::cout << " /#%^#%*_ *%^%_  #  %$%\    .J (__)\n";
std::cout << " #&  . %%%#% ###%*.   *%\.-'&# (__)\n";
std::cout << " %*  J %.%#_|_#$.\J* \ %'#%*^  (__)\n";
std::cout << " *#% J %$%%#|#$#$ J\%   *   .--|(_)\n";
std::cout << " |%  J\ `%%#|#%%' / `.   _.'   |L|\n";
std::cout << " |#$%||` %%%$### '|   `-'      |L|\n";
std::cout << " (#%%||` #$#$%%% '|            |L|\n";
std::cout << " | ##||  $%%.%$%  |            |L|\n";
std::cout << " |$%^||   $%#$%   |  VK/cf     |L|\n";
std::cout << " |&^ ||  #%#$%#%  |            |L|\n";
std::cout << " |#$*|| #$%$$#%%$ |\           |L|\n";
std::cout << " ||||||  %%(@)$#  |\\          |L|\n";
std::cout << " `|||||  #$$|%#%  | L|         |L|\n";
std::cout << "      |  #$%|$%%  | ||l        |L|\n";
std::cout << "      |  ##$H$%%  | |\\        |L|\n";
std::cout << "      |  #%%H%##  | |\\|       |L|\n";
std::cout << "      |  ##% $%#  | Y|||       |L|\n";
std::cout << "      J $$#* *%#% L  |E/\n";
std::cout << "      (__ $F J$ __)  F/\n";
std::cout << "      J#%$ | |%%#%L\n";
std::cout << "      |$$%#& & %%#|\n";
std::cout << "      J##$ J % %%$F\n";
std::cout << "       %$# * * %#&\n";
std::cout << "       %#$ | |%#$%\n";
std::cout << "       *#$%| | #$*\n";
std::cout << "      /$#' ) ( `%%\\n";
std::cout << "     /#$# /   \ %$%\\n";
std::cout << "    ooooO'     `Ooooo\n";
}

void display_monster2() {
	std::cout << "                                              ,--,  ,.-.\n";
	std::cout << "                ,                   \,       '-,-`,'-.' | ._\n";
	std::cout << "               /|           \    ,   |\         }  )/  / `-,',\n";
	std::cout << "               [ '          |\  /|   | |        /  \|  |/`  ,`\n";
	std::cout << "               | |       ,.`  `,` `, | |  _,...(   (      _',\n";
	std::cout << "   -ART BY-    \  \  __ ,-` `  ,  , `/ |,'      Y     (   \_L\\n";
	std::cout << " -ZEUS-      \  \_\,``,   ` , ,  /  |         )         _,/\n";
	std::cout << "                 \  '  `  ,_ _`_,-,<._.<        /         /\n";
	std::cout << "                  ', `>.,`  `  `   ,., |_      |         /\n";
	std::cout << "                    \/`  `,   `   ,`  | /__,.-`    _,   `\\n";
	std::cout << " -,-..\  _  \  `  /  ,  / `._) _,-\`       \\n";
	std::cout << "                 \_,,.) /\    ` /  / ) (-,, ``    ,        |\n";
	std::cout << "                ,` )  | \_\       '-`  |  `(               \\n";
	std::cout << "               /  /```(   , --, ,' \   |`<`    ,            |\n";
	std::cout << "              /  /_,--`\   <\  V /> ,` )<_/)  | \      _____)\n";
	std::cout << "        ,-, ,`   `   (_,\ \    |   /) / __/  /   `----`\n";
	std::cout << "       (-, \           ) \ ('_.-._)/ /,`    /\n";
	std::cout << "       | /  `          `/ \\ V   V, /`     /\n";
	std::cout << "    ,--\(        ,     <_/`\\     ||      /\n";
	std::cout << "   (   ,``-     \/|         \-A.A-`|     /\n";
	std::cout << " ,>,_ )_,..(    )\          -,,_-`  _--`\n";
	std::cout << " (_ \|`   _,/_  /  \_            ,--`\n";
	std::cout << "  \( `   <.,../`     `-.._   _,-`\n";
	std::cout << "   `                      ```\n";
}

void display_monster3() {
	std::cout << "           _..-------.\n";
	std::cout << "          /            .\n";
	std::cout << "          `            l\n";
	std::cout << "          |'._  ,._ l/ \\n";
	std::cout << "          |  _J<__/.v._/\n";
	std::cout << "           \( ,~._,,,,-)\n";
	std::cout << "            `-\' \`,,j|\n";
	std::cout << "               \_,____J\n";
	std::cout << "          .--.__)--(__.--.\n";
	std::cout << "         /  `-----..--'. j\n";
	std::cout << "         '.- '`--` `--' \\\n";
	std::cout << "        //  '`---'`  `-' \\\n";
	std::cout << "       //   '`----'`.-.-' \\\n";
	std::cout << "     _//     `--- -'   \' | \________\n";
	std::cout << "    |  |         ) (      `.__.---- -'\\n";
	std::cout << "     \7          \`-(               74\\\\n";
	std::cout << "     ||       _  /`-(               l|//7__\n";
	std::cout << "     |l    ('  `-)-/_.--.          f''` -.-  | \n";
	std::cout << "     |\     l\_  `-'    .'         |     |  |\n";
	std::cout << "     llJ   _ _)J--._.-('           |     |  l\n";
	std::cout << "     |||( ( '_)_  .l   '._    ..__I | L\n";
	std::cout << "     ^\\\||`'   '   ''-. ' )''`'-- - '     L.-'`-.._\n";
	std::cout << "          \ |           ) /.              ``'`-.._``-.\n";
	std::cout << "          l l          / / |                      |''|\n";
	std::cout << "           ' \        / /   '-..__                |  |\n";
	std::cout << "           | |       / /          1       ,- t-...J_.'\n";
	std::cout << "           | |      / /           |       |  |\n";
	std::cout << "           J  \  /'  (l       |  |\n";
	std::cout << "           | ().'`-()/            |       |  |\n";
	std::cout << "          _.-'_.____ / l       l. - l\n";
	std::cout << "      _.-'_. + '|                  /        \.   \n";
	std::cout << " /'\. - '_.-'  | |                 /          \   \\n";
	std::cout << "\_   '      | |                1 | `'|\n";
	std::cout << "  |ll       | |                |            i   |\n";
	std::cout << "  \\\       |-\               \j ..          L,,'. `/\n";
	std::cout << " __\\\     ( .-\           .--'    ``--../..'      '-..\n";
	std::cout << "   `'''`----`\\\\ .....--'''\n";
	std::cout << "              \\\\                           -nabis  ''\n";
}
