#pragma once


class Player {
private:

	std::string pname;
	int phealth, pstrength, pspeed, px, py;

public:

	void make_player(std::string new_pname,int new_phealth, int new_pstrength, int new_pspeed);
	void give_playercoords(int new_px, int new_py);
	int get_player_x_coord();
	int get_player_y_coord();
	int get_player_health();
	std::string get_player_name();
	void give_player_health(int health);
	void give_player_strength(int strength);
	void give_player_speed(int speed);
	void give_player_name(std::string new_name);

};

class Ally {
private:

	std::string allyname;
	int allyhealth, allystrength, allyspeed, ax, ay;

public:



};

class Enemy {
private:

	std::string eName;
	int eHealth, eStrength, eSpeed, ex, ey, elook;

public:

	void new_enemy(std::string new_name, int new_eHealth, int new_eStrength, int new_eSpeed);
	void give_enemycoords(int new_ex, int new_ey);
	void give_enemylook(int look);
	void display_enemy();
	int get_enemy_x_coord();
	int get_enemy_y_coord();
	void new_randenemy(int min, int max);
	void get_enem_info();
	std::string get_enem_name();
	int get_enem_health();
	int get_enem_speed();
	int get_enem_strength();
};

class Map
{
private:

	int mapHEIGHT, mapWIDTH;

public:

	void create_map(int new_WIDTH, int new_HEIGHT);
	void draw_map(int& x, int& y, Enemy& a, Player& q);
	void map_bounds();
	void map_controls(int& x, int& y);

};

void battle(Enemy &i, Player &q);

bool menu(bool &gameOver);
	void menu_settings();
	void menu_about();
	void menu_controls();
	void menu_extra();
void menu_paused();

//Displays
void health_display(Player player);

void display_gamelogo();
void display_monster1();
void display_monster2();
void display_monster3();
void display_monster4();
void display_monster5();
void display_monster6();
void display_monster7();
void display_npc1();
void display_npc2();

void bigload();
void ringspin_looped();
void ringspin_looped2(int &i);
void diamond_looped();

void passcode(int passcode);

//Empty
void hacking_game();
void setup();
void score();
void end_game();
void dot();
void hunger();
void chest();
void display_inventory();

//ENTER THE GAME
void entrance();