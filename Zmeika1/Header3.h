#pragma once
#ifndef APPLE
#define APPLE
//мой любимый класс €блок
class Apple {
private:
	int AppleX; //координаты €блок
	int AppleY;
	int time_speed; 
public:
	//методы дл€ €блок
	void setAppleX(int a);
	void setAppleY(int a);
	void setTimeSpeed(int a); //дл€ золотого €блока, дл€ увеличени€ скорости
	void minus();
	void createApple();
	int getAppleX();
	int getAppleY();
	int getTimeSpeed();
};
//объ€вление глобальных объектов, разные €блочки 
extern Apple apple;
extern Apple apple_Speed;
extern Apple apple_toxic;
extern Apple apple_big;
extern Apple apple_telep;

#endif 
