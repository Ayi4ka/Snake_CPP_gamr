#include "Header3.h"
#include "Header1.h"
#include "stdlib.h"
#include <cstdlib>
#include <ctime>
//методы класса яблоки
void Apple::createApple() {
	AppleX = rand() % Area::AREA_X; //рандомная задача координат яблока
	AppleY = rand() % Area::AREA_Y;
}	
int Apple::getAppleX() {
	return AppleX;
}
int Apple::getAppleY() {
	return AppleY;
}

int Apple::getTimeSpeed() {
	return time_speed;
}
void Apple::setTimeSpeed(int a) {
	time_speed = a;
}
void Apple::minus() {
	time_speed--; //уменьшение значения времени для золотого яблока
}

void Apple::setAppleX(int a) {
	AppleX = a;
}
void Apple::setAppleY(int a) {
	AppleY = a;
}

Apple apple;
Apple apple_Speed;
Apple apple_toxic;
Apple apple_big;
Apple apple_telep;

