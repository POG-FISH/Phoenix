#include <iostream>
#include <conio.h>
#include "game.h"
#include <vector>
#include <cmath>
#include <time.h>

void Enemy::give_enemycoords(int new_ex, int new_ey) {
	ex = new_ex;
	ey = new_ey;
}

void Enemy::give_enem_health(int new_health) {
	eHealth = new_health;
}

void Enemy::give_enem_speed(int new_speed) {
	eSpeed = new_speed;
}
void Enemy::give_enem_strength(int new_strength) {
	eStrength = new_strength;
}
void Enemy::give_enem_alive(bool isAlive) {
	eAlive = isAlive;
}
bool Enemy::get_enem_alive() {
	return eAlive;
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


int Enemy::get_enemy_x_coord() {
	return ex;
}
int Enemy::get_enemy_y_coord() {
	return ey;
}

void Enemy::new_enemy(std::string new_name, int new_eHealth, int new_eStrength, int new_eSpeed) {

}

void Enemy::get_enem_info() {
	std::cout << "\nName: " << eName;
	std::cout << "\nHealth: " << eHealth;
	std::cout << "\nStrength: " << eStrength;
	std::cout << "\nSpeed: " << eSpeed;
}

void Enemy::new_randenemy(int min, int max) {
	std::vector<std::string> first_name = { "Dru'", "Val'", "Xivu'", "Ur'", "La'", "Vau'", "Kui'", "Yuru'", "Shura'", "Xira'", "Shivu'" };
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

	elook = rand() % 7 + 1;
	eHealth = rand() % max + min;
	eStrength = rand() % max + min;
	eSpeed = rand() % max + min;
	eAlive = true;
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

void Enemy::give_enemylook(int look) {
	elook = look;
}
void Enemy::display_enemy() {
	switch (elook)
	{
	case 1:
		display_monster1();
		break;
	case 2:
		display_monster2();
		break;
	case 3:
		display_monster3();
		break;
	case 4:
		display_monster4();
		break;
	case 5:
		display_monster5();
		break;
	case 6:
		display_monster6();
		break;
	case 7:
		display_monster7();
		break;
	default:
		break;
	}
}