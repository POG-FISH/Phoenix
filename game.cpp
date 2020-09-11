#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>

int main() {

	entrance();

	bool gameOver = false;
	menu(gameOver);

	Player p1;
	p1.make_player("Mark", 100, 20, 20);
	p1.give_playercoords(30, 7);
	int x = p1.get_player_x_coord();
	int y = p1.get_player_y_coord();

	Enemy rand_devil;
	rand_devil.new_randenemy(50, 50);
	rand_devil.give_enemycoords(15, 15);
	
	Map map1;
	map1.create_map(80, 20);

	int i = 0;
	while (gameOver == false) {
		system("cls");
		map1.draw_map(x, y, rand_devil, p1);
		map1.map_bounds();
		map1.map_controls(x, y);
		p1.give_playercoords(x, y);
	}

}

//btw menu doesnt work with capslock