#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>

void Player::make_player(std::string new_pname, int new_phealth, int new_pstrength, int new_pspeed) {
	pname = new_pname;
	phealth = new_phealth;
	pstrength = new_pstrength;
	pspeed = new_pspeed;
}

void Player::give_playercoords(int new_px, int new_py) {
	px = new_px;
	py = new_py;
}

void Player::give_player_name(std::string new_name) {
	pname = new_name;
}

int Player::get_player_x_coord() {
	return px;
}
int Player::get_player_y_coord() {
	return py;
}

int Player::get_player_health() {
	return phealth;
}

std::string Player::get_player_name() {
	return pname;
}

void Player::give_player_health(int health) {
	phealth = health;
}
void Player::give_player_strength(int strength) {
	pstrength = strength;
}
void Player::give_player_speed(int speed) {
	pspeed = speed;
}