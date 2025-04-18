#pragma once
#ifndef SNAKE
#define SNAKE
#include <string>
//Класс змейка 
class Snake {
private:
	int sizeSnake; //размер змейки
	bool right = false; //булевые переменные направления
	bool left = true;
	bool up = false;
	bool down = false;
	std::string name; //название змейки 
public:
	Snake();
	~Snake();
	int x[5120]; //координаты змейки
	int y[5120];
	//методы класса
	
	void addDots(); //добавление хвоста
	void removeDots(); //обнуление хвоста
	void createSnake(); //создание головы змейки

	void setX(int a); //сеттеры геттеры координат
	void setY(int a);
	int getX(int a);
	int getY(int a);

	int getSizeSnake();

	void setLeft(bool a); //сеттеры направлений 
	void setRight(bool a);
	void setUp(bool a);
	void setDown(bool a);

	void setName(std::string a);
	std::string getName();

	bool getRight(); //геттеры направлений 
	bool getLeft();
	bool getUp();
	bool getDown();
};
extern Snake snake; //объект змея
#endif