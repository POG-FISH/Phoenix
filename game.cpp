#include <iostream>
#include "game.h"
#include <time.h>

int main() {
	srand(time(NULL)); //makes functions(especially randenemy constructor) truly random
	//entrance();


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
	
	Map map1, randmap1;
	map1.create_map(110, 35);
	randmap1.create_map(80, 30);


	int i = 0;
	while (gameOver == false) {
		system("cls");
		//map1.draw_map(x, y, gameOver, rand_devil, p1);
		randmap1.draw_randmap(x, y, gameOver, p1, 3);
		randmap1.map_controls(x, y);
		p1.give_playercoords(x, y);
	}

}


/*
PhoenixV0.320

changes:
Logo is more centered
added basic retreat option
adding a random map generator


Should work on:

Inventory
Combat
Randomized items
Rarities to items with colored text
make changes to how map looks. Maybe try to make a circle map. 
Add more flaire to the entrance function
Add interactable npcs
Add allies to aid in combat. They dont have to be complex, could just be extra damage each turn or something
STRETCH: Add local multiplayer functionality. Altough I doubt you should even attempt this
Add small mini games (password minigame/ hacking mini game)
Make the game look prettier
Add more names for more uniquness among the enemies
Give the player a look. Maybe add very small custimization to that look
See if you can add visual things like the ringloop() into the map screen just for something to look at. Could require a system("cls") constantly instead of when just moving

And number one of all, if I get sick of making this I should stop and not force myself


*/