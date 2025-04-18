#pragma once
#ifndef ACTIONS
#define ACTIONS
//класс действия
class Actions {
private:
	bool InGame = false; //буллевная переменная указывающая на то в игре ли змея
public:
	void setGame(bool a); 
	bool getGame(); 
	void moveSnake(); //движение змеи
	void checkCollisions(); //проверка на столкновение с препядствиями и хвостом
};
extern Actions actions;
#endif 



