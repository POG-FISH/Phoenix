#pragma once

class Player {
private:

	std::string pname;
	int phealth, pstrength, pspeed;

public:

	void make_player(std::string new_pname,int new_phealth, int new_pstrength, int new_pspeed);

};

class Ally {
private:

	std::string allyname;
	int allyhealth, allystrength, allyspeed;

public:



};

class Enemy {
private:

	std::string eName;
	int eHealth, eStrength, eSpeed;

public:

	void new_enemy(std::string new_name, int new_eHealth, int new_eStrength, int new_eSpeed);
	void new_randenemy(int min, int max);
	void get_enem_info();
	std::string get_enem_name();
	int get_enem_health();
	int get_enem_speed();
	int get_enem_strength();
};

bool menu(bool &gameOver);
	void menu_settings();
	void menu_about();

void battle(Enemy &i, Player &q);
	
void health_display(int health);

void map(int &x, int &y);
	void map_controls(int &x, int &y);

void display_monster1();
void display_monster2();
void display_monster3();


//Empty
void hacking_game();
void passcode(int passcode);
void setup();
void score();
void end_game();
void dot();