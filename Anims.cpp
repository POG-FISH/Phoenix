#include <iostream>
#include "game.h"
#include <time.h>

void display_gamelogo() {
	std::cout << "\n@@@@@@@   @@@  @@@   @@@@@@   @@@@@@@@  @@@  @@@  @@@  @@@  @@@";
	std::cout << "\n@@@@@@@@  @@@  @@@  @@@@@@@@  @@@@@@@@  @@@@ @@@  @@@  @@@  @@@";
	std::cout << "\n@@!  @@@  @@!  @@@  @@!  @@@  @@!       @@!@!@@@  @@!  @@!  !@@";
	std::cout << "\n!@!  @!@  !@!  @!@  !@!  @!@  !@!       !@!!@!@!  !@!  !@!  @!!";
	std::cout << "\n@!@@!@!   @!@!@!@!  @!@  !@!  @!!!:!    @!@ !!@!  !!@   !@@!@!";
	std::cout << "\n!!@!!!    !!!@!!!!  !@!  !!!  !!!!!:    !@!  !!!  !!!    @!!!";
	std::cout << "\n!!:       !!:  !!!  !!:  !!!  !!:       !!:  !!!  !!:   !: :!!";
	std::cout << "\n:!:       :!:  !:!  :!:  !:!  :!:       :!:  !:!  :!:  :!:  !:!";
	std::cout << "\n ::       ::   :::  ::::: ::   :: ::::   ::   ::   ::   ::  :::";
	std::cout << "\n :         :   : :   : :  :   : :: ::   ::    :   :     :   ::";
	std::cout << "\n";
	std::cout << "\n                            .-==========";
	std::cout << "\n                         .-' O    =====";
	std::cout << "\n                        /___       ===";
	std::cout << "\n                           \\_      |";
	std::cout << "\n_____________________________)    (_____________________________";
	std::cout << "\n\\___________               .'      `,              ____________/";
	std::cout << "\n  \\__________`.     |||<   `.      .'   >|||     .'__________/";
	std::cout << "\n     \\_________`._  |||  <   `-..-'   >  |||  _.'_________/";
	std::cout << "\n        \\_________`-..|_  _ <      > _  _|..-'_________/";
	std::cout << "\n           \\_________   |_|  //  \\\\  |_|   _________/";
	std::cout << "\n                      .-\\   //    \\\\   /-.";
	std::cout << "\n      ,  .         _.'.- `._        _.' -.`._         .  ,";
	std::cout << "\n    <<<<>>>>     .' .'  /  '``----''`  \\  `. `.     <<<<>>>>";
	std::cout << "\n      '/\\`         /  .' .'.'/|..|\\`.`. `.  \\         '/\\`";
	std::cout << "\n      (())        `  /  / .'| |||| |`. \\  \\  '        (())";
	std::cout << "\n       /\\          ::_.' .' /| || |\\ `. `._::          /\\";
	std::cout << "\n      //\\\\           '``.' | | || | | `.''`           //\\\\";
	std::cout << "\n      //\\\\             .` .` | || | '. '.             //\\\\";
	std::cout << "\n      //\\\\                `  | `' |  '                //\\\\";
	std::cout << "\n      \\\\//                                            \\\\//";
	std::cout << "\n       \\/                      MJP                     \\/";
}

void diamond_looped() {
	while (1 < 2) {
		system("cls");
		std::cout << "\n    OO    ";
		std::cout << "\n   O  O   ";
		std::cout << "\n    O@  ";
		std::cout << "\n        ";

		system("cls");
		std::cout << "\n    OO    ";
		std::cout << "\n   O  O   ";
		std::cout << "\n    @O  ";
		std::cout << "\n        ";

		system("cls");
		std::cout << "\n    OO    ";
		std::cout << "\n   @  O   ";
		std::cout << "\n    OO  ";
		std::cout << "\n        ";

		system("cls");
		std::cout << "\n    @O    ";
		std::cout << "\n   O  O   ";
		std::cout << "\n    OO  ";
		std::cout << "\n        ";

		system("cls");
		std::cout << "\n    O@    ";
		std::cout << "\n   O  O   ";
		std::cout << "\n    OO  ";
		std::cout << "\n        ";

		system("cls");
		std::cout << "\n    OO    ";
		std::cout << "\n   O  @   ";
		std::cout << "\n    OO  ";
		std::cout << "\n        ";

	}
}

void ringspin_looped() {

	while (1 < 2) {


		system("cls");
		std::cout << "\n       o      ";
		std::cout << "\n    oo   oo     ";
		std::cout << "\n  oo       oo    ";
		std::cout << "\n  oo       oo    ";
		std::cout << "\n  oo       oo     ";
		std::cout << "\n     oo oo       ";

		system("cls");
		std::cout << "\n     oo oo     ";
		std::cout << "\n     oo oo     ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n  oo       oo    ";
		std::cout << "\n  oo       oo     ";
		std::cout << "\n    oo   oo       ";

		system("cls");
		std::cout << "\n    oo   oo     ";
		std::cout << "\n      ooo     ";
		std::cout << "\n    oo   oo    ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n   oo     oo     ";
		std::cout << "\n    oo   oo       ";

		system("cls");
		std::cout << "\n   oo     oo     ";
		std::cout << "\n     oo oo     ";
		std::cout << "\n      ooo    ";
		std::cout << "\n    oo   oo    ";
		std::cout << "\n   oo     oo     ";
		std::cout << "\n   oo     oo       ";

		system("cls");
		std::cout << "\n  oo       oo     ";
		std::cout << "\n   oo     oo     ";
		std::cout << "\n     oo oo    ";
		std::cout << "\n      ooo    ";
		std::cout << "\n    oo   oo     ";
		std::cout << "\n   oo     oo       ";

		system("cls");
		std::cout << "\n  oo       oo     ";
		std::cout << "\n  oo       oo     ";
		std::cout << "\n    oo   oo    ";
		std::cout << "\n      ooo    ";
		std::cout << "\n     oo oo     ";
		std::cout << "\n  oo       oo       ";

		system("cls");
		std::cout << "\n   oo     oo     ";
		std::cout << "\n  oo       oo     ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n     oo oo    ";
		std::cout << "\n      ooo     ";
		std::cout << "\n   oo     oo       ";

		system("cls");
		std::cout << "\n    oo   oo     ";
		std::cout << "\n  oo       oo     ";
		std::cout << "\n  oo       oo    ";
		std::cout << "\n    oo   oo    ";
		std::cout << "\n      ooo     ";
		std::cout << "\n    oo   oo       ";

		system("cls");
		std::cout << "\n     oo oo     ";
		std::cout << "\n   oo     oo     ";
		std::cout << "\n  oo       oo    ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n     oo oo     ";
		std::cout << "\n     oo oo       ";

		system("cls");
		std::cout << "\n      ooo     ";
		std::cout << "\n    oo   oo     ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n   oo     oo    ";
		std::cout << "\n    oo   oo     ";
		std::cout << "\n       o       ";


	}
}

void ringspin_looped2(int &i) {

	if (i == 9) {
		i = 0;
	}
	else {
		i++;
	}


		if (i == 0) {
			std::cout << "\n       o      ";
			std::cout << "\n    oo   oo     ";
			std::cout << "\n  oo       oo    ";
			std::cout << "\n  oo       oo    ";
			std::cout << "\n  oo       oo     ";
			std::cout << "\n     oo oo       ";
		}


		else if (i == 1) {
			std::cout << "\n     oo oo     ";
			std::cout << "\n     oo oo     ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n  oo       oo    ";
			std::cout << "\n  oo       oo     ";
			std::cout << "\n    oo   oo       ";
		}

		else if (i == 2) {
			std::cout << "\n    oo   oo     ";
			std::cout << "\n      ooo     ";
			std::cout << "\n    oo   oo    ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n   oo     oo     ";
			std::cout << "\n    oo   oo       ";
		}


		else if (i == 3) {
			std::cout << "\n   oo     oo     ";
			std::cout << "\n     oo oo     ";
			std::cout << "\n      ooo    ";
			std::cout << "\n    oo   oo    ";
			std::cout << "\n   oo     oo     ";
			std::cout << "\n   oo     oo       ";
		}

		else if (i == 4) {
			std::cout << "\n  oo       oo     ";
			std::cout << "\n   oo     oo     ";
			std::cout << "\n     oo oo    ";
			std::cout << "\n      ooo    ";
			std::cout << "\n    oo   oo     ";
			std::cout << "\n   oo     oo       ";
		}

		else if (i == 5) {
			std::cout << "\n  oo       oo     ";
			std::cout << "\n  oo       oo     ";
			std::cout << "\n    oo   oo    ";
			std::cout << "\n      ooo    ";
			std::cout << "\n     oo oo     ";
			std::cout << "\n  oo       oo       ";
		}

		else if (i == 6) {
			std::cout << "\n   oo     oo     ";
			std::cout << "\n  oo       oo     ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n     oo oo    ";
			std::cout << "\n      ooo     ";
			std::cout << "\n   oo     oo       ";
		}

		else if (i == 7) {
			std::cout << "\n    oo   oo     ";
			std::cout << "\n  oo       oo     ";
			std::cout << "\n  oo       oo    ";
			std::cout << "\n    oo   oo    ";
			std::cout << "\n      ooo     ";
			std::cout << "\n    oo   oo       ";
		}

		else if (i == 8) {
			std::cout << "\n     oo oo     ";
			std::cout << "\n   oo     oo     ";
			std::cout << "\n  oo       oo    ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n     oo oo     ";
			std::cout << "\n     oo oo       ";
		}

		else if (i == 9) {
			std::cout << "\n      ooo     ";
			std::cout << "\n    oo   oo     ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n   oo     oo    ";
			std::cout << "\n    oo   oo     ";
			std::cout << "\n       o       ";
		}
}

void bigload() {
	for (int i = 0; i < 50; i++) {
		system("cls");
		std::cout << "\n          _____           _______                   _____                    _____                    _____                    _____                    _____          ";
		std::cout << "\n         /\\    \\         /::\\    \\                 /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         ";
		std::cout << "\n        /::\\____\\       /::::\\    \\               /::\\    \\                /::\\    \\                /::\\    \\                /::\\____\\                /::\\    \\        ";
		std::cout << "\n       /:::/    /      /::::::\\    \\             /::::\\    \\              /::::\\    \\               \\:::\\    \\              /::::|   |               /::::\\    \\       ";
		std::cout << "\n      /:::/    /      /::::::::\\    \\           /::::::\\    \\            /::::::\\    \\               \\:::\\    \\            /:::::|   |              /::::::\\    \\      ";
		std::cout << "\n     /:::/    /      /:::/~~\\:::\\    \\         /:::/\\:::\\    \\          /:::/\\:::\\    \\               \\:::\\    \\          /::::::|   |             /:::/\\:::\\    \\     ";
		std::cout << "\n    /:::/    /      /:::/    \\:::\\    \\       /:::/__\\:::\\    \\        /:::/  \\:::\\    \\               \\:::\\    \\        /:::/|::|   |            /:::/  \\:::\\    \\    ";
		std::cout << "\n   /:::/    /      /:::/    / \\:::\\    \\     /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\              /::::\\    \\      /:::/ |::|   |           /:::/    \\:::\\    \\   ";
		std::cout << "\n  /:::/    /      /:::/____/   \\:::\\____\\   /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\    ____    /::::::\\    \\    /:::/  |::|   | _____    /:::/    / \\:::\\    \\  ";
		std::cout << "\n /:::/    /      |:::|    |     |:::|    | /:::/\\:::\\   \\:::\\    \\  /:::/    /   \\:::\\ ___\\  /\\   \\  /:::/\\:::\\    \\  /:::/   |::|   |/\\    \\  /:::/    /   \\:::\\ ___\\ ";
		std::cout << "\n/:::/____/       |:::|____|     |:::|    |/:::/  \\:::\\   \\:::\\____\\/:::/____/     \\:::|    |/::\\   \\/:::/  \\:::\\____\\/:: /    |::|   /::\\____\\/:::/____/  ___\\:::|    |";
		std::cout << "\n\\:::\\    \\        \\:::\\    \\   /:::/    / \\::/    \\:::\\  /:::/    /\\:::\\    \\     /:::|____|\\:::\\  /:::/    \\::/    /\\::/    /|::|  /:::/    /\\:::\\    \\ /\\  /:::|____|";
		std::cout << "\n \\:::\\    \\        \\:::\\    \\ /:::/    /   \\/____/ \\:::\\/:::/    /  \\:::\\    \\   /:::/    /  \\:::\\/:::/    / \\/____/  \\/____/ |::| /:::/    /  \\:::\\    /::\\ \\::/    / ";
		std::cout << "\n  \\:::\\    \\        \\:::\\    /:::/    /             \\::::::/    /    \\:::\\    \\ /:::/    /    \\::::::/    /                   |::|/:::/    /    \\:::\\   \\:::\\ \\/____/  ";
		std::cout << "\n   \\:::\\    \\        \\:::\\__/:::/    /               \\::::/    /      \\:::\\    /:::/    /      \\::::/____/                    |::::::/    /      \\:::\\   \\:::\\____\\    ";
		std::cout << "\n    \\:::\\    \\        \\::::::::/    /                /:::/    /        \\:::\\  /:::/    /        \\:::\\    \\                    |:::::/    /        \\:::\\  /:::/    /    ";
		std::cout << "\n     \\:::\\    \\        \\::::::/    /                /:::/    /          \\:::\\/:::/    /          \\:::\\    \\                   |::::/    /          \\:::\\/:::/    /     ";
		std::cout << "\n      \\:::\\    \\        \\::::/    /                /:::/    /            \\::::::/    /            \\:::\\    \\                  /:::/    /            \\::::::/    /      ";
		std::cout << "\n       \\:::\\____\\        \\::/____/                /:::/    /              \\::::/    /              \\:::\\____\\                /:::/    /              \\::::/    /         __";
		std::cout << "\n        \\::/    /         ~~                      \\::/    /                \\::/____/                \\::/    /                \\::/    /                \\::/____/        /.\\__\\";
		std::cout << "\n         \\/____/                                   \\/____/                  ~~                       \\/____/                  \\/____/                                  \\./__/";

		system("cls");
		std::cout << "\n          _____           _______                   _____                    _____                    _____                    _____                    _____          ";
		std::cout << "\n         /\\    \\         /::\\    \\                 /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         ";
		std::cout << "\n        /::\\____\\       /::::\\    \\               /::\\    \\                /::\\    \\                /::\\    \\                /::\\____\\                /::\\    \\        ";
		std::cout << "\n       /:::/    /      /::::::\\    \\             /::::\\    \\              /::::\\    \\               \\:::\\    \\              /::::|   |               /::::\\    \\       ";
		std::cout << "\n      /:::/    /      /::::::::\\    \\           /::::::\\    \\            /::::::\\    \\               \\:::\\    \\            /:::::|   |              /::::::\\    \\      ";
		std::cout << "\n     /:::/    /      /:::/~~\\:::\\    \\         /:::/\\:::\\    \\          /:::/\\:::\\    \\               \\:::\\    \\          /::::::|   |             /:::/\\:::\\    \\     ";
		std::cout << "\n    /:::/    /      /:::/    \\:::\\    \\       /:::/__\\:::\\    \\        /:::/  \\:::\\    \\               \\:::\\    \\        /:::/|::|   |            /:::/  \\:::\\    \\    ";
		std::cout << "\n   /:::/    /      /:::/    / \\:::\\    \\     /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\              /::::\\    \\      /:::/ |::|   |           /:::/    \\:::\\    \\   ";
		std::cout << "\n  /:::/    /      /:::/____/   \\:::\\____\\   /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\    ____    /::::::\\    \\    /:::/  |::|   | _____    /:::/    / \\:::\\    \\  ";
		std::cout << "\n /:::/    /      |:::|    |     |:::|    | /:::/\\:::\\   \\:::\\    \\  /:::/    /   \\:::\\ ___\\  /\\   \\  /:::/\\:::\\    \\  /:::/   |::|   |/\\    \\  /:::/    /   \\:::\\ ___\\ ";
		std::cout << "\n/:::/____/       |:::|____|     |:::|    |/:::/  \\:::\\   \\:::\\____\\/:::/____/     \\:::|    |/::\\   \\/:::/  \\:::\\____\\/:: /    |::|   /::\\____\\/:::/____/  ___\\:::|    |";
		std::cout << "\n\\:::\\    \\        \\:::\\    \\   /:::/    / \\::/    \\:::\\  /:::/    /\\:::\\    \\     /:::|____|\\:::\\  /:::/    \\::/    /\\::/    /|::|  /:::/    /\\:::\\    \\ /\\  /:::|____|";
		std::cout << "\n \\:::\\    \\        \\:::\\    \\ /:::/    /   \\/____/ \\:::\\/:::/    /  \\:::\\    \\   /:::/    /  \\:::\\/:::/    / \\/____/  \\/____/ |::| /:::/    /  \\:::\\    /::\\ \\::/    / ";
		std::cout << "\n  \\:::\\    \\        \\:::\\    /:::/    /             \\::::::/    /    \\:::\\    \\ /:::/    /    \\::::::/    /                   |::|/:::/    /    \\:::\\   \\:::\\ \\/____/  ";
		std::cout << "\n   \\:::\\    \\        \\:::\\__/:::/    /               \\::::/    /      \\:::\\    /:::/    /      \\::::/____/                    |::::::/    /      \\:::\\   \\:::\\____\\    ";
		std::cout << "\n    \\:::\\    \\        \\::::::::/    /                /:::/    /        \\:::\\  /:::/    /        \\:::\\    \\                    |:::::/    /        \\:::\\  /:::/    /    ";
		std::cout << "\n     \\:::\\    \\        \\::::::/    /                /:::/    /          \\:::\\/:::/    /          \\:::\\    \\                   |::::/    /          \\:::\\/:::/    /     ";
		std::cout << "\n      \\:::\\    \\        \\::::/    /                /:::/    /            \\::::::/    /            \\:::\\    \\                  /:::/    /            \\::::::/    /      ";
		std::cout << "\n       \\:::\\____\\        \\::/____/                /:::/    /              \\::::/    /              \\:::\\____\\                /:::/    /              \\::::/    /         __      __";
		std::cout << "\n        \\::/    /         ~~                      \\::/    /                \\::/____/                \\::/    /                \\::/    /                \\::/____/        /.\\__\\ /.\\__\\";
		std::cout << "\n         \\/____/                                   \\/____/                  ~~                       \\/____/                  \\/____/                                  \\./__/ \\./__/";

		system("cls");
		std::cout << "\n          _____           _______                   _____                    _____                    _____                    _____                    _____          ";
		std::cout << "\n         /\\    \\         /::\\    \\                 /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         ";
		std::cout << "\n        /::\\____\\       /::::\\    \\               /::\\    \\                /::\\    \\                /::\\    \\                /::\\____\\                /::\\    \\        ";
		std::cout << "\n       /:::/    /      /::::::\\    \\             /::::\\    \\              /::::\\    \\               \\:::\\    \\              /::::|   |               /::::\\    \\       ";
		std::cout << "\n      /:::/    /      /::::::::\\    \\           /::::::\\    \\            /::::::\\    \\               \\:::\\    \\            /:::::|   |              /::::::\\    \\      ";
		std::cout << "\n     /:::/    /      /:::/~~\\:::\\    \\         /:::/\\:::\\    \\          /:::/\\:::\\    \\               \\:::\\    \\          /::::::|   |             /:::/\\:::\\    \\     ";
		std::cout << "\n    /:::/    /      /:::/    \\:::\\    \\       /:::/__\\:::\\    \\        /:::/  \\:::\\    \\               \\:::\\    \\        /:::/|::|   |            /:::/  \\:::\\    \\    ";
		std::cout << "\n   /:::/    /      /:::/    / \\:::\\    \\     /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\              /::::\\    \\      /:::/ |::|   |           /:::/    \\:::\\    \\   ";
		std::cout << "\n  /:::/    /      /:::/____/   \\:::\\____\\   /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\    ____    /::::::\\    \\    /:::/  |::|   | _____    /:::/    / \\:::\\    \\  ";
		std::cout << "\n /:::/    /      |:::|    |     |:::|    | /:::/\\:::\\   \\:::\\    \\  /:::/    /   \\:::\\ ___\\  /\\   \\  /:::/\\:::\\    \\  /:::/   |::|   |/\\    \\  /:::/    /   \\:::\\ ___\\ ";
		std::cout << "\n/:::/____/       |:::|____|     |:::|    |/:::/  \\:::\\   \\:::\\____\\/:::/____/     \\:::|    |/::\\   \\/:::/  \\:::\\____\\/:: /    |::|   /::\\____\\/:::/____/  ___\\:::|    |";
		std::cout << "\n\\:::\\    \\        \\:::\\    \\   /:::/    / \\::/    \\:::\\  /:::/    /\\:::\\    \\     /:::|____|\\:::\\  /:::/    \\::/    /\\::/    /|::|  /:::/    /\\:::\\    \\ /\\  /:::|____|";
		std::cout << "\n \\:::\\    \\        \\:::\\    \\ /:::/    /   \\/____/ \\:::\\/:::/    /  \\:::\\    \\   /:::/    /  \\:::\\/:::/    / \\/____/  \\/____/ |::| /:::/    /  \\:::\\    /::\\ \\::/    / ";
		std::cout << "\n  \\:::\\    \\        \\:::\\    /:::/    /             \\::::::/    /    \\:::\\    \\ /:::/    /    \\::::::/    /                   |::|/:::/    /    \\:::\\   \\:::\\ \\/____/  ";
		std::cout << "\n   \\:::\\    \\        \\:::\\__/:::/    /               \\::::/    /      \\:::\\    /:::/    /      \\::::/____/                    |::::::/    /      \\:::\\   \\:::\\____\\    ";
		std::cout << "\n    \\:::\\    \\        \\::::::::/    /                /:::/    /        \\:::\\  /:::/    /        \\:::\\    \\                    |:::::/    /        \\:::\\  /:::/    /    ";
		std::cout << "\n     \\:::\\    \\        \\::::::/    /                /:::/    /          \\:::\\/:::/    /          \\:::\\    \\                   |::::/    /          \\:::\\/:::/    /     ";
		std::cout << "\n      \\:::\\    \\        \\::::/    /                /:::/    /            \\::::::/    /            \\:::\\    \\                  /:::/    /            \\::::::/    /      ";
		std::cout << "\n       \\:::\\____\\        \\::/____/                /:::/    /              \\::::/    /              \\:::\\____\\                /:::/    /              \\::::/    /         __      __     __";
		std::cout << "\n        \\::/    /         ~~                      \\::/    /                \\::/____/                \\::/    /                \\::/    /                \\::/____/        /.\\__\\ /.\\__\\ /.\\__\\";
		std::cout << "\n         \\/____/                                   \\/____/                  ~~                       \\/____/                  \\/____/                                  \\./__/ \\./__/ \\./__/";

	}
}

void display_monster1() {
	std::cout << "\n ";
		std::cout << "\n   , ,, ,                              ";
		std::cout << "\n   | || |    ,/  _____  \\.             ";
		std::cout << "\n   \\_||_/    ||_/     \\_||             ";
		std::cout << "\n     ||       \\_| . . |_/              ";
		std::cout << "\n     ||         |  L  |                ";
		std::cout << "\n    ,||         |`==='|                ";
		std::cout << "\n    |>|      ___`>  -<'___             ";
		std::cout << "\n    |>|\\    /             \\            ";
		std::cout << "\n    \\>| \\  /  ,    .    .  |           ";
		std::cout << "\n     ||  \\/  /| .  |  . |  |           ";
		std::cout << "\n     ||\\  ` / | ___|___ |  |     (     ";
		std::cout << "\n  (( || `--'  | _______ |  |     ))  ( ";
		std::cout << "\n(  )\\|| (  )\\ | - --- - | -| (  ( \\  ))";
		std::cout << "\n(\\/  || ))/ ( | -- - -- |  | )) )  \\(( ";
		std::cout << "\n ( ()||((( ())|         |  |( (( () )";
}

void display_monster2() {
		std::cout << "\n	                      .-'/   .-'/";
		std::cout << "\n                             /  (.-./  (";
		std::cout << "\n                            /           \\      .^.";
		std::cout << "\n                           |  -=- -=-    |    (_|_)";
		std::cout << "\n                            \\   /       /      // ";
		std::cout << "\n                             \\  .=.    /       \\\\";
		std::cout << "\n                        ___.__`..;._.-'---...  //";
		std::cout << "\n                  __.--'        `;'     __   `-.  ";
		std::cout << "\n        -===-.--''      __.,              ''-.  '.";
		std::cout << "\n          '=_    __.---'   | `__    __'   / .'  .'";
		std::cout << "\n          `'-''''           \\             .'  .'";
		std::cout << "\n                             |  __ __    /   |";
		std::cout << "\n                             |  __ __   //`'`'";
		std::cout << "\n                             |         ' | //";
		std::cout << "\n                             |    .      |//";
		std::cout << "\n                            .'`., , ,,,.`'.";
		std::cout << "\n                           .'`',.',`.` ,.'.`";
		std::cout << "\n                            ',',,,,.'...',,'";
		std::cout << "\n                            '..,',`'.`,`,.',";
		std::cout << "\n                           ,''.,'.,;',.'.`.'";
		std::cout << "\n                           '.`.',`,;',',;,.;";
		std::cout << "\n                            ',`'.`';',',`',.";
		std::cout << "\n                             |     |     |";
		std::cout << "\n                             (     (     |";
}

void display_monster3() {
		std::cout << "\n              .7";
		std::cout << "\n            .'/";
		std::cout << "\n           / /";
		std::cout << "\n          / /";
		std::cout << "\n         / /";
		std::cout << "\n        / /";
		std::cout << "\n       / /";
		std::cout << "\n      / /";
		std::cout << "\n     / /         ";
		std::cout << "\n    / /          ";
		std::cout << "\n  __|/";
		std::cout << "\n,-\\__\\";
		std::cout << "\n|f-'Y\\|";
		std::cout << "\n\\()7L/";
		std::cout << "\n cgD                            __ _";
		std::cout << "\n |\\(                          .'  Y '>,";
		std::cout << "\n  \\ \\                        / _   _   \\";
		std::cout << "\n   \\\\\\                       )(_) (_)(|}";
		std::cout << "\n    \\\\\\                      {  4A   } /";
		std::cout << "\n     \\\\\\                      \\uLuJJ/\\l";
		std::cout << "\n      \\\\\\                     |3    p)/";
		std::cout << "\n       \\\\\\___ __________      /nnm_n//";
		std::cout << "\n       c7___-__,__-)\\,__)('.  \\_>-<_/D";
		std::cout << "\n                  //V     \\_'-._.__G G_c__.-__<'/ ( \\";
		std::cout << "\n                         <'-._>__-,G_.___)\\   \\7\\";
		std::cout << "\n                        ('-.__.| \\'<.__.-' )   \\ \\";
		std::cout << "\n                        |'-.__'\\  |'-.__.-'.\\   \\ \\";
		std::cout << "\n                        ('-.__''. \\'-.__.-'.|    \\_\\";
		std::cout << "\n                        \\'-.__''|!|'-.__.-'.)     \\ \\";
		std::cout << "\n                         '-.__''\\_|'-.__.-'./      \\ l";
		std::cout << "\n                          '.__'''>G>-.__.-'>       .--,_";
		std::cout << "\n                              ''  G";
}

void display_monster4() {

std::cout << "\n           _......._";
std::cout << "\n       .-'.'.'.'.'.'.`-.";
std::cout << "\n     .'.'.'.'.'.'.'.'.'.`.";
std::cout << "\n    /.'.'               '.\\";
std::cout << "\n    |.'    _.--...--._     |";
std::cout << "\n    \\    `._.-.....-._.'   /";
std::cout << "\n    |     _..- .-. -.._   |";
std::cout << "\n .-.'    `.   ((@))  .'   '.-.";
std::cout << "\n( ^ \\      `--.   .-'     / ^ )";
std::cout << "\n \\  /         .   .       \\  /";
std::cout << "\n /          .'     '.  .-    \\";
std::cout << "\n( _.\\    \\ (_`-._.-'_)    /._\\)";
std::cout << "\n `-' \\   ' .--.          / `-'";
std::cout << "\n     |  / /|_| `-._.'\\   |";
std::cout << "\n     |   |       |_| |   /-.._";
std::cout << "\n _..-\\   `.--.______.'  |";
std::cout << "\n      \\       .....     |";
std::cout << "\n       `.  .'      `.  /";
std::cout << "\n         \\           .'";
std::cout << "\n          `-..___..-`";
}

void display_monster5() {
	std::cout << "\n	                            ==(W{==========-      /===-                        ";
		std::cout << "\n                              ||  (.--.)         /===-_---~~~~~~~~~------____  ";
		std::cout << "\n                              | \\_,|**|,__      |===-~___                _,-' `";
		std::cout << "\n                 -==\\\\        `\\ ' `--'   ),    `//~\\\\   ~~~~`---.___.-~~      ";
		std::cout << "\n             ______-==|        /`\\_. .__/\\ \\    | |  \\\\           _-~`         ";
		std::cout << "\n       __--~~~  ,-/-==\\\\      (   | .  |~~~~|   | |   `\\        ,'             ";
		std::cout << "\n    _-~       /'    |  \\\\     )__/==0==-\\<>/   / /      \\      /               ";
		std::cout << "\n  .'        /       |   \\\\      /~\\___/~~\\/  /' /        \\   /'                ";
		std::cout << "\n /  ____  /         |    \\`\\.__/-~~   \\  |_/'  /          \\/'                  ";
		std::cout << "\n/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`                   ";
		std::cout << "\n                  \\_|      /        _) | ;  ),   __--~~                        ";
		std::cout << "\n                    '~~--_/      _-~/- |/ \\   '-~ \\                            ";
		std::cout << "\n                   {\\__--_/}    / \\\\_>-|)<__\\      \\                           ";
		std::cout << "\n                   /'   (_/  _-~  | |__>--<__|      |                          ";
		std::cout << "\n                  |   _/) )-~     | |__>--<__|      |                          ";
		std::cout << "\n                  / /~ ,_/       / /__>---<__/      |                          ";
		std::cout << "\n                 o-o _//        /-~_>---<__-~      /                           ";
		std::cout << "\n                 (^(~          /~_>---<__-      _-~                            ";
		std::cout << "\n                ,/|           /__>--<__/     _-~                               ";
		std::cout << "\n             ,//('(          |__>--<__|     /                  .----_          ";
		std::cout << "\n            ( ( '))          |__>--<__|    |                 /' _---_~\\        ";
		std::cout << "\n         `-)) )) (           |__>--<__|    |               /'  /     ~\\`\\      ";
		std::cout << "\n        ,/,'//( (             \\__>--<__\\    \\            /'  //        ||      ";
		std::cout << "\n      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'       ";
		std::cout << "\n    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/                  ";
		std::cout << "\n  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~                    ";
		std::cout << "\n   ;'( ')/ ,)(                              ~~~~~~~~~~                         ";
		std::cout << "\n  ' ') '( (/                                                                   ";
		std::cout << "\n    '   '  `";
}

void display_monster6() {


		std::cout << "\n             /           /";
		std::cout << "\n            /' .,,,,  ./";
		std::cout << "\n           /';'     ,/";
		std::cout << "\n          / /   ,,//,`'`";
		std::cout << "\n         ( ,, '_,  ,,,' ``";
		std::cout << "\n         |    /@  ,,, ;' `";
		std::cout << "\n        /    .   ,''/' `,``";
		std::cout << "\n       /   .     ./, `,, ` ;";
		std::cout << "\n    ,./  .   ,-,',` ,,/''\\,'";
		std::cout << "\n   |   /; ./,,'`,,'' |   |";
		std::cout << "\n   |     /   ','    /    |";
		std::cout << "\n    \\___/'   '     |     |";
		std::cout << "\n      `,,'  |      /     `\\";
		std::cout << "\n           /      |        ~\\";
		std::cout << "\n          '       (";
		std::cout << "\n         :";
		std::cout << "\n        ; .         \\--";
		std::cout << "\n      :   \\         ;  ";


}

void display_monster7() {
		std::cout << "\n                                             ,--,  ,.-.";
		std::cout << "\n               ,                   \\,       '-,-`,'-.' | ._";
		std::cout << "\n              /|           \\    ,   |\\         }  )/  / `-,',";
		std::cout << "\n              [ ,          |\\  /|   | |        /  \\|  |/`  ,`";
		std::cout << "\n              | |       ,.`  `,` `, | |  _,...(   (      .',";
		std::cout << "\n              \\  \\  __ ,-` `  ,  , `/ |,'      Y     (   /_L\\";
		std::cout << "\n               \\  \\_\\,``,   ` , ,  /  |         )         _,/";
		std::cout << "\n                \\  '  `  ,_ _`_,-,<._.<        /         /";
		std::cout << "\n                 ', `>.,`  `  `   ,., |_      |         /";
		std::cout << "\n                   \\/`  `,   `   ,`  | /__,.-`    _,   `\\";
		std::cout << "\n               -,-..\\  _  \\  `  /  ,  / `._) _,-\\`       \\";
		std::cout << "\n                \\_,,.) /\\    ` /  / ) (-,, ``    ,        |";
		std::cout << "\n               ,` )  | \\_\\       '-`  |  `(               \\";
		std::cout << "\n              /  /```(   , --, ,' \\   |`<`    ,            |";
		std::cout << "\n             /  /_,--`\\   <\\  V /> ,` )<_/)  | \\      _____)";
		std::cout << "\n       ,-, ,`   `   (_,\\ \\    |   /) / __/  /   `----`";
		std::cout << "\n      (-, \\           ) \\ ('_.-._)/ /,`    /";
		std::cout << "\n      | /  `          `/ \\\\ V   V, /`     /";
		std::cout << "\n   ,--\\(        ,     <_/`\\\\     ||      /";
		std::cout << "\n  (   ,``-     \\/|         \\-A.A-`|     /";
		std::cout << "\n ,>,_ )_,..(    )\\          -,,_-`  _--`";
		std::cout << "\n(_ \\|`   _,/_  /  \\_            ,--`";
		std::cout << "\n \\( `   <.,../`     `-.._   _,-`";


}

void display_npc1() {
		std::cout << "\n	   _..-------.";
		std::cout << "\n          /           '.";
		std::cout << "\n          `            l";
		std::cout << "\n          |'._  ,._ l/'\\";
		std::cout << "\n          |  _J<__/.v._/";
		std::cout << "\n           \\( ,~._,,,,-)";
		std::cout << "\n            `-\\' \\`,,j|";
		std::cout << "\n               \\_,____J";
		std::cout << "\n          .--.__)--(__.--.";
		std::cout << "\n         /  `-----..--'. j";
		std::cout << "\n         '.- '`--` `--' \\\\";
		std::cout << "\n        //  '`---'`  `-' \\\\";
		std::cout << "\n       //   '`----'`.-.-' \\\\";
		std::cout << "\n     _//     `--- -'   \\' | \\________";
		std::cout << "\n    |  |         ) (      `.__.---- -'\\";
		std::cout << "\n     \\7          \\`-(               74\\\\\\";
		std::cout << "\n     ||       _  /`-(               l|//7__";
		std::cout << "\n     |l    ('  `-)-/_.--.          f''` -.-'|";
		std::cout << "\n     |\\     l\\_  `-'    .'         |     |  |";
		std::cout << "\n     llJ   _ _)J--._.-('           |     |  l";
		std::cout << "\n     |||( ( '_)_  .l   '. _    ..__I     |  L";
		std::cout << "\n     ^\\\\\\||`'   '   ''-. ' )''`'---'     L.-'`-.._";
		std::cout << "\n          \\ |           ) /.              ``'`-.._``-.";
		std::cout << "\n          l l          / / |                      |''|";
		std::cout << "\n           ' \\        / /   '-..__                |  |";
		std::cout << "\n           | |       / /          1       ,- t-...J_.'";
		std::cout << "\n           | |      / /           |       |  |";
		std::cout << "\n           J  \\  /'  (            l       |  |";
		std::cout << "\n           | ().'`-()/            |       |  |";
		std::cout << "\n          _.-'_.____/             l       l.-l";
		std::cout << "\n      _.-'_.+'|                  /        \\.  \\";
		std::cout << "\n/'\\.-'_.-'  | |                 /          \\   \\";
		std::cout << "\n\\_   '      | |                1            | `'|";
		std::cout << "\n  |ll       | |                |            i   |";
		std::cout << "\n  \\\\\\       |-\\               \\j ..          L,,'. `/";
		std::cout << "\n __\\\\\\     ( .-\\           .--'    ``--../..'      '-..";
		std::cout << "\n   `'''`----`\\\\\\\\ .....--'''";
		std::cout << "\n              \\\\\\\\                           -nabis  ''";
}
void display_npc2() {
		std::cout << "\n	               \\";
		std::cout << "\n      '.                 \\.";
		std::cout << "\n       '.                 '\\";
		std::cout << "\n       ::                  \\\\";
		std::cout << "\n       ' .                 '.\\";
		std::cout << "\n        ''    ;.   ,        ' .";
		std::cout << "\n        '.~   .'-  .^  .     \\ \\";
		std::cout << "\n     -.._' \\   \\ \\  \\\\  \\    '  \\";
		std::cout << "\n       '.'\\ \\._ ) \\ ) \\.)\\-\\..\\  :";
		std::cout << "\n         ''\\ ',\\'_.);-.).) )) '~~).";
		std::cout << "\n ~'~~.._    '  -'         ''~.)    '~,";
		std::cout << "\n  ''~.  ''~~)'. '-,           ',.'''' '~.";
		std::cout << "\n      ' ..~',' '-''~~...___.~''  '~.     ~.";
		std::cout << "\n       .'  .'      _.~~''''.,       '~.   '~~~.~.  _..._";
		std::cout << "\n     .'    |       '. (  () )';>       ''~.      '(.___.)..";
		std::cout << "\n    /      '       ..''~~~~''_.~  ....._.  '~.             ''~.";
		std::cout << "\n   '     ___\\~-      ''''''''    '       ''~~.''':==>..        '~.";
		std::cout << "\n .'          \\_~               .              '~((####)) ..       '.";
		std::cout << "\n.|       _.-'', /          ..~'                  ''~~~'    ''~~~~~  :>";
		std::cout << "\n              /'.                       .~'~~..___............~;>~''";
		std::cout << "\n           .~'  '~.         '-~~....--''__________,,....~~~~'''";
		std::cout << "\n                   '--''~~..._____,..~~'";	
		std::cout << "\n                  .'";
}


