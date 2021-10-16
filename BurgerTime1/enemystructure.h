#ifndef ENEMYSTRUCTURE_H_INCLUDED
#define ENEMYSTRUCTURE_H_INCLUDED
#include"burgerstructure.h"

int er = 0;

int life = 3;

//Function
void enemyinitialisation();
void enemypositionchange();
void enemycharcollision();


typedef struct Enemy Enemy;
struct Enemy
{
	int x;
	int y;
	int midx=x+20;
	int imgr[2], imgl[2];
	//int dx = 40;
	//int dy = 55;
	bool right;
	bool left;
};

Enemy egg1, egg2,egg3, hotdog1,hotdog2,hotdog3;

void enemyinitialisation(){
	hotdog1.y = platformlevel[8];
	egg1.y = platformlevel[7];
	hotdog2.y = platformlevel[5];
	egg2.y = platformlevel[4];
	egg3.y = platformlevel[3];
	hotdog3.y = platformlevel[1];
	
	

	hotdog1.x = 80 - 20; hotdog1.right = true; hotdog1.left = false;
	egg1.x = 288 - 20; egg1.right = true; egg1.left = false;
	hotdog2.x = 912 - 20; hotdog2.right = false; hotdog2.left = true;
	egg2.x = 496 - 20; egg2.right = false; egg2.left = true;
	egg3.x = 548; egg3.right = true; egg3.left = false;
	hotdog3.x = 500 - 20; hotdog3.right = true; hotdog3.left = false;
}

void enemypositionchange(){
	
	er++;
	if (er >= 2) er = 0;
	if (hotdog1.right)
	{
		hotdog1.x += sp;
		if (hotdog1.x == 912 - 20)
		{
			hotdog1.left = true;
			hotdog1.right = false;
			
		}
	}
	if (hotdog1.left)
	{
		hotdog1.x -= sp;
		if (hotdog1.x == 80 - 20)
		{
			hotdog1.right = true;
			hotdog1.left = false;		

		}
	}

	if (egg1.right)
	{
		egg1.x += sp;
		if (egg1.x == 704-20)
		{
			egg1.left = true;
			egg1.right = false;

		}
	}
	if (egg1.left)
	{
		egg1.x -= sp;
		if (egg1.x == 288-20)
		{
			egg1.right = true;
			egg1.left = false;

		}
	}




	if (hotdog2.right)
	{
		hotdog2.x += sp;
		if (hotdog2.x == 912 - 20)
		{
			hotdog2.left = true;
			hotdog2.right = false;

		}
	}
	if (hotdog2.left)
	{
		hotdog2.x -= sp;
		if (hotdog2.x == 484)
		{
			hotdog2.right = true;
			hotdog2.left = false;

		}
	}



	if (egg2.right)
	{
		egg2.x += sp;
		if (egg2.x == 496 - 20)
		{
			egg2.left = true;
			egg2.right = false;

		}
	}
	if (egg2.left)
	{
		egg2.x -= sp;
		if (egg2.x == 80 - 20)
		{
			egg2.right = true;
			egg2.left = false;

		}
	}




	if (egg3.right)
	{
		egg3.x += sp;
		if (egg3.x == 912 - 20)
		{
			egg3.left = true;
			egg3.right = false;

		}
	}
	if (egg3.left)
	{
		egg3.x -= sp;
		if (egg3.x == 484)
		{
			egg3.right = true;
			egg3.left = false;

		}
	}




	if (hotdog3.right)
	{
		hotdog3.x += sp;
		if (hotdog3.x == 888)
		{
			hotdog3.left = true;
			hotdog3.right = false;

		}
	}
	if (hotdog3.left)
	{
		hotdog3.x -= sp;
		if (hotdog3.x == 64)
		{
			hotdog3.right = true;
			hotdog3.left = false;

		}
	}

}

void enemycharcollision(){

	if (hotdog1.y == charposy){
		if (charmidx >= hotdog1.x&&charmidx <= hotdog1.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}

	}
	if (hotdog2.y == charposy){
		if (charmidx >= hotdog2.x&&charmidx <= hotdog2.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}

	}
	if (hotdog3.y == charposy){
		if (charmidx >= hotdog3.x&&charmidx <= hotdog3.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}

	}
	if (egg1.y == charposy){
		if (charmidx >= egg1.x&&charmidx <= egg1.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}

	}
	if (egg2.y == charposy){
		if (charmidx >= egg2.x&&charmidx <= egg2.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}

	}
	if (egg3.y == charposy){
		if (charmidx >= egg3.x&&charmidx <= egg3.x + 40){
			charposx = 500 - 20;
			charposy = 100;
			life -= 1;
		}


	}

}


	

















#endif // ENEMYSTRUCTURE_H_INCLUDED