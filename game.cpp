#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>

int main() {

	int x = 30;
	int y = 7;

	while (1 < 2) {
		
		system("cls");
		map(x, y);
		map_controls(x, y);
	}

/*
	bool gameOver = false;
	Enemy monster1;
	monster1.new_randenemy(50, 50);
	Player me;
	me.make_player("Mark", 100, 20, 20);
	menu(gameOver); 
	battle(monster1, me);
*/
}
/*Note: Add a 2D array for the coordiantes on our map.*/