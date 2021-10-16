#include "iGraphics.h"
#include "myheader.h"
#include "imageloader.h"
#include "burgerstructure.h"
#include "charposition.h"
#include "enemystructure.h"
#include "file.h"
#include <iostream>

using namespace std;

//functions
void maingame();
void highscorepage();
void menupage();
void helppage1();
void helppage2();
void helppage3();
void reset();
void loadingpage();
void levelpage();
void gameoverpage();


int gamepr=1;// game pause resume
int bflag = 0;
int sflag = 0;
bool mki = false;//mouse & keyboard interaction

//bool music = true;


//Mouse Works
int mposx, mposy;
void iPassiveMouseMove(int mx, int my);

///
bool musicOn = true, music_iDraw = true, musicOff = false;
bool enter = false;
///

void menupage()
{
	iShowImage(0, 0, 1000, 800, imgmainmenu);
	iShowImage(400, 440, 200, 100, imgbs);
	iShowImage(400, 320, 200, 100, imgbhs);
	iShowImage(400, 200, 200, 100, imgbh);
	iShowImage(400, 80, 200, 100, imgbq);
	if (mposx >= 400 && mposx <= 600 && mposy >= 440 && mposy <= 540)
	{
		iShowImage(400, 440, 200, 100, imgbis);
		iShowImage(280, 440, 100, 100, imgburger);
	}
	if (mposx >= 400 && mposx <= 600 && mposy >= 320 && mposy <= 420)
	{
		iShowImage(400, 320, 200, 100, imgbihs);
		iShowImage(280, 320, 100, 100, imgburger);

	}
	if (mposx >= 400 && mposx <= 600 && mposy >= 200 && mposy <= 300)
	{
		iShowImage(400, 200, 200, 100, imgbih);
		iShowImage(280, 200, 100, 100, imgburger);
	}
	if (mposx >= 400 && mposx <= 600 && mposy >= 80 && mposy <= 180)
	{
		iShowImage(400, 80, 200, 100, imgbiq);
		iShowImage(280, 80, 100, 100, imgburger);
	}
	if (!mki){
		if (bflag == 1)
		{
			iShowImage(400, 440, 200, 100, imgbis);
			iShowImage(280, 440, 100, 100, imgburger);
		}
		if (bflag == 2)
		{
			iShowImage(400, 320, 200, 100, imgbihs);
			iShowImage(280, 320, 100, 100, imgburger);
		}
		if (bflag == 3)
		{
			iShowImage(400, 200, 200, 100, imgbih);
			iShowImage(280, 200, 100, 100, imgburger);
		}
		if (bflag == 4)
		{
			iShowImage(400, 80, 200, 100, imgbiq);
			iShowImage(280, 80, 100, 100, imgburger);
		}
	}
}



void maingame(){
	iShowImage(0, 0, 1000, 800, imggmbkgrnd);
	iShowImage(50, 720, 130, 60, imgbm);

	if (life == 3){
		iShowImage(430, 740, 40, 40, imglife);
		iShowImage(480, 740, 40, 40, imglife);
		iShowImage(530, 740, 40, 40, imglife);
	}
	if (life == 2){
		iShowImage(430, 740, 40, 40, imglife);
		iShowImage(480, 740, 40, 40, imglife);
		
	}
	if (life == 1){
		iShowImage(430, 740, 40, 40, imglife);	
		
	}

	//Burger Start
	//Burger 1
	iShowImage(b1.ub.l.a.x, b1.ub.l.a.y, 50, 30, b1.ub.l.image);
	iShowImage(b1.ub.m.a.x, b1.ub.m.a.y, 50, 30, b1.ub.m.image);
	iShowImage(b1.ub.r.a.x, b1.ub.r.a.y, 50, 30, b1.ub.r.image);

	iShowImage(b1.pa.l.a.x, b1.pa.l.a.y, 50, 30, b1.pa.l.image);
	iShowImage(b1.pa.m.a.x, b1.pa.m.a.y, 50, 30, b1.pa.m.image);
	iShowImage(b1.pa.r.a.x, b1.pa.r.a.y, 50, 30, b1.pa.r.image);

	iShowImage(b1.le.l.a.x, b1.le.l.a.y, 50, 30, b1.le.l.image);
	iShowImage(b1.le.m.a.x, b1.le.m.a.y, 50, 30, b1.le.m.image);
	iShowImage(b1.le.r.a.x, b1.le.r.a.y, 50, 30, b1.le.r.image);

	iShowImage(b1.lb.l.a.x, b1.lb.l.a.y, 50, 30, b1.lb.l.image);
	iShowImage(b1.lb.m.a.x, b1.lb.m.a.y, 50, 30, b1.lb.m.image);
	iShowImage(b1.lb.r.a.x, b1.lb.r.a.y, 50, 30, b1.lb.r.image);

	//Burger 2
	iShowImage(b2.ub.l.a.x, b2.ub.l.a.y, 50, 30, b2.ub.l.image);
	iShowImage(b2.ub.m.a.x, b2.ub.m.a.y, 50, 30, b2.ub.m.image);
	iShowImage(b2.ub.r.a.x, b2.ub.r.a.y, 50, 30, b2.ub.r.image);

	iShowImage(b2.pa.l.a.x, b2.pa.l.a.y, 50, 30, b2.pa.l.image);
	iShowImage(b2.pa.m.a.x, b2.pa.m.a.y, 50, 30, b2.pa.m.image);
	iShowImage(b2.pa.r.a.x, b2.pa.r.a.y, 50, 30, b2.pa.r.image);

	iShowImage(b2.le.l.a.x, b2.le.l.a.y, 50, 30, b2.le.l.image);
	iShowImage(b2.le.m.a.x, b2.le.m.a.y, 50, 30, b2.le.m.image);
	iShowImage(b2.le.r.a.x, b2.le.r.a.y, 50, 30, b2.le.r.image);

	iShowImage(b2.lb.l.a.x, b2.lb.l.a.y, 50, 30, b2.lb.l.image);
	iShowImage(b2.lb.m.a.x, b2.lb.m.a.y, 50, 30, b2.lb.m.image);
	iShowImage(b2.lb.r.a.x, b2.lb.r.a.y, 50, 30, b2.lb.r.image);

	//Burger 3
	iShowImage(b3.ub.l.a.x, b3.ub.l.a.y, 50, 30, b3.ub.l.image);
	iShowImage(b3.ub.m.a.x, b3.ub.m.a.y, 50, 30, b3.ub.m.image);
	iShowImage(b3.ub.r.a.x, b3.ub.r.a.y, 50, 30, b3.ub.r.image);

	iShowImage(b3.pa.l.a.x, b3.pa.l.a.y, 50, 30, b3.pa.l.image);
	iShowImage(b3.pa.m.a.x, b3.pa.m.a.y, 50, 30, b3.pa.m.image);
	iShowImage(b3.pa.r.a.x, b3.pa.r.a.y, 50, 30, b3.pa.r.image);

	iShowImage(b3.le.l.a.x, b3.le.l.a.y, 50, 30, b3.le.l.image);
	iShowImage(b3.le.m.a.x, b3.le.m.a.y, 50, 30, b3.le.m.image);
	iShowImage(b3.le.r.a.x, b3.le.r.a.y, 50, 30, b3.le.r.image);

	iShowImage(b3.lb.l.a.x, b3.lb.l.a.y, 50, 30, b3.lb.l.image);
	iShowImage(b3.lb.m.a.x, b3.lb.m.a.y, 50, 30, b3.lb.m.image);
	iShowImage(b3.lb.r.a.x, b3.lb.r.a.y, 50, 30, b3.lb.r.image);

	//Burger 4
	iShowImage(b4.ub.l.a.x, b4.ub.l.a.y, 50, 30, b4.ub.l.image);
	iShowImage(b4.ub.m.a.x, b4.ub.m.a.y, 50, 30, b4.ub.m.image);
	iShowImage(b4.ub.r.a.x, b4.ub.r.a.y, 50, 30, b4.ub.r.image);
	
	iShowImage(b4.pa.l.a.x, b4.pa.l.a.y, 50, 30, b4.pa.l.image);
	iShowImage(b4.pa.m.a.x, b4.pa.m.a.y, 50, 30, b4.pa.m.image);
	iShowImage(b4.pa.r.a.x, b4.pa.r.a.y, 50, 30, b4.pa.r.image);

	iShowImage(b4.le.l.a.x, b4.le.l.a.y, 50, 30, b4.le.l.image);
	iShowImage(b4.le.m.a.x, b4.le.m.a.y, 50, 30, b4.le.m.image);
	iShowImage(b4.le.r.a.x, b4.le.r.a.y, 50, 30, b4.le.r.image);

	iShowImage(b4.lb.l.a.x, b4.lb.l.a.y, 50, 30, b4.lb.l.image);
	iShowImage(b4.lb.m.a.x, b4.lb.m.a.y, 50, 30, b4.lb.m.image);
	iShowImage(b4.lb.r.a.x, b4.lb.r.a.y, 50, 30, b4.lb.r.image);
	
	//Burger end


										//Enemy

	//Hot Dog 1
	if (hotdog1.right)
	{
		iShowImage(hotdog1.x, hotdog1.y, 40, 50, hotdog1.imgr[er]);
	}
	if (hotdog1.left)
	{
		iShowImage(hotdog1.x, hotdog1.y, 40, 50, hotdog1.imgl[er]);
	}

	//Hot Dog 2
	if (hotdog2.right)
	{
		iShowImage(hotdog2.x, hotdog2.y, 40, 50, hotdog2.imgr[er]);
	}
	if (hotdog2.left)
	{
		iShowImage(hotdog2.x, hotdog2.y, 40, 50, hotdog2.imgl[er]);
	}

	//Hot Dog 3
	if (hotdog3.right)
	{
		iShowImage(hotdog3.x, hotdog3.y, 40, 50, hotdog3.imgr[er]);
	}
	if (hotdog3.left)
	{
		iShowImage(hotdog3.x, hotdog3.y, 40, 50, hotdog3.imgl[er]);
	}

	//Egg 1
	if (egg1.right)
	{
		iShowImage(egg1.x, egg1.y, 40, 50, egg1.imgr[er]);
	}
	if (egg1.left)
	{
		iShowImage(egg1.x, egg1.y, 40, 50, egg1.imgl[er]);
	}

	//Egg 2
	if (egg2.right)
	{
		iShowImage(egg2.x, egg2.y, 40, 50, egg2.imgr[er]);
	}
	if (egg2.left)
	{
		iShowImage(egg2.x, egg2.y, 40, 50, egg2.imgl[er]);
	}

	//Egg 3
	if (egg3.right)
	{
		iShowImage(egg3.x, egg3.y, 40, 50, egg3.imgr[er]);
	}
	if (egg3.left)
	{
		iShowImage(egg3.x, egg3.y, 40, 50, egg3.imgl[er]);
	}

	//Character
	if (stand)
		iShowImage(charposx, charposy, 40, 55, imgstand);
	if (mright)
	{
		iShowImage(charposx, charposy, 40, 55, charright[animateindex]);
	}
	if (mleft)
	{
		iShowImage(charposx, charposy, 40, 55, charleft[animateindex]);
	}
	if (mposx >= 50 && mposx <= 170 && mposy >= 720 && mposy <= 780){
		iShowImage(50, 720, 130, 60, imgbim);
	}

	burgerreposition();
	enemycharcollision();
	charmoverestriction();
	_itoa_s(score, scr, 10);
	iSetColor(242, 211, 0);
	iText(830, 750, "SCORE", GLUT_BITMAP_HELVETICA_18);
	iText(910, 750, scr, GLUT_BITMAP_HELVETICA_18);


	///Saif STARTS - maingame



	/// Saif ENDS -  maingame
}

void highscorepage()
{
	iShowImage(0, 0, 1000, 800, imghighscore);
	iShowImage(50, 700, 130, 60, imgbm);
	if (mposx >= 50 && mposx <= 170 && mposy >= 700 && mposy <= 760){
		iShowImage(50, 700, 130, 60, imgbim);
	}

	///Saif STARTS - hsPage

	FILE *f1;
	Highnmbr v[3];


	f1 = fopen("highscore.txt", "r+");

	int j = 0;
	while (fscanf(f1, "%s %d", v[j].name, &v[j].nmbrs) != EOF)
	{
		j++;
	}

	fclose(f1);

	char highS1[30], highS2[30], highS3[30];

	int aN = v[0].nmbrs, bN = v[1].nmbrs, cN = v[2].nmbrs;

	_itoa_s(aN, highS1, 10);
	_itoa_s(bN, highS2, 10);
	_itoa_s(cN, highS3, 10);

	iSetColor(242, 211, 0);

	iText(390, 500, "1.  ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(420, 500, v[0].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(520, 500, highS1, GLUT_BITMAP_TIMES_ROMAN_24);

	iText(390, 460, "2.  ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(420, 460, v[1].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(520, 460, highS2, GLUT_BITMAP_TIMES_ROMAN_24);

	iText(390, 420, "3.  ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(420, 420, v[2].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(520, 420, highS3, GLUT_BITMAP_TIMES_ROMAN_24);

	/// Saif ENDS -  hsPage

}

void helppage1()
{
	iShowImage(0, 0, 1000, 800, imghelp1);
	iShowImage(50, 700, 130, 60, imgbm);
	if (mposx >= 50 && mposx <= 170 && mposy >= 700 && mposy <= 760){
		iShowImage(50, 700, 130, 60, imgbim);
	}
	iShowImage(820, 200, 130, 60, imgbfw);
	if (mposx >= 820 && mposx <= 820+130 && mposy >=200 && mposy <= 200+60){
		iShowImage(820, 200, 130, 60, imgbifw);
	}
}
void helppage2()
{
	iShowImage(0, 0, 1000, 800, imghelp2);
	iShowImage(50, 700, 130, 60, imgbm);
	if (mposx >= 50 && mposx <= 170 && mposy >= 700 && mposy <= 760){
		iShowImage(50, 700, 130, 60, imgbim);
	}
	iShowImage(50, 140, 130, 60, imgbbw);
	if (mposx >= 50 && mposx <= 50 + 130 && mposy >= 140 && mposy <= 140 + 60){
		iShowImage(50, 140, 130, 60, imgbibw);
	}
	iShowImage(820, 140, 130, 60, imgbfw);
	if (mposx >= 820 && mposx <= 820 + 130 && mposy >= 140 && mposy <= 140 + 60){
		iShowImage(820, 140, 130, 60, imgbifw);
	}
	
}
void helppage3()
{
	iShowImage(0, 0, 1000, 800, imghelp3);
	iShowImage(50, 700, 130, 60, imgbm);
	if (mposx >= 50 && mposx <= 170 && mposy >= 700 && mposy <= 760){
		iShowImage(50, 700, 130, 60, imgbim);
	}
	iShowImage(50, 200, 130, 60, imgbbw);
	if (mposx >= 50 && mposx <= 50 + 130 && mposy >= 200 && mposy <= 200 + 60){
		iShowImage(50, 200, 130, 60, imgbibw);
	}
}

void loadingpage(){
	iShowImage(0, 0, 1000, 800, imgloading);
}


void levelpage(){

	iShowImage(0, 0, 1000, 800, imglevel);
	iShowImage(200, 400, 200, 100, imgbrookie);
	//iShowImage(400, 320, 200, 100, imgbhs);
	iShowImage(600, 400, 200, 100, imgbpro);
	//iShowImage(400, 80, 200, 100, imgbq);
	if (mposx >= 200 && mposx <= 400 && mposy >= 400 && mposy <= 500)
	{
		iShowImage(200, 400, 200, 100, imgbirookie);
		iShowImage(80, 400, 100, 100, imgburger);
	}
	//if (mposx >= 400 && mposx <= 600 && mposy >= 320 && mposy <= 420)
		//iShowImage(400, 320, 200, 100, imgbihs);
	if (mposx >= 600 && mposx <= 800 && mposy >= 400 && mposy <= 500)
	{
		iShowImage(600, 400, 200, 100, imgbipro);
		iShowImage(820, 400, 100, 100, imgburger);
		
	}
	//if (mposx >= 400 && mposx <= 600 && mposy >= 80 && mposy <= 180)
		//iShowImage(400, 80, 200, 100, imgbiq);

}
void gameoverpage(){
	iShowImage(0, 0, 1000, 800, imggameover);
	iShowImage(400, 200, 200, 100, imgbm);
	if (mposx >= 400 && mposx <= 600 && mposy >= 200 && mposy <= 300){
		iShowImage(400, 200, 200, 100, imgbim);
	}

	/// Score
	if (score>LS)	
	{
		iSetColor(242,211,0);
		iRectangle(279, 511, 352, 52);
		iRectangle(280, 512, 350, 50);
		iRectangle(281, 513, 348, 48);
		iText(300, 530, "Enter your name:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(480, 530, str, GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if (score < LS)
	{
		_itoa_s(score, scr, 10);
		iSetColor(242, 211, 0);
		iRectangle(379, 429, 248, 48);
		iRectangle(380, 430, 250, 50);
		iRectangle(381, 431, 248, 48);
		iText(400, 450, "Your Score is : ", GLUT_BITMAP_HELVETICA_18);
		iText(530, 450, scr, GLUT_BITMAP_HELVETICA_18);
	}
	/// Score
}

void iDraw()
{
	
	iClear();
	glutPassiveMotionFunc(iPassiveMouseMove);
	
	
	if (life == 0 && enter)
		sflag = 2;

	if (life == 0 && !enter)
		sflag = 8;
	
	if (sflag == 0)
	{
		menupage();		
	}

	if (sflag == 1)
	{
		/// MUSIC - 1
		if (musicOn && sflag == 1 && music_iDraw)
		{
			PlaySound("music\\Burger Time Theme.wav", NULL, SND_LOOP | SND_ASYNC);
			music_iDraw = false;
		}
		/// MUSIC - 1

		maingame();
	}

	/// MUSIC - 2 
	if (sflag != 1)
	{
		PlaySound(0,0,0);
		music_iDraw = true;
	}
	/// MUSIC - 2 

	if (sflag == 2){
		highscorepage();
	}
	if (sflag == 3){
		helppage1();
	}
	if (sflag == 4){
		helppage2();
	}
	if (sflag == 5){
		helppage3();
	}

	if (sflag == 6)
	{
		levelpage();
	}
	if (sflag == 8){
		gameoverpage();
	}

	iSetColor(0, 0, 0);
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	printf("x:%d\ty:%d\n", mx, my);
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(sflag==0&&mx >= 400 && mx <= 600 && my >= 440 && my <= 540){
			sflag = 6;
		}
		if (sflag == 6 && mx >= 200 && mx <= 400 && my >= 400 && my <= 500){
			sflag = 1;
			sp = 4;
			reset();
		}
		if (sflag == 6 && mx >= 600 && mx <= 800 && my >= 400 && my <= 500){
			sflag = 1;
			sp = 8;
			reset();
		}
		if (sflag == 0 && mx >= 400 && mx <= 600 && my >= 320 && my <= 420){
			sflag = 2;
		}
		if (sflag == 0 && mx >= 400 && mx <= 600 && my >= 200 && my <= 300){
			sflag = 3;
		}
		if (sflag == 0 && mx >=400 && mx <= 600 && my >= 80 && my <= 180){
			exit(0);
		}
		if (sflag == 1 && mx >= 50 && mx <= 170 && my >= 720 && my <= 780){
			sflag = 0;
			reset();
		}
		if (sflag == 2 && mx >= 50 && mx <= 170 && my >= 700 && my <= 760){
			sflag = 0; reset();
		}
		if (sflag == 3 && mx >= 50 && mx <= 170 && my >= 700 && my <= 760){
			sflag = 0; reset();
		}
		if (sflag == 8 && mx >= 400 && mx <= 600 && my >= 200 && my <= 300)
		{
			sflag = 0; reset();
		}
		//Help Page
		if (sflag == 3 && mx >= 820 && mx <= 820+130 && my >= 200 && my <= 200+60)
		{
			sflag = 4;
		}
		if (sflag == 4 && mx >= 50 && mx <= 170 && my >= 700 && my <= 760){
			sflag = 0; reset();
		}
		if (sflag == 4 && mx >= 50 && mx <= 50 + 130 && my >= 140 && my <= 140+60)
		{
			sflag = 3;
		}
		if (sflag == 4 && mx >= 820 && mx <= 820 + 130 && my >= 140 && my <= 140+60)
		{
			sflag = 5;
		}
		if (sflag == 5 && mx >= 50 && mx <= 170 && my >= 700 && my <= 760){
			sflag = 0; reset();
		}
		if (sflag == 5 && mx >= 50 && mx <= 50 + 130 && my >= 200 && my <= 200 + 60)
		{
			sflag = 4;
		}



	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	mposx = mx;
	mposy = iScreenHeight - my;
	//printf("x:%d\ty:%d\n", mposx, mposy);
	if (sflag == 0 && (mposx >= 400 && mposx <= 600 && mposy >= 440 && mposy <= 540) || (mposx >= 400 && mposx <= 600 && mposy >= 320 && mposy <= 420) || (mposx >= 400 && mposx <= 600 && mposy >= 200 && mposy <= 300) || (mposx >= 400 && mposx <= 600 && mposy >= 80 && mposy <= 180)){ mki = true; bflag = 0;}
	else mki = false;
	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	
	if (sflag==0&&bflag==1&&key == '\r')
	{
		sflag = 1;
		reset();
	}
	if (sflag == 0 && bflag == 2 && key == '\r')
	{
		sflag = 2;
	}
	if (sflag == 0 && bflag == 3 && key == '\r')
	{
		sflag = 3;
	}
	if (sflag == 0 && bflag == 4 && key == '\r')
	{
		exit(0);
	}
	if (sflag == 1 && key == 'p'){
		gamepr = 0;
		iPauseTimer(0);
	}
	if (sflag == 1 && key == 'r'){
		iResumeTimer(0);
		gamepr = 1;
	}
	if (sflag == 1 && key == 'o'){
		life -= 1;
	}
	if (sflag == 1 && key == 'i'&&life<3){
		life += 1;
	}


	/// Saif - starts - keyboard

	if (key != '\b')
	{
		str[indexNum] = key;
		indexNum++;
		str[indexNum] = '\0';

	}
	if (key == '\b')
	{
		if (indexNum <= 0)
		{
			indexNum = 0;
		}
		else
		{
			indexNum--;
			str[indexNum] = '\0';
		}
	}

	if (sflag == 8 && score > LS && key == '\r')
	{
		store();
		enter = true;
	}

	/// Saif - ends - keyboard


	///Music key - starts
	if (key == 32 && sflag == 1)
	{
		if (musicOn)
		{
			PlaySound(0, 0, 0);
			musicOn = false;
		}
		else
		{
			musicOn = true;
			music_iDraw = true;
		}
	}
	///Music key - Ends

	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	//Platform Movement
	if (gamepr){
		//RIGHT
		if (sflag == 1 && key == GLUT_KEY_RIGHT && platform)
		{
			charmoveright();
		}
		//LEFT
		if (sflag == 1 && key == GLUT_KEY_LEFT && platform)
		{
			charmoveleft();
		}
		//Ladder Movement
		//UP
		if (sflag == 1 && key == GLUT_KEY_UP && ladder)
		{
			charmoveup();
		}

		if (sflag == 1 && key == GLUT_KEY_DOWN && ladder)
		{
			charmoverdown();
		}
	}

	if (sflag==0&&key == GLUT_KEY_UP)
	{
		bflag=bflag-1;
		if (bflag < 0){
			bflag = 4;
		}
	}
	if (sflag==0&&key == GLUT_KEY_DOWN)
	{
		bflag = bflag + 1;
		if (bflag > 4){
			bflag = 0;
		}
	}
	if (sflag == 1 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 2 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 3 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 4 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 5 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 6 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 7 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	if (sflag == 8 && key == GLUT_KEY_HOME)
	{
		sflag = 0;
		reset();
	}
	//place your codes for other keys here
}
void reset(){
	enemyinitialisation();
	burgerinitialisation();
	charposx = 500 - 20;
	charposy = 100;
	bool stand = true;
	bool mright = false;
	bool mleft = false;
	bool platform = false;
	bool ladder = false;
	score = 0;
	life = 3;
}


int main()
{
	//place your own initialization codes here.
	iInitialize(1000, 800, "BurgerTime");
	// loading images.
	/* iLoadImage() will return an interger type id
	for each image you load.
	*/

	/*if (music){
		PlaySound("music\\play.wav", NULL, SND_LOOP | SND_ASYNC);
	}*/


	iSetTimer(45, enemypositionchange);
	enemyinitialisation();
	burgerinitialisation();
	burgerdetailsposition();
	imageLoad();
	store();


	iStart(); // it will start drawing

	return 0;
}

