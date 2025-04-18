#pragma once
#ifndef AREA
#define AREA
//класс игровое пространсво 
class Area {
public:
	static const int AREA_X = 80; //координаты и размер игрового пространсва 
	static const int AREA_Y = 64;
	static const int SIZE = 5120;
	int difficult;
public:
	Area(); 
	~Area();
	int getDifficult(); //уровни сложности 
	void setDifficult(int a);
};

extern Area area;
#endif