#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>
#include <stdlib.h>


void Map::create_map(int new_WIDTH, int new_HEIGHT) {
	mapWIDTH = new_WIDTH;
	mapHEIGHT = new_HEIGHT;
}

void Map::draw_map(int& x, int& y, bool &gameOver, Enemy& a, Player& q) { //80,20 for coords is a good map size

	int const WIDTH = mapWIDTH; //map x
	int const HEIGHT = mapHEIGHT; //map y
	int ex = a.get_enemy_x_coord(), ey = a.get_enemy_y_coord();
	bool infight = false;

	if (x > WIDTH - 2) { //This chain of if and for statements is to keep the player from going outside the map
		for (int i = 0; x > WIDTH - 2; i++) {
			x--;
		}
	}
	else if (y > HEIGHT - 2) {
		for (int i = 0; y > HEIGHT - 2; i++) {
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

	if (ex > WIDTH - 2) { //This chain of if and for statements is to keep the enemy from going outside the map
		for (int i = 0; ex > WIDTH - 2; i++) {
			ex--;
		}
	}
	else if (ey > HEIGHT - 2) {
		for (int i = 0; ey > HEIGHT - 2; i++) {
			ey--;
		}
	}
	else if (ex < 1) {
		for (int i = 0; ex < 1; i++) {
			ex++;
		}
	}
	else if (ey < 1) {
		for (int i = 0; ey < 1; i++) {
			ey++;
		}
	}

	for (int i = 0; i < HEIGHT; i++) { // This draws the map, player, and enemyy. i for height(x), j for WIDTH(y)
		for (int j = 0; j < WIDTH; j++) {
			if (i == 0 || j == 0 || i == HEIGHT - 1 || j == WIDTH - 1) {
				std::cout << "#";
			}
			else if (x == j && y == i) {
				std::cout << "O";
			}
			else if (ex == j && ey == i) {
				std::cout << "E";
			}
			else if (x == ex && y == ey || x - 1 == ex && y == ey || x + 1 == ex && y == ey || x == ex && y - 1 == ey || x == ex && y + 1 == ey) {
				infight = true;
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "\n";

	}
	std::cout << "X: " << x << " Y: " << y;

	srand(time(NULL));
	int turn = rand() % 2;
	//int turn = 1;
	std::cout << " Turn: " << turn;

	if (turn == 1) {
		if (x > ex && y > ey) { //This moves the enemy closer to the player. But it is random and can sometimes just move is different directions.
			ex++;
			ey++;
		}
		else if (x < ex && y < ey) {
			ex--;
			ey--;
		}
		else if (x < ex && y > ey) {
			ex--;
			ey++;
		}
		else if (x > ex && y < ey) {
			ex++;
			ey--;
		}
		else if (x > ex) {
			ex++;
		}
		else if (y > ey) {
			ey++;
		}
		else if (x < ex) {
			ex--;
		}
		else if (y < ey) {
			ey--;
		}
		a.give_enemycoords(ex, ey); //Sets the changed coords to the enemy. If not here the enemy wont move
	}
	else { //Moves enemy in rand direction if not towards the player
		int q = rand() % 4;
		std::cout << " Rand: " << q;
		if (q == 0) { ex--; }
		if (q == 1) { ex++; }
		if (q == 2) { ey--; }
		if (q == 3) { ey++; }
		a.give_enemycoords(ex, ey); //Sets the changed coords to the enemy. If not here the enemy wont move
	}
	if(infight == true) {
		battle(infight, a, q);
		if (infight == false && gameOver == false)
		{
			if (x == ex && y == ey || x - 1 == ex && y == ey || x + 1 == ex && y == ey || x == ex && y - 1 == ey || x == ex && y + 1 == ey) { //This attempts to make the enemy run away after retreating
				for (int i = 0; i < 5; i++) {
					ex--;
					ey--;
				}
			}
			a.give_enemycoords(ex, ey); //Sets the changed coords to the enemy. If not here the enemy wont move
			system("cls");
			Map::draw_map(x, y, gameOver, a, q);
		}
		else if (infight == false && gameOver == true) {
			std::cout << "\nGAME OVER!!";
		}

	}
	
}

void Map::map_bounds() {

}

void Map::map_controls(int& x, int& y) { //Allows control of map and changes player x and y respectively
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
		case 'p':
			menu_paused();
			break;
		default:
			break;
		}
	}
}
