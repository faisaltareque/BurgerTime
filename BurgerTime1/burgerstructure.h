#include"enemystructure.h"
#ifndef BURGERSTRUCTURE_H_INCLUDED
#define BURGERSTRUCTURE_H_INCLUDED


int platformlevel[9] = { 20, 172, 240, 312, 384, 456, 524, 596, 668 };
int laddercolumn[9] = { 0, 80, 188, 288, 396, 500, 708, 812, 912 };

int animateindex, charposx = 480, charposy = 100;
int charmidx;

//score
int score = 0;
int indexNum = 0; //Saif
char str[100];	  //Saif
int lls = 100, hls = 120;
char scr[50];
int sp = 8;

//score



//Functions
void b1ubjump(int hp, int lp);
void b1pajump(int hp, int lp);
void b1lejump(int hp, int lp);
void b1lbjump(int hp, int lp);

void b2ubjump(int hp, int lp);
void b2pajump(int hp, int lp);
void b2lejump(int hp, int lp);
void b2lbjump(int hp, int lp);

void b3ubjump(int hp, int lp);
void b3pajump(int hp, int lp);
void b3lejump(int hp, int lp);
void b3lbjump(int hp, int lp);

void b4ubjump(int hp, int lp);
void b4pajump(int hp, int lp);
void b4lejump(int hp, int lp);
void b4lbjump(int hp, int lp);

typedef struct Point Point;
struct Point
{
	int x;
	int y;
	Point()
	{
		;
	}
	Point(int _x,int _y)
	{
		x = _x;
		y = _y;
	}
};
typedef struct Cpixel Cpixel;
struct Cpixel
{
	Point a,b,c,d;
	int image;//here could also be an image loading variable
	Cpixel()
	{
		;
	}
	Cpixel(Point _a, Point _b, Point _c, Point _d)
	{
		a = _a;
		b = _b;
		c = _c;
		d = _d;
	}
};
typedef struct Lbun Lbun;
struct Lbun
{
	///
	bool scrPlus = false;
	///
	Cpixel l, m, r;
	int plvl;
	Lbun()
	{
		;
	}
	Lbun(Cpixel _l, Cpixel _m, Cpixel _r)
	{
		l = _l;
		m = _m;
		r = _r;
	}
};
typedef struct Ubun Ubun;
struct Ubun
{
    ///
	bool scrPlus = false;
	///
	Cpixel l, m, r;
	int plvl;
	Ubun()
	{
		;
	}
	Ubun(Cpixel _l, Cpixel _m, Cpixel _r)
	{
		l = _l;
		m = _m;
		r = _r;
	}
};
typedef struct Letus Letus;
struct Letus
{
    ///
	bool scrPlus = false;
	///

	Cpixel l, m, r;
	int plvl;
	Letus()
	{
		;
	}
	Letus(Cpixel _l, Cpixel _m, Cpixel _r)
	{
		l = _l;
		m = _m;
		r = _r;
	}
};
typedef struct Pati Pati;
struct Pati
{
    ///
	bool scrPlus = false;
	///
	Cpixel l, m, r;
	int plvl;
	Pati()
	{
		;
	}
	Pati(Cpixel _l, Cpixel _m, Cpixel _r)
	{
		l = _l;
		m = _m;
		r = _r;
	}
};
typedef struct Burger Burger;
struct Burger
{
	Ubun ub;
	Letus le;
	Pati pa;
	Lbun lb;
	Burger()
	{
		;
	}
	Burger(Lbun _lb, Pati _pa, Letus _le, Ubun _ub)
	{
		lb = _lb;
		pa = _pa;
		le = _le;
		ub = _ub;
	}
};
Burger b1, b2, b3, b4;

//Burger 1 Jump Function
void b1ubjump(int hp, int lp)
{

	b1.ub.plvl = platformlevel[lp]; //printf("UB:%d\n", platformlevel[lp]);


		if (b1.pa.plvl == platformlevel[lp])
		{
			if (b1.pa.plvl == platformlevel[lp])
				b1pajump(lp,lp-1);
		}
		if (lp != 0){
			b1.ub.l.a.y = platformlevel[lp];
			b1.ub.m.a.y = platformlevel[lp];
			b1.ub.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b1.ub.l.a.y = platformlevel[lp] + 30 + 30+30;
			b1.ub.m.a.y = platformlevel[lp] + 30 + 30+30;
			b1.ub.r.a.y = platformlevel[lp] + 30 + 30+30;
		}

		//SCORE starts
		b1.ub.scrPlus = true;

		if (b1.ub.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b1.ub.scrPlus = false;
		}

		///SCORE ends
}
void b1pajump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 5 || lp == 2) lp = lp - 1;
		b1.pa.plvl = platformlevel[lp]; //printf("PA:%d\n", platformlevel[lp]);
		if (b1.le.plvl == platformlevel[lp])
		{
			b1lejump(lp, lp - 1);
		}
		if (lp != 0){
			b1.pa.l.a.y = platformlevel[lp];
			b1.pa.m.a.y = platformlevel[lp];
			b1.pa.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b1.pa.l.a.y = platformlevel[lp] + 30 + 30;
			b1.pa.m.a.y = platformlevel[lp] + 30 + 30;
			b1.pa.r.a.y = platformlevel[lp] + 30 + 30;
		}

		//SCORE starts
		b1.pa.scrPlus = true;

		if (b1.pa.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b1.pa.scrPlus = false;
		}

		///SCORE ends
	}
}
void b1lejump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 5 || lp == 2) lp = lp - 1;
		b1.le.plvl = platformlevel[lp]; //printf("LE:%d\n", platformlevel[lp]);

		if (b1.lb.plvl == platformlevel[lp])
		{
			b1lbjump(lp, lp - 1);
		}
		if (lp != 0){
			b1.le.l.a.y = platformlevel[lp];
			b1.le.m.a.y = platformlevel[lp];
			b1.le.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b1.le.l.a.y = platformlevel[lp] + 30;
			b1.le.m.a.y = platformlevel[lp] + 30;
			b1.le.r.a.y = platformlevel[lp] + 30;
		}

		//SCORE starts
		b1.le.scrPlus = true;

		if (b1.le.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b1.le.scrPlus = false;
		}

		///SCORE ends
	}
}
void b1lbjump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2)lp = lp - 1;

		b1.lb.plvl = platformlevel[lp]; //printf("LB:%d\n", platformlevel[lp]);

		b1.lb.l.a.y = platformlevel[lp];
		b1.lb.m.a.y = platformlevel[lp];
		b1.lb.r.a.y = platformlevel[lp];
	}

	//SCORE starts
	b1.lb.scrPlus = true;

	if (b1.lb.scrPlus)
	{
		if (sp == 4)score += lls;
		if (sp == 8)score += hls;
		b1.lb.scrPlus = false;
	}

	///SCORE ends
}






//Burger 2 Jump Function

void b2ubjump(int hp, int lp)
{

	b2.ub.plvl = platformlevel[lp]; //printf("UB:%d\n", platformlevel[lp]);


	if (b2.pa.plvl == platformlevel[lp])
	{
		if (b2.pa.plvl == platformlevel[lp])
			b2pajump(lp, lp - 1);
	}
	if (lp != 0){
		b2.ub.l.a.y = platformlevel[lp];
		b2.ub.m.a.y = platformlevel[lp];
		b2.ub.r.a.y = platformlevel[lp];
	}
	if (lp == 0)
	{
		b2.ub.l.a.y = platformlevel[lp] + 30 + 30 + 30;
		b2.ub.m.a.y = platformlevel[lp] + 30 + 30 + 30;
		b2.ub.r.a.y = platformlevel[lp] + 30 + 30 + 30;
	}

	//SCORE starts
	b2.ub.scrPlus = true;

	if (b2.ub.scrPlus)
	{
		if (sp == 4)score += lls;
		if (sp == 8)score += hls;
		b2.ub.scrPlus = false;
	}

	///SCORE ends
}
void b2pajump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 5 || lp == 3) lp = lp - 1;
		b2.pa.plvl = platformlevel[lp]; //printf("PA:%d\n", platformlevel[lp]);
		if (b2.le.plvl == platformlevel[lp])
		{
			b2lejump(lp, lp - 1);
		}
		if (lp != 0){
			b2.pa.l.a.y = platformlevel[lp];
			b2.pa.m.a.y = platformlevel[lp];
			b2.pa.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b2.pa.l.a.y = platformlevel[lp] + 30 + 30;
			b2.pa.m.a.y = platformlevel[lp] + 30 + 30;
			b2.pa.r.a.y = platformlevel[lp] + 30 + 30;
		}
		
		//SCORE starts
		b2.pa.scrPlus = true;

		if (b2.pa.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b2.pa.scrPlus = false;
		}

		///SCORE ends
	}
}
void b2lejump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 5 || lp == 3) lp = lp - 1;
		b2.le.plvl = platformlevel[lp]; //printf("LE:%d\n", platformlevel[lp]);

		if (b2.lb.plvl == platformlevel[lp])
		{
			b2lbjump(lp, lp - 1);
		}
		if (lp != 0){
			b2.le.l.a.y = platformlevel[lp];
			b2.le.m.a.y = platformlevel[lp];
			b2.le.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b2.le.l.a.y = platformlevel[lp] + 30;
			b2.le.m.a.y = platformlevel[lp] + 30;
			b2.le.r.a.y = platformlevel[lp] + 30;
		}
		//SCORE starts
		b2.le.scrPlus = true;

		if (b2.le.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b2.le.scrPlus = false;
		}

		///SCORE ends
	}
}
void b2lbjump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2)lp = lp - 1;

		b2.lb.plvl = platformlevel[lp]; //printf("LB:%d\n", platformlevel[lp]);

		b2.lb.l.a.y = platformlevel[lp];
		b2.lb.m.a.y = platformlevel[lp];
		b2.lb.r.a.y = platformlevel[lp];

		///SCORE starts
		b2.lb.scrPlus = true;

		if (b2.lb.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b2.lb.scrPlus = false;
		}

		///SCORE ends
	}
}





//Burger 3 Jump Function

void b3ubjump(int hp, int lp)
{

	b3.ub.plvl = platformlevel[lp]; //printf("UB:%d\n", platformlevel[lp]);


	if (b3.pa.plvl == platformlevel[lp])
	{
		if (b3.pa.plvl == platformlevel[lp])
			b3pajump(lp, lp - 1);
	}
	if (lp != 0){
		b3.ub.l.a.y = platformlevel[lp];
		b3.ub.m.a.y = platformlevel[lp];
		b3.ub.r.a.y = platformlevel[lp];
	}
	if (lp == 0)
	{
		b3.ub.l.a.y = platformlevel[lp] + 30 + 30 + 30;
		b3.ub.m.a.y = platformlevel[lp] + 30 + 30 + 30;
		b3.ub.r.a.y = platformlevel[lp] + 30 + 30 + 30;
	}

	//SCORE starts
	b3.ub.scrPlus = true;

	if (b3.ub.scrPlus)
	{
		if (sp == 4)score += lls;
		if (sp == 8)score += hls;
		b3.ub.scrPlus = false;
	}

	///SCORE ends
}
void b3pajump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 4 || lp == 2) lp = lp - 1;
		b3.pa.plvl = platformlevel[lp]; //printf("PA:%d\n", platformlevel[lp]);
		if (b3.le.plvl == platformlevel[lp])
		{
			b3lejump(lp, lp - 1);
		}
		if (lp != 0){
			b3.pa.l.a.y = platformlevel[lp];
			b3.pa.m.a.y = platformlevel[lp];
			b3.pa.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b3.pa.l.a.y = platformlevel[lp] + 30 + 30;
			b3.pa.m.a.y = platformlevel[lp] + 30 + 30;
			b3.pa.r.a.y = platformlevel[lp] + 30 + 30;
		}

		//SCORE starts
		b3.pa.scrPlus = true;

		if (b3.pa.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b3.pa.scrPlus = false;
		}

		///SCORE ends
	}
}
void b3lejump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 4 || lp == 2) lp = lp - 1;
		b3.le.plvl = platformlevel[lp]; //printf("LE:%d\n", platformlevel[lp]);

		if (b3.lb.plvl == platformlevel[lp])
		{
			b3lbjump(lp, lp - 1);
		}
		if (lp != 0){
			b3.le.l.a.y = platformlevel[lp];
			b3.le.m.a.y = platformlevel[lp];
			b3.le.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b3.le.l.a.y = platformlevel[lp] + 30;
			b3.le.m.a.y = platformlevel[lp] + 30;
			b3.le.r.a.y = platformlevel[lp] + 30;
		}

		//SCORE starts
		b3.le.scrPlus = true;

		if (b3.le.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b3.le.scrPlus = false;
		}

		///SCORE ends
	}

}
void b3lbjump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2)lp = lp - 1;

		b3.lb.plvl = platformlevel[lp]; //printf("LB:%d\n", platformlevel[lp]);

		b3.lb.l.a.y = platformlevel[lp];
		b3.lb.m.a.y = platformlevel[lp];
		b3.lb.r.a.y = platformlevel[lp];


		///SCORE starts
		b3.lb.scrPlus = true;

		if (b3.lb.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b3.lb.scrPlus = false;
		}

		///SCORE ends
	}
}


//Burger 4 Jump Function

void b4ubjump(int hp, int lp)
{

	b4.ub.plvl = platformlevel[lp]; //printf("UB:%d\n", platformlevel[lp]);


	if (b4.pa.plvl == platformlevel[lp])
	{
		if (b4.pa.plvl == platformlevel[lp])
			b4pajump(lp, lp - 1);
	}
	if (lp != 0){
		b4.ub.l.a.y = platformlevel[lp];
		b4.ub.m.a.y = platformlevel[lp];
		b4.ub.r.a.y = platformlevel[lp];
	}
	if (lp == 0)
	{
		b4.ub.l.a.y = platformlevel[lp] + 30 + 30 + 30;
		b4.ub.m.a.y = platformlevel[lp] + 30 + 30 + 30;
		b4.ub.r.a.y = platformlevel[lp] + 30 + 30 + 30;
	}

	//SCORE starts
	b4.ub.scrPlus = true;

	if (b4.ub.scrPlus)
	{
		if (sp == 4)score += lls;
		if (sp == 8)score += hls;
		b4.ub.scrPlus = false;
	}

	///SCORE ends
}
void b4pajump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2) lp = lp - 1;
		b4.pa.plvl = platformlevel[lp]; //printf("PA:%d\n", platformlevel[lp]);
		if (b4.le.plvl == platformlevel[lp])
		{
			b4lejump(lp, lp - 1);
		}
		if (lp != 0){
			b4.pa.l.a.y = platformlevel[lp];
			b4.pa.m.a.y = platformlevel[lp];
			b4.pa.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b4.pa.l.a.y = platformlevel[lp] + 30 + 30;
			b4.pa.m.a.y = platformlevel[lp] + 30 + 30;
			b4.pa.r.a.y = platformlevel[lp] + 30 + 30;
		}

		//SCORE starts
		b4.pa.scrPlus = true;

		if (b4.pa.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b4.pa.scrPlus = false;
		}

		///SCORE ends
	}
}
void b4lejump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2) lp = lp - 1;
		b4.le.plvl = platformlevel[lp]; //printf("LE:%d\n", platformlevel[lp]);

		if (b4.lb.plvl == platformlevel[lp])
		{
			b4lbjump(lp, lp - 1);
		}
		if (lp != 0){
			b4.le.l.a.y = platformlevel[lp];
			b4.le.m.a.y = platformlevel[lp];
			b4.le.r.a.y = platformlevel[lp];
		}
		if (lp == 0)
		{
			b4.le.l.a.y = platformlevel[lp] + 30;
			b4.le.m.a.y = platformlevel[lp] + 30;
			b4.le.r.a.y = platformlevel[lp] + 30;
		}
		//SCORE starts
		b4.le.scrPlus = true;

		if (b4.le.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b4.le.scrPlus = false;
		}

		///SCORE ends
	}

}
void b4lbjump(int hp, int lp)
{
	if (lp >= 0){
		if (lp == 2)lp = lp - 1;

		b4.lb.plvl = platformlevel[lp]; //printf("LB:%d\n", platformlevel[lp]);

		b4.lb.l.a.y = platformlevel[lp];
		b4.lb.m.a.y = platformlevel[lp];
		b4.lb.r.a.y = platformlevel[lp];

		//SCORE starts
		b4.lb.scrPlus = true;

		if (b4.lb.scrPlus)
		{
			if (sp == 4)score += lls;
			if (sp == 8)score += hls;
			b4.lb.scrPlus = false;
		}

		///SCORE ends
	}
}









void burgerinitialisation(){
	//Burger 1(a)
	b1.ub.l.a.x = 112; b1.ub.l.a.y = platformlevel[8];
	b1.ub.m.a.x = 162; b1.ub.m.a.y = platformlevel[8];
	b1.ub.r.a.x = 212; b1.ub.r.a.y = platformlevel[8];      b1.ub.plvl = platformlevel[8];

	b1.pa.l.a.x = 112; b1.pa.l.a.y = platformlevel[6];
	b1.pa.m.a.x = 162; b1.pa.m.a.y = platformlevel[6];
	b1.pa.r.a.x = 212; b1.pa.r.a.y = platformlevel[6];		b1.pa.plvl = platformlevel[6];

	b1.le.l.a.x = 112; b1.le.l.a.y = platformlevel[4];
	b1.le.m.a.x = 162; b1.le.m.a.y = platformlevel[4];
	b1.le.r.a.x = 212; b1.le.r.a.y = platformlevel[4];		b1.le.plvl = platformlevel[4];

	b1.lb.l.a.x = 112; b1.lb.l.a.y = platformlevel[3];
	b1.lb.m.a.x = 162; b1.lb.m.a.y = platformlevel[3];
	b1.lb.r.a.x = 212; b1.lb.r.a.y = platformlevel[3];		b1.lb.plvl = platformlevel[3];

	//Burger 2(a)
	b2.ub.l.a.x = 320; b2.ub.l.a.y = platformlevel[7];
	b2.ub.m.a.x = 370; b2.ub.m.a.y = platformlevel[7];
	b2.ub.r.a.x = 420; b2.ub.r.a.y = platformlevel[7];		b2.ub.plvl = platformlevel[7];

	b2.pa.l.a.x = 320; b2.pa.l.a.y = platformlevel[6];
	b2.pa.m.a.x = 370; b2.pa.m.a.y = platformlevel[6];
	b2.pa.r.a.x = 420; b2.pa.r.a.y = platformlevel[6];		b2.pa.plvl = platformlevel[6];

	b2.le.l.a.x = 320; b2.le.l.a.y = platformlevel[4];
	b2.le.m.a.x = 370; b2.le.m.a.y = platformlevel[4];
	b2.le.r.a.x = 420; b2.le.r.a.y = platformlevel[4];		b2.le.plvl = platformlevel[4];

	b2.lb.l.a.x = 320; b2.lb.l.a.y = platformlevel[1];
	b2.lb.m.a.x = 370; b2.lb.m.a.y = platformlevel[1];
	b2.lb.r.a.x = 420; b2.lb.r.a.y = platformlevel[1];		b2.lb.plvl = platformlevel[1];


	//Burger 3(a)
	b3.ub.l.a.x = 528; b3.ub.l.a.y = platformlevel[8];
	b3.ub.m.a.x = 578; b3.ub.m.a.y = platformlevel[8];
	b3.ub.r.a.x = 628; b3.ub.r.a.y = platformlevel[8];		b3.ub.plvl = platformlevel[8];

	b3.pa.l.a.x = 528; b3.pa.l.a.y = platformlevel[5];
	b3.pa.m.a.x = 578; b3.pa.m.a.y = platformlevel[5];
	b3.pa.r.a.x = 628; b3.pa.r.a.y = platformlevel[5];		b3.pa.plvl = platformlevel[5];

	b3.le.l.a.x = 528; b3.le.l.a.y = platformlevel[3];
	b3.le.m.a.x = 578; b3.le.m.a.y = platformlevel[3];
	b3.le.r.a.x = 628; b3.le.r.a.y = platformlevel[3];		b3.le.plvl = platformlevel[3];

	b3.lb.l.a.x = 528; b3.lb.l.a.y = platformlevel[1];
	b3.lb.m.a.x = 578; b3.lb.m.a.y = platformlevel[1];
	b3.lb.r.a.x = 628; b3.lb.r.a.y = platformlevel[1];		b3.lb.plvl = platformlevel[1];

	//Burger 4(a)
	b4.ub.l.a.x = 736; b4.ub.l.a.y = platformlevel[8];
	b4.ub.m.a.x = 786; b4.ub.m.a.y = platformlevel[8];
	b4.ub.r.a.x = 836; b4.ub.r.a.y = platformlevel[8];		b4.ub.plvl = platformlevel[8];

	b4.pa.l.a.x = 736; b4.pa.l.a.y = platformlevel[6];
	b4.pa.m.a.x = 786; b4.pa.m.a.y = platformlevel[6];
	b4.pa.r.a.x = 836; b4.pa.r.a.y = platformlevel[6];		b4.pa.plvl = platformlevel[6];

	b4.le.l.a.x = 736; b4.le.l.a.y = platformlevel[5];
	b4.le.m.a.x = 786; b4.le.m.a.y = platformlevel[5];
	b4.le.r.a.x = 836; b4.le.r.a.y = platformlevel[5];		b4.le.plvl = platformlevel[5];

	b4.lb.l.a.x = 736; b4.lb.l.a.y = platformlevel[3];
	b4.lb.m.a.x = 786; b4.lb.m.a.y = platformlevel[3];
	b4.lb.r.a.x = 836; b4.lb.r.a.y = platformlevel[3];		b4.lb.plvl = platformlevel[3];
}

void burgerdetailsposition(){

	//Burger 1(b)
	b1.ub.l.b.x = b1.ub.l.a.x + 50; b1.ub.l.b.y = b1.ub.l.a.y;
	b1.ub.m.b.x = b1.ub.m.a.x + 50; b1.ub.m.b.y = b1.ub.m.a.y;
	b1.ub.r.b.x = b1.ub.r.a.x + 50; b1.ub.r.b.y = b1.ub.r.a.y;

	b1.pa.l.b.x = b1.pa.l.a.x + 50; b1.pa.l.b.y = b1.pa.l.a.y;
	b1.pa.m.b.x = b1.pa.m.a.x + 50; b1.pa.m.b.y = b1.pa.m.a.y;
	b1.pa.r.b.x = b1.pa.r.a.x + 50; b1.pa.r.b.y = b1.pa.r.a.y;

	b1.le.l.b.x = b1.le.l.a.x + 50; b1.le.l.b.y = b1.le.l.a.y;
	b1.le.m.b.x = b1.le.m.a.x + 50; b1.le.m.b.y = b1.le.m.a.y;
	b1.le.r.b.x = b1.le.r.a.x + 50; b1.le.r.b.y = b1.le.r.a.y;

	b1.lb.l.b.x = b1.lb.l.a.x + 50; b1.lb.l.b.y = b1.lb.l.a.y;
	b1.lb.m.b.x = b1.lb.m.a.x + 50; b1.lb.m.b.y = b1.lb.m.a.y;
	b1.lb.r.b.x = b1.lb.r.a.x + 50; b1.lb.r.b.y = b1.lb.r.a.y;

	//Burger 1(c)
	b1.ub.l.c.x = b1.ub.l.a.x + 50; b1.ub.l.c.y = b1.ub.l.a.y+30;
	b1.ub.m.c.x = b1.ub.m.a.x + 50; b1.ub.m.c.y = b1.ub.m.a.y+30;
	b1.ub.r.c.x = b1.ub.r.a.x + 50; b1.ub.r.c.y = b1.ub.r.a.y+30;

	b1.pa.l.c.x = b1.pa.l.a.x + 50; b1.pa.l.c.y = b1.pa.l.a.y+30;
	b1.pa.m.c.x = b1.pa.m.a.x + 50; b1.pa.m.c.y = b1.pa.m.a.y+30;
	b1.pa.r.c.x = b1.pa.r.a.x + 50; b1.pa.r.c.y = b1.pa.r.a.y+30;

	b1.le.l.c.x = b1.le.l.a.x + 50; b1.le.l.c.y = b1.le.l.a.y+30;
	b1.le.m.c.x = b1.le.m.a.x + 50; b1.le.m.c.y = b1.le.m.a.y+30;
	b1.le.r.c.x = b1.le.r.a.x + 50; b1.le.r.c.y = b1.le.r.a.y+30;

	b1.lb.l.c.x = b1.lb.l.a.x + 50; b1.lb.l.c.y = b1.lb.l.a.y+30;
	b1.lb.m.c.x = b1.lb.m.a.x + 50; b1.lb.m.c.y = b1.lb.m.a.y+30;
	b1.lb.r.c.x = b1.lb.r.a.x + 50; b1.lb.r.c.y = b1.lb.r.a.y+30;

	//Burger 1(d)
	b1.ub.l.d.x = b1.ub.l.a.x; b1.ub.l.d.y = b1.ub.l.a.y + 30;
	b1.ub.m.d.x = b1.ub.m.a.x; b1.ub.m.d.y = b1.ub.m.a.y + 30;
	b1.ub.r.d.x = b1.ub.r.a.x; b1.ub.r.d.y = b1.ub.r.a.y + 30;

	b1.pa.l.d.x = b1.pa.l.a.x; b1.pa.l.d.y = b1.pa.l.a.y + 30;
	b1.pa.m.d.x = b1.pa.m.a.x; b1.pa.m.d.y = b1.pa.m.a.y + 30;
	b1.pa.r.d.x = b1.pa.r.a.x; b1.pa.r.d.y = b1.pa.r.a.y + 30;

	b1.le.l.d.x = b1.le.l.a.x; b1.le.l.d.y = b1.le.l.a.y + 30;
	b1.le.m.d.x = b1.le.m.a.x; b1.le.m.d.y = b1.le.m.a.y + 30;
	b1.le.r.d.x = b1.le.r.a.x; b1.le.r.d.y = b1.le.r.a.y + 30;

	b1.lb.l.d.x = b1.lb.l.a.x; b1.lb.l.d.y = b1.lb.l.a.y + 30;
	b1.lb.m.d.x = b1.lb.m.a.x; b1.lb.m.d.y = b1.lb.m.a.y + 30;
	b1.lb.r.d.x = b1.lb.r.a.x; b1.lb.r.d.y = b1.lb.r.a.y + 30;





	//Burger 2(b)
	b2.ub.l.b.x = b2.ub.l.a.x + 50; b2.ub.l.b.y = b2.ub.l.a.y;
	b2.ub.m.b.x = b2.ub.m.a.x + 50; b2.ub.m.b.y = b2.ub.m.a.y;
	b2.ub.r.b.x = b2.ub.r.a.x + 50; b2.ub.r.b.y = b2.ub.r.a.y;

	b2.pa.l.b.x = b2.pa.l.a.x + 50; b2.pa.l.b.y = b2.pa.l.a.y;
	b2.pa.m.b.x = b2.pa.m.a.x + 50; b2.pa.m.b.y = b2.pa.m.a.y;
	b2.pa.r.b.x = b2.pa.r.a.x + 50; b2.pa.r.b.y = b2.pa.r.a.y;

	b2.le.l.b.x = b2.le.l.a.x + 50; b2.le.l.b.y = b2.le.l.a.y;
	b2.le.m.b.x = b2.le.m.a.x + 50; b2.le.m.b.y = b2.le.m.a.y;
	b2.le.r.b.x = b2.le.r.a.x + 50; b2.le.r.b.y = b2.le.r.a.y;

	b2.lb.l.b.x = b2.lb.l.a.x + 50; b2.lb.l.b.y = b2.lb.l.a.y;
	b2.lb.m.b.x = b2.lb.m.a.x + 50; b2.lb.m.b.y = b2.lb.m.a.y;
	b2.lb.r.b.x = b2.lb.r.a.x + 50; b2.lb.r.b.y = b2.lb.r.a.y;

	//Burger 2(c)
	b2.ub.l.c.x = b2.ub.l.a.x + 50; b2.ub.l.c.y = b2.ub.l.a.y + 30;
	b2.ub.m.c.x = b2.ub.m.a.x + 50; b2.ub.m.c.y = b2.ub.m.a.y + 30;
	b2.ub.r.c.x = b2.ub.r.a.x + 50; b2.ub.r.c.y = b2.ub.r.a.y + 30;

	b2.pa.l.c.x = b2.pa.l.a.x + 50; b2.pa.l.c.y = b2.pa.l.a.y + 30;
	b2.pa.m.c.x = b2.pa.m.a.x + 50; b2.pa.m.c.y = b2.pa.m.a.y + 30;
	b2.pa.r.c.x = b2.pa.r.a.x + 50; b2.pa.r.c.y = b2.pa.r.a.y + 30;

	b2.le.l.c.x = b2.le.l.a.x + 50; b2.le.l.c.y = b2.le.l.a.y + 30;
	b2.le.m.c.x = b2.le.m.a.x + 50; b2.le.m.c.y = b2.le.m.a.y + 30;
	b2.le.r.c.x = b2.le.r.a.x + 50; b2.le.r.c.y = b2.le.r.a.y + 30;

	b2.lb.l.c.x = b2.lb.l.a.x + 50; b2.lb.l.c.y = b2.lb.l.a.y + 30;
	b2.lb.m.c.x = b2.lb.m.a.x + 50; b2.lb.m.c.y = b2.lb.m.a.y + 30;
	b2.lb.r.c.x = b2.lb.r.a.x + 50; b2.lb.r.c.y = b2.lb.r.a.y + 30;

	//Burger 2(d)
	b2.ub.l.d.x = b2.ub.l.a.x; b2.ub.l.d.y = b2.ub.l.a.y + 30;
	b2.ub.m.d.x = b2.ub.m.a.x; b2.ub.m.d.y = b2.ub.m.a.y + 30;
	b1.ub.r.d.x = b2.ub.r.a.x; b2.ub.r.d.y = b2.ub.r.a.y + 30;

	b2.pa.l.d.x = b2.pa.l.a.x; b2.pa.l.d.y = b2.pa.l.a.y + 30;
	b2.pa.m.d.x = b2.pa.m.a.x; b2.pa.m.d.y = b2.pa.m.a.y + 30;
	b2.pa.r.d.x = b2.pa.r.a.x; b2.pa.r.d.y = b2.pa.r.a.y + 30;

	b2.le.l.d.x = b2.le.l.a.x; b2.le.l.d.y = b2.le.l.a.y + 30;
	b2.le.m.d.x = b2.le.m.a.x; b2.le.m.d.y = b2.le.m.a.y + 30;
	b2.le.r.d.x = b2.le.r.a.x; b2.le.r.d.y = b2.le.r.a.y + 30;

	b2.lb.l.d.x = b2.lb.l.a.x; b2.lb.l.d.y = b2.lb.l.a.y + 30;
	b2.lb.m.d.x = b2.lb.m.a.x; b2.lb.m.d.y = b2.lb.m.a.y + 30;
	b2.lb.r.d.x = b2.lb.r.a.x; b2.lb.r.d.y = b2.lb.r.a.y + 30;




	//Burger 3(b)
	b3.ub.l.b.x = b3.ub.l.a.x + 50; b3.ub.l.b.y = b3.ub.l.a.y;
	b3.ub.m.b.x = b3.ub.m.a.x + 50; b3.ub.m.b.y = b3.ub.m.a.y;
	b3.ub.r.b.x = b3.ub.r.a.x + 50; b3.ub.r.b.y = b3.ub.r.a.y;

	b3.pa.l.b.x = b3.pa.l.a.x + 50; b3.pa.l.b.y = b3.pa.l.a.y;
	b3.pa.m.b.x = b3.pa.m.a.x + 50; b3.pa.m.b.y = b3.pa.m.a.y;
	b3.pa.r.b.x = b3.pa.r.a.x + 50; b3.pa.r.b.y = b3.pa.r.a.y;

	b3.le.l.b.x = b3.le.l.a.x + 50; b3.le.l.b.y = b3.le.l.a.y;
	b3.le.m.b.x = b3.le.m.a.x + 50; b3.le.m.b.y = b3.le.m.a.y;
	b3.le.r.b.x = b3.le.r.a.x + 50; b3.le.r.b.y = b3.le.r.a.y;

	b3.lb.l.b.x = b3.lb.l.a.x + 50; b3.lb.l.b.y = b3.lb.l.a.y;
	b3.lb.m.b.x = b3.lb.m.a.x + 50; b3.lb.m.b.y = b3.lb.m.a.y;
	b3.lb.r.b.x = b3.lb.r.a.x + 50; b3.lb.r.b.y = b3.lb.r.a.y;

	//Burger 3(c)
	b3.ub.l.c.x = b3.ub.l.a.x + 50; b3.ub.l.c.y = b3.ub.l.a.y + 30;
	b3.ub.m.c.x = b3.ub.m.a.x + 50; b3.ub.m.c.y = b3.ub.m.a.y + 30;
	b3.ub.r.c.x = b3.ub.r.a.x + 50; b3.ub.r.c.y = b3.ub.r.a.y + 30;

	b3.pa.l.c.x = b3.pa.l.a.x + 50; b3.pa.l.c.y = b3.pa.l.a.y + 30;
	b3.pa.m.c.x = b3.pa.m.a.x + 50; b3.pa.m.c.y = b3.pa.m.a.y + 30;
	b3.pa.r.c.x = b3.pa.r.a.x + 50; b3.pa.r.c.y = b3.pa.r.a.y + 30;

	b3.le.l.c.x = b3.le.l.a.x + 50; b3.le.l.c.y = b3.le.l.a.y + 30;
	b3.le.m.c.x = b3.le.m.a.x + 50; b3.le.m.c.y = b3.le.m.a.y + 30;
	b3.le.r.c.x = b3.le.r.a.x + 50; b3.le.r.c.y = b3.le.r.a.y + 30;

	b3.lb.l.c.x = b3.lb.l.a.x + 50; b3.lb.l.c.y = b3.lb.l.a.y + 30;
	b3.lb.m.c.x = b3.lb.m.a.x + 50; b3.lb.m.c.y = b3.lb.m.a.y + 30;
	b3.lb.r.c.x = b3.lb.r.a.x + 50; b3.lb.r.c.y = b3.lb.r.a.y + 30;

	//Burger 3(d)
	b3.ub.l.d.x = b3.ub.l.a.x; b3.ub.l.d.y = b3.ub.l.a.y + 30;
	b3.ub.m.d.x = b3.ub.m.a.x; b3.ub.m.d.y = b3.ub.m.a.y + 30;
	b1.ub.r.d.x = b3.ub.r.a.x; b3.ub.r.d.y = b3.ub.r.a.y + 30;

	b3.pa.l.d.x = b3.pa.l.a.x; b3.pa.l.d.y = b3.pa.l.a.y + 30;
	b3.pa.m.d.x = b3.pa.m.a.x; b3.pa.m.d.y = b3.pa.m.a.y + 30;
	b3.pa.r.d.x = b3.pa.r.a.x; b3.pa.r.d.y = b3.pa.r.a.y + 30;

	b3.le.l.d.x = b3.le.l.a.x; b3.le.l.d.y = b3.le.l.a.y + 30;
	b3.le.m.d.x = b3.le.m.a.x; b3.le.m.d.y = b3.le.m.a.y + 30;
	b3.le.r.d.x = b3.le.r.a.x; b3.le.r.d.y = b3.le.r.a.y + 30;

	b3.lb.l.d.x = b3.lb.l.a.x; b3.lb.l.d.y = b3.lb.l.a.y + 30;
	b3.lb.m.d.x = b3.lb.m.a.x; b3.lb.m.d.y = b3.lb.m.a.y + 30;
	b3.lb.r.d.x = b3.lb.r.a.x; b3.lb.r.d.y = b3.lb.r.a.y + 30;






	//Burger 4(b)
	b4.ub.l.b.x = b4.ub.l.a.x + 50; b4.ub.l.b.y = b4.ub.l.a.y;
	b4.ub.m.b.x = b4.ub.m.a.x + 50; b4.ub.m.b.y = b4.ub.m.a.y;
	b4.ub.r.b.x = b4.ub.r.a.x + 50; b4.ub.r.b.y = b4.ub.r.a.y;

	b4.pa.l.b.x = b4.pa.l.a.x + 50; b4.pa.l.b.y = b4.pa.l.a.y;
	b4.pa.m.b.x = b4.pa.m.a.x + 50; b4.pa.m.b.y = b4.pa.m.a.y;
	b4.pa.r.b.x = b4.pa.r.a.x + 50; b4.pa.r.b.y = b4.pa.r.a.y;

	b4.le.l.b.x = b4.le.l.a.x + 50; b4.le.l.b.y = b4.le.l.a.y;
	b4.le.m.b.x = b4.le.m.a.x + 50; b4.le.m.b.y = b4.le.m.a.y;
	b4.le.r.b.x = b4.le.r.a.x + 50; b4.le.r.b.y = b4.le.r.a.y;

	b4.lb.l.b.x = b4.lb.l.a.x + 50; b4.lb.l.b.y = b4.lb.l.a.y;
	b4.lb.m.b.x = b4.lb.m.a.x + 50; b4.lb.m.b.y = b4.lb.m.a.y;
	b4.lb.r.b.x = b4.lb.r.a.x + 50; b4.lb.r.b.y = b4.lb.r.a.y;

	//Burger 4(c)
	b4.ub.l.c.x = b4.ub.l.a.x + 50; b4.ub.l.c.y = b4.ub.l.a.y + 30;
	b4.ub.m.c.x = b4.ub.m.a.x + 50; b4.ub.m.c.y = b4.ub.m.a.y + 30;
	b4.ub.r.c.x = b4.ub.r.a.x + 50; b4.ub.r.c.y = b4.ub.r.a.y + 30;

	b4.pa.l.c.x = b4.pa.l.a.x + 50; b4.pa.l.c.y = b4.pa.l.a.y + 30;
	b4.pa.m.c.x = b4.pa.m.a.x + 50; b4.pa.m.c.y = b4.pa.m.a.y + 30;
	b4.pa.r.c.x = b4.pa.r.a.x + 50; b4.pa.r.c.y = b4.pa.r.a.y + 30;

	b4.le.l.c.x = b4.le.l.a.x + 50; b4.le.l.c.y = b4.le.l.a.y + 30;
	b4.le.m.c.x = b4.le.m.a.x + 50; b4.le.m.c.y = b4.le.m.a.y + 30;
	b4.le.r.c.x = b4.le.r.a.x + 50; b4.le.r.c.y = b4.le.r.a.y + 30;

	b4.lb.l.c.x = b4.lb.l.a.x + 50; b4.lb.l.c.y = b4.lb.l.a.y + 30;
	b4.lb.m.c.x = b4.lb.m.a.x + 50; b4.lb.m.c.y = b4.lb.m.a.y + 30;
	b4.lb.r.c.x = b4.lb.r.a.x + 50; b4.lb.r.c.y = b4.lb.r.a.y + 30;

	//Burger 4(d)
	b4.ub.l.d.x = b4.ub.l.a.x; b4.ub.l.d.y = b4.ub.l.a.y + 30;
	b4.ub.m.d.x = b4.ub.m.a.x; b4.ub.m.d.y = b4.ub.m.a.y + 30;
	b1.ub.r.d.x = b4.ub.r.a.x; b4.ub.r.d.y = b4.ub.r.a.y + 30;

	b4.pa.l.d.x = b4.pa.l.a.x; b4.pa.l.d.y = b4.pa.l.a.y + 30;
	b4.pa.m.d.x = b4.pa.m.a.x; b4.pa.m.d.y = b4.pa.m.a.y + 30;
	b4.pa.r.d.x = b4.pa.r.a.x; b4.pa.r.d.y = b4.pa.r.a.y + 30;

	b4.le.l.d.x = b4.le.l.a.x; b4.le.l.d.y = b4.le.l.a.y + 30;
	b4.le.m.d.x = b4.le.m.a.x; b4.le.m.d.y = b4.le.m.a.y + 30;
	b4.le.r.d.x = b4.le.r.a.x; b4.le.r.d.y = b4.le.r.a.y + 30;

	b4.lb.l.d.x = b4.lb.l.a.x; b4.lb.l.d.y = b4.lb.l.a.y + 30;
	b4.lb.m.d.x = b4.lb.m.a.x; b4.lb.m.d.y = b4.lb.m.a.y + 30;
	b4.lb.r.d.x = b4.lb.r.a.x; b4.lb.r.d.y = b4.lb.r.a.y + 30;
}

void burgerreposition()
{																			   ////////////////
																			   //  Burger 1  //
																			   ////////////////

	//UpperBun At lvl 8
	if (b1.ub.plvl == platformlevel[8]){
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.l.a.x + 25 && charposx + 20 <= b1.ub.l.a.x + 25 + 4)
		{
			if (b1.ub.l.a.y == platformlevel[8])
			{
				b1.ub.l.a.y -= 43;
			}
		}
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.m.a.x + 25 && charposx + 20 <= b1.ub.m.a.x + 25 + 4)
		{
			if (b1.ub.m.a.y == platformlevel[8])
			{
				b1.ub.m.a.y -= 43;
			}
		}

		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.r.a.x + 25 && charposx + 20 <= b1.ub.r.a.x + 25 + 4)
		{
			if (b1.ub.r.a.y == platformlevel[8])
			{
				b1.ub.r.a.y -= 43;
			}
		}
		if (b1.ub.m.a.y == platformlevel[8] - 43 && b1.ub.m.a.y == b1.ub.l.a.y&&b1.ub.l.a.y == b1.ub.r.a.y)
		{
			b1ubjump(8, 6);
		}
	}
	//UpperBun At lvl 6
	if (b1.ub.plvl == platformlevel[6]){
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.l.a.x + 25 && charposx + 20 <= b1.ub.l.a.x + 25 + 4)
		{
			if (b1.ub.l.a.y == platformlevel[6])
			{
				b1.ub.l.a.y -= 43;
			}
		}
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.m.a.x + 25 && charposx + 20 <= b1.ub.m.a.x + 25 + 4)
		{
			if (b1.ub.m.a.y == platformlevel[6])
			{
				b1.ub.m.a.y -= 43;
			}
		}

		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.r.a.x + 25 && charposx + 20 <= b1.ub.r.a.x + 25 + 4)
		{
			if (b1.ub.r.a.y == platformlevel[6])
			{
				b1.ub.r.a.y -= 43;
			}
		}
		if (b1.ub.m.a.y == platformlevel[6] - 43 && b1.ub.m.a.y == b1.ub.l.a.y&&b1.ub.l.a.y == b1.ub.r.a.y)
		{
			b1ubjump(6, 4);
		}
	}
	//UpperBun At lvl 4
	if (b1.ub.plvl == platformlevel[4]){
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.l.a.x + 25 && charposx + 20 <= b1.ub.l.a.x + 25 + 4)
		{
			if (b1.ub.l.a.y == platformlevel[4])
			{
				b1.ub.l.a.y -= 43;
			}
		}
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.m.a.x + 25 && charposx + 20 <= b1.ub.m.a.x + 25 + 4)
		{
			if (b1.ub.m.a.y == platformlevel[4])
			{
				b1.ub.m.a.y -= 43;
			}
		}

		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.r.a.x + 25 && charposx + 20 <= b1.ub.r.a.x + 25 + 4)
		{
			if (b1.ub.r.a.y == platformlevel[4])
			{
				b1.ub.r.a.y -= 43;
			}
		}
		if (b1.ub.m.a.y == platformlevel[4] - 43 && b1.ub.m.a.y == b1.ub.l.a.y&&b1.ub.l.a.y == b1.ub.r.a.y)
		{
			b1ubjump(4, 3);
		}
	}
	//UpperBun At lvl 3
	if (b1.ub.plvl == platformlevel[3]){
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.l.a.x + 25 && charposx + 20 <= b1.ub.l.a.x + 25 + 4)
		{
			if (b1.ub.l.a.y == platformlevel[3])
			{
				b1.ub.l.a.y -= 43;
			}
		}
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.m.a.x + 25 && charposx + 20 <= b1.ub.m.a.x + 25 + 4)
		{
			if (b1.ub.m.a.y == platformlevel[3])
			{
				b1.ub.m.a.y -= 43;
			}
		}

		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.r.a.x + 25 && charposx + 20 <= b1.ub.r.a.x + 25 + 4)
		{
			if (b1.ub.r.a.y == platformlevel[3])
			{
				b1.ub.r.a.y -= 43;
			}
		}
		if (b1.ub.m.a.y == platformlevel[3] - 43 && b1.ub.m.a.y == b1.ub.l.a.y&&b1.ub.l.a.y == b1.ub.r.a.y)
		{
			b1ubjump(3, 1);
		}
	}
	//UpperBun At lvl 1
	if (b1.ub.plvl == platformlevel[1]){
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.l.a.x + 25 && charposx + 20 <= b1.ub.l.a.x + 25 + 4)
		{
			if (b1.ub.l.a.y == platformlevel[1])
			{
				b1.ub.l.a.y -= 43;
			}
		}
		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.m.a.x + 25 && charposx + 20 <= b1.ub.m.a.x + 25 + 4)
		{
			if (b1.ub.m.a.y == platformlevel[1])
			{
				b1.ub.m.a.y -= 43;
			}
		}

		if (b1.ub.plvl == charposy&&charposx + 20 >= b1.ub.r.a.x + 25 && charposx + 20 <= b1.ub.r.a.x + 25 + 4)
		{
			if (b1.ub.r.a.y == platformlevel[1])
			{
				b1.ub.r.a.y -= 43;
			}
		}
		if (b1.ub.m.a.y == platformlevel[1] - 43 && b1.ub.m.a.y == b1.ub.l.a.y&&b1.ub.l.a.y == b1.ub.r.a.y)
		{
			b1ubjump(1, 0);
		}
	}
	//Patty At lvl 6
	if (b1.pa.plvl == platformlevel[6]){
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.l.a.x + 25 && charposx + 20 <= b1.pa.l.a.x + 25 + 4)
		{
			if (b1.pa.l.a.y == platformlevel[6])
			{
				b1.pa.l.a.y -= 43;
			}
		}
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.m.a.x + 25 && charposx + 20 <= b1.pa.m.a.x + 25 + 4)
		{
			if (b1.pa.m.a.y == platformlevel[6])
			{
				b1.pa.m.a.y -= 43;
			}
		}

		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.r.a.x + 25 && charposx + 20 <= b1.pa.r.a.x + 25 + 4)
		{
			if (b1.pa.r.a.y == platformlevel[6])
			{
				b1.pa.r.a.y -= 43;
			}
		}
		if (b1.pa.m.a.y == platformlevel[6] - 43 && b1.pa.m.a.y == b1.pa.l.a.y&&b1.pa.l.a.y == b1.pa.r.a.y)
		{
			b1pajump(6, 4);
		}
	}
	//Patty At lvl 4
	if (b1.pa.plvl == platformlevel[4]){
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.l.a.x + 25 && charposx + 20 <= b1.pa.l.a.x + 25 + 4)
		{
			if (b1.pa.l.a.y == platformlevel[4])
			{
				b1.pa.l.a.y -= 43;
			}
		}
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.m.a.x + 25 && charposx + 20 <= b1.pa.m.a.x + 25 + 4)
		{
			if (b1.pa.m.a.y == platformlevel[4])
			{
				b1.pa.m.a.y -= 43;
			}
		}

		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.r.a.x + 25 && charposx + 20 <= b1.pa.r.a.x + 25 + 4)
		{
			if (b1.pa.r.a.y == platformlevel[4])
			{
				b1.pa.r.a.y -= 43;
			}
		}
		if (b1.pa.m.a.y == platformlevel[4] - 43 && b1.pa.m.a.y == b1.pa.l.a.y&&b1.pa.l.a.y == b1.pa.r.a.y)
		{
			b1pajump(4, 3);
		}
	}
	//Patty At lvl 3
	if (b1.pa.plvl == platformlevel[3]){
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.l.a.x + 25 && charposx + 20 <= b1.pa.l.a.x + 25 + 4)
		{
			if (b1.pa.l.a.y == platformlevel[3])
			{
				b1.pa.l.a.y -= 43;
			}
		}
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.m.a.x + 25 && charposx + 20 <= b1.pa.m.a.x + 25 + 4)
		{
			if (b1.pa.m.a.y == platformlevel[3])
			{
				b1.pa.m.a.y -= 43;
			}
		}

		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.r.a.x + 25 && charposx + 20 <= b1.pa.r.a.x + 25 + 4)
		{
			if (b1.pa.r.a.y == platformlevel[3])
			{
				b1.pa.r.a.y -= 43;
			}
		}
		if (b1.pa.m.a.y == platformlevel[3] - 43 && b1.pa.m.a.y == b1.pa.l.a.y&&b1.pa.l.a.y == b1.pa.r.a.y)
		{
			b1pajump(3, 1);
		}
	}
	//Patty At lvl 1
	if (b1.pa.plvl == platformlevel[1]){
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.l.a.x + 25 && charposx + 20 <= b1.pa.l.a.x + 25 + 4)
		{
			if (b1.pa.l.a.y == platformlevel[1])
			{
				b1.pa.l.a.y -= 43;
			}
		}
		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.m.a.x + 25 && charposx + 20 <= b1.pa.m.a.x + 25 + 4)
		{
			if (b1.pa.m.a.y == platformlevel[1])
			{
				b1.pa.m.a.y -= 43;
			}
		}

		if (b1.pa.plvl == charposy&&charposx + 20 >= b1.pa.r.a.x + 25 && charposx + 20 <= b1.pa.r.a.x + 25 + 4)
		{
			if (b1.pa.r.a.y == platformlevel[1])
			{
				b1.pa.r.a.y -= 43;
			}
		}
		if (b1.pa.m.a.y == platformlevel[1] - 43 && b1.pa.m.a.y == b1.pa.l.a.y&&b1.pa.l.a.y == b1.pa.r.a.y)
		{
			b1pajump(1, 0);
		}
	}

	//Lettuce At lvl 4
	if (b1.le.plvl == platformlevel[4]){
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.l.a.x + 25 && charposx + 20 <= b1.le.l.a.x + 25 + 4)
		{
			if (b1.le.l.a.y == platformlevel[4])
			{
				b1.le.l.a.y -= 43;
			}
		}
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.m.a.x + 25 && charposx + 20 <= b1.le.m.a.x + 25 + 4)
		{
			if (b1.le.m.a.y == platformlevel[4])
			{
				b1.le.m.a.y -= 43;
			}
		}

		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.r.a.x + 25 && charposx + 20 <= b1.le.r.a.x + 25 + 4)
		{
			if (b1.le.r.a.y == platformlevel[4])
			{
				b1.le.r.a.y -= 43;
			}
		}
		if (b1.le.m.a.y == platformlevel[4] - 43 && b1.le.m.a.y == b1.le.l.a.y&&b1.le.l.a.y == b1.le.r.a.y)
		{
			b1lejump(4, 3);
		}
	}
	//Lettuce At lvl 3
	if (b1.le.plvl == platformlevel[3]){
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.l.a.x + 25 && charposx + 20 <= b1.le.l.a.x + 25 + 4)
		{
			if (b1.le.l.a.y == platformlevel[3])
			{
				b1.le.l.a.y -= 43;
			}
		}
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.m.a.x + 25 && charposx + 20 <= b1.le.m.a.x + 25 + 4)
		{
			if (b1.le.m.a.y == platformlevel[3])
			{
				b1.le.m.a.y -= 43;
			}
		}

		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.r.a.x + 25 && charposx + 20 <= b1.le.r.a.x + 25 + 4)
		{
			if (b1.le.r.a.y == platformlevel[3])
			{
				b1.le.r.a.y -= 43;
			}
		}
		if (b1.le.m.a.y == platformlevel[3] - 43 && b1.le.m.a.y == b1.le.l.a.y&&b1.le.l.a.y == b1.le.r.a.y)
		{
			b1lejump(3, 1);
		}
	}
	//Lettuce At lvl 1
	if (b1.le.plvl == platformlevel[1]){
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.l.a.x + 25 && charposx + 20 <= b1.le.l.a.x + 25 + 4)
		{
			if (b1.le.l.a.y == platformlevel[1])
			{
				b1.le.l.a.y -= 43;
			}
		}
		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.m.a.x + 25 && charposx + 20 <= b1.le.m.a.x + 25 + 4)
		{
			if (b1.le.m.a.y == platformlevel[1])
			{
				b1.le.m.a.y -= 43;
			}
		}

		if (b1.le.plvl == charposy&&charposx + 20 >= b1.le.r.a.x + 25 && charposx + 20 <= b1.le.r.a.x + 25 + 4)
		{
			if (b1.le.r.a.y == platformlevel[1])
			{
				b1.le.r.a.y -= 43;
			}
		}
		if (b1.le.m.a.y == platformlevel[1] - 43 && b1.le.m.a.y == b1.le.l.a.y&&b1.le.l.a.y == b1.le.r.a.y)
		{
			b1lejump(1, 0);
		}
	}
	//Lower Bun At lvl 3
	if (b1.lb.plvl == platformlevel[3]){
		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.l.a.x + 25 && charposx + 20 <= b1.lb.l.a.x + 25 + 4)
		{
			if (b1.lb.l.a.y == platformlevel[3])
			{
				b1.lb.l.a.y -= 43;
			}
		}
		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.m.a.x + 25 && charposx + 20 <= b1.lb.m.a.x + 25 + 4)
		{
			if (b1.lb.m.a.y == platformlevel[3])
			{
				b1.lb.m.a.y -= 43;
			}
		}

		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.r.a.x + 25 && charposx + 20 <= b1.lb.r.a.x + 25 + 4)
		{
			if (b1.lb.r.a.y == platformlevel[3])
			{
				b1.lb.r.a.y -= 43;
			}
		}
		if (b1.lb.m.a.y == platformlevel[3] - 43 && b1.lb.m.a.y == b1.lb.l.a.y&&b1.lb.l.a.y == b1.lb.r.a.y)
		{
			b1lbjump(3, 1);
		}
	}
	//Lower Bun At lvl 1
	if (b1.lb.plvl == platformlevel[1]){
		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.l.a.x + 25 && charposx + 20 <= b1.lb.l.a.x + 25 + 4)
		{
			if (b1.lb.l.a.y == platformlevel[1])
			{
				b1.lb.l.a.y -= 43;
			}
		}
		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.m.a.x + 25 && charposx + 20 <= b1.lb.m.a.x + 25 + 4)
		{
			if (b1.lb.m.a.y == platformlevel[1])
			{
				b1.lb.m.a.y -= 43;
			}
		}

		if (b1.lb.plvl == charposy&&charposx + 20 >= b1.lb.r.a.x + 25 && charposx + 20 <= b1.lb.r.a.x + 25 + 4)
		{
			if (b1.lb.r.a.y == platformlevel[1])
			{
				b1.lb.r.a.y -= 43;
			}
		}
		if (b1.lb.m.a.y == platformlevel[1] - 43 && b1.lb.m.a.y == b1.lb.l.a.y&&b1.lb.l.a.y == b1.lb.r.a.y)
		{
			b1lbjump(1, 0);
		}
	}



																				////////////////
																				//  Burger 2  //
																				////////////////


	//UpperBun At lvl 7
	if (b2.ub.plvl == platformlevel[7]){
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.l.a.x + 25 && charposx + 20 <= b2.ub.l.a.x + 25 + 4)
		{
			if (b2.ub.l.a.y == platformlevel[7])
			{
				b2.ub.l.a.y -= 43;
			}
		}
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.m.a.x + 25 && charposx + 20 <= b2.ub.m.a.x + 25 + 4)
		{
			if (b2.ub.m.a.y == platformlevel[7])
			{
				b2.ub.m.a.y -= 43;
			}
		}

		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.r.a.x + 25 && charposx + 20 <= b2.ub.r.a.x + 25 + 4)
		{
			if (b2.ub.r.a.y == platformlevel[7])
			{
				b2.ub.r.a.y -= 43;
			}
		}
		if (b2.ub.m.a.y == platformlevel[7] - 43 && b2.ub.m.a.y == b2.ub.l.a.y&&b2.ub.l.a.y == b2.ub.r.a.y)
		{
			b2ubjump(7, 6);
		}
	}
	//UpperBun At lvl 6
	if (b2.ub.plvl == platformlevel[6]){
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.l.a.x + 25 && charposx + 20 <= b2.ub.l.a.x + 25 + 4)
		{
			if (b2.ub.l.a.y == platformlevel[6])
			{
				b2.ub.l.a.y -= 43;
			}
		}
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.m.a.x + 25 && charposx + 20 <= b2.ub.m.a.x + 25 + 4)
		{
			if (b2.ub.m.a.y == platformlevel[6])
			{
				b2.ub.m.a.y -= 43;
			}
		}

		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.r.a.x + 25 && charposx + 20 <= b2.ub.r.a.x + 25 + 4)
		{
			if (b2.ub.r.a.y == platformlevel[6])
			{
				b2.ub.r.a.y -= 43;
			}
		}
		if (b2.ub.m.a.y == platformlevel[6] - 43 && b2.ub.m.a.y == b2.ub.l.a.y&&b2.ub.l.a.y == b2.ub.r.a.y)
		{
			b2ubjump(6, 4);
		}
	}
	//UpperBun At lvl 4
	if (b2.ub.plvl == platformlevel[4]){
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.l.a.x + 25 && charposx + 20 <= b2.ub.l.a.x + 25 + 4)
		{
			if (b2.ub.l.a.y == platformlevel[4])
			{
				b2.ub.l.a.y -= 43;
			}
		}
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.m.a.x + 25 && charposx + 20 <= b2.ub.m.a.x + 25 + 4)
		{
			if (b2.ub.m.a.y == platformlevel[4])
			{
				b2.ub.m.a.y -= 43;
			}
		}

		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.r.a.x + 25 && charposx + 20 <= b2.ub.r.a.x + 25 + 4)
		{
			if (b2.ub.r.a.y == platformlevel[4])
			{
				b2.ub.r.a.y -= 43;
			}
		}
		if (b2.ub.m.a.y == platformlevel[4] - 43 && b2.ub.m.a.y == b2.ub.l.a.y&&b2.ub.l.a.y == b2.ub.r.a.y)
		{
			b2ubjump(4, 2);
		}
	}
	//UpperBun At lvl 2
	if (b2.ub.plvl == platformlevel[2]){
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.l.a.x + 25 && charposx + 20 <= b2.ub.l.a.x + 25 + 4)
		{
			if (b2.ub.l.a.y == platformlevel[2])
			{
				b2.ub.l.a.y -= 43;
			}
		}
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.m.a.x + 25 && charposx + 20 <= b2.ub.m.a.x + 25 + 4)
		{
			if (b2.ub.m.a.y == platformlevel[2])
			{
				b2.ub.m.a.y -= 43;
			}
		}

		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.r.a.x + 25 && charposx + 20 <= b2.ub.r.a.x + 25 + 4)
		{
			if (b2.ub.r.a.y == platformlevel[2])
			{
				b2.ub.r.a.y -= 43;
			}
		}
		if (b2.ub.m.a.y == platformlevel[2] - 43 && b2.ub.m.a.y == b2.ub.l.a.y&&b2.ub.l.a.y == b2.ub.r.a.y)
		{
			b2ubjump(2, 1);
		}
	}
	//UpperBun At lvl 1
	if (b2.ub.plvl == platformlevel[1]){
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.l.a.x + 25 && charposx + 20 <= b2.ub.l.a.x + 25 + 4)
		{
			if (b2.ub.l.a.y == platformlevel[1])
			{
				b2.ub.l.a.y -= 43;
			}
		}
		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.m.a.x + 25 && charposx + 20 <= b2.ub.m.a.x + 25 + 4)
		{
			if (b2.ub.m.a.y == platformlevel[1])
			{
				b2.ub.m.a.y -= 43;
			}
		}

		if (b2.ub.plvl == charposy&&charposx + 20 >= b2.ub.r.a.x + 25 && charposx + 20 <= b2.ub.r.a.x + 25 + 4)
		{
			if (b2.ub.r.a.y == platformlevel[1])
			{
				b2.ub.r.a.y -= 43;
			}
		}
		if (b2.ub.m.a.y == platformlevel[1] - 43 && b2.ub.m.a.y == b2.ub.l.a.y&&b2.ub.l.a.y == b2.ub.r.a.y)
		{
			b2ubjump(1, 0);
		}
	}
	//Patty At lvl 6
	if (b2.pa.plvl == platformlevel[6]){
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.l.a.x + 25 && charposx + 20 <= b2.pa.l.a.x + 25 + 4)
		{
			if (b2.pa.l.a.y == platformlevel[6])
			{
				b2.pa.l.a.y -= 43;
			}
		}
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.m.a.x + 25 && charposx + 20 <= b2.pa.m.a.x + 25 + 4)
		{
			if (b2.pa.m.a.y == platformlevel[6])
			{
				b2.pa.m.a.y -= 43;
			}
		}

		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.r.a.x + 25 && charposx + 20 <= b2.pa.r.a.x + 25 + 4)
		{
			if (b2.pa.r.a.y == platformlevel[6])
			{
				b2.pa.r.a.y -= 43;
			}
		}
		if (b2.pa.m.a.y == platformlevel[6] - 43 && b2.pa.m.a.y == b2.pa.l.a.y&&b2.pa.l.a.y == b2.pa.r.a.y)
		{
			b2pajump(6, 4);
		}
	}
	//Patty At lvl 4
	if (b2.pa.plvl == platformlevel[4]){
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.l.a.x + 25 && charposx + 20 <= b2.pa.l.a.x + 25 + 4)
		{
			if (b2.pa.l.a.y == platformlevel[4])
			{
				b2.pa.l.a.y -= 43;
			}
		}
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.m.a.x + 25 && charposx + 20 <= b2.pa.m.a.x + 25 + 4)
		{
			if (b2.pa.m.a.y == platformlevel[4])
			{
				b2.pa.m.a.y -= 43;
			}
		}

		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.r.a.x + 25 && charposx + 20 <= b2.pa.r.a.x + 25 + 4)
		{
			if (b2.pa.r.a.y == platformlevel[4])
			{
				b2.pa.r.a.y -= 43;
			}
		}
		if (b2.pa.m.a.y == platformlevel[4] - 43 && b2.pa.m.a.y == b2.pa.l.a.y&&b2.pa.l.a.y == b2.pa.r.a.y)
		{
			b2pajump(4, 2);
		}
	}
	//Patty At lvl 2
	if (b2.pa.plvl == platformlevel[2]){
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.l.a.x + 25 && charposx + 20 <= b2.pa.l.a.x + 25 + 4)
		{
			if (b2.pa.l.a.y == platformlevel[2])
			{
				b2.pa.l.a.y -= 43;
			}
		}
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.m.a.x + 25 && charposx + 20 <= b2.pa.m.a.x + 25 + 4)
		{
			if (b2.pa.m.a.y == platformlevel[2])
			{
				b2.pa.m.a.y -= 43;
			}
		}

		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.r.a.x + 25 && charposx + 20 <= b2.pa.r.a.x + 25 + 4)
		{
			if (b2.pa.r.a.y == platformlevel[2])
			{
				b2.pa.r.a.y -= 43;
			}
		}
		if (b2.pa.m.a.y == platformlevel[2] - 43 && b2.pa.m.a.y == b2.pa.l.a.y&&b2.pa.l.a.y == b2.pa.r.a.y)
		{
			b2pajump(2, 1);
		}
	}
	//Patty At lvl 1
	if (b2.pa.plvl == platformlevel[1]){
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.l.a.x + 25 && charposx + 20 <= b2.pa.l.a.x + 25 + 4)
		{
			if (b2.pa.l.a.y == platformlevel[1])
			{
				b2.pa.l.a.y -= 43;
			}
		}
		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.m.a.x + 25 && charposx + 20 <= b2.pa.m.a.x + 25 + 4)
		{
			if (b2.pa.m.a.y == platformlevel[1])
			{
				b2.pa.m.a.y -= 43;
			}
		}

		if (b2.pa.plvl == charposy&&charposx + 20 >= b2.pa.r.a.x + 25 && charposx + 20 <= b2.pa.r.a.x + 25 + 4)
		{
			if (b2.pa.r.a.y == platformlevel[1])
			{
				b2.pa.r.a.y -= 43;
			}
		}
		if (b2.pa.m.a.y == platformlevel[1] - 43 && b2.pa.m.a.y == b2.pa.l.a.y&&b2.pa.l.a.y == b2.pa.r.a.y)
		{
			b2pajump(1, 0);
		}
	}

	//Lettuce At lvl 4
	if (b2.le.plvl == platformlevel[4]){
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.l.a.x + 25 && charposx + 20 <= b2.le.l.a.x + 25 + 4)
		{
			if (b2.le.l.a.y == platformlevel[4])
			{
				b2.le.l.a.y -= 43;
			}
		}
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.m.a.x + 25 && charposx + 20 <= b2.le.m.a.x + 25 + 4)
		{
			if (b2.le.m.a.y == platformlevel[4])
			{
				b2.le.m.a.y -= 43;
			}
		}

		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.r.a.x + 25 && charposx + 20 <= b2.le.r.a.x + 25 + 4)
		{
			if (b2.le.r.a.y == platformlevel[4])
			{
				b2.le.r.a.y -= 43;
			}
		}
		if (b2.le.m.a.y == platformlevel[4] - 43 && b2.le.m.a.y == b2.le.l.a.y&&b2.le.l.a.y == b2.le.r.a.y)
		{
			b2lejump(4, 2);
		}
	}
	//Lettuce At lvl 2
	if (b2.le.plvl == platformlevel[2]){
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.l.a.x + 25 && charposx + 20 <= b2.le.l.a.x + 25 + 4)
		{
			if (b2.le.l.a.y == platformlevel[2])
			{
				b2.le.l.a.y -= 43;
			}
		}
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.m.a.x + 25 && charposx + 20 <= b2.le.m.a.x + 25 + 4)
		{
			if (b2.le.m.a.y == platformlevel[2])
			{
				b2.le.m.a.y -= 43;
			}
		}

		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.r.a.x + 25 && charposx + 20 <= b2.le.r.a.x + 25 + 4)
		{
			if (b2.le.r.a.y == platformlevel[2])
			{
				b2.le.r.a.y -= 43;
			}
		}
		if (b2.le.m.a.y == platformlevel[2] - 43 && b2.le.m.a.y == b2.le.l.a.y&&b2.le.l.a.y == b2.le.r.a.y)
		{
			b2lejump(2, 1);
		}
	}
	//Lettuce At lvl 1
	if (b2.le.plvl == platformlevel[1]){
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.l.a.x + 25 && charposx + 20 <= b2.le.l.a.x + 25 + 4)
		{
			if (b2.le.l.a.y == platformlevel[1])
			{
				b2.le.l.a.y -= 43;
			}
		}
		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.m.a.x + 25 && charposx + 20 <= b2.le.m.a.x + 25 + 4)
		{
			if (b2.le.m.a.y == platformlevel[1])
			{
				b2.le.m.a.y -= 43;
			}
		}

		if (b2.le.plvl == charposy&&charposx + 20 >= b2.le.r.a.x + 25 && charposx + 20 <= b2.le.r.a.x + 25 + 4)
		{
			if (b2.le.r.a.y == platformlevel[1])
			{
				b2.le.r.a.y -= 43;
			}
		}
		if (b2.le.m.a.y == platformlevel[1] - 43 && b2.le.m.a.y == b2.le.l.a.y&&b2.le.l.a.y == b2.le.r.a.y)
		{
			b2lejump(1, 0);
		}
	}

	//Lower Bun At lvl 1
	if (b2.lb.plvl == platformlevel[1]){
		if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.l.a.x + 25 && charposx + 20 <= b2.lb.l.a.x + 25 + 4)
		{
			if (b2.lb.l.a.y == platformlevel[1])
			{
				b2.lb.l.a.y -= 43;
			}
		}
		if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.m.a.x + 25 && charposx + 20 <= b2.lb.m.a.x + 25 + 4)
		{
			if (b2.lb.m.a.y == platformlevel[1])
			{
				b2.lb.m.a.y -= 43;
			}
		}

		if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.r.a.x + 25 && charposx + 20 <= b2.lb.r.a.x + 25 + 4)
		{
			if (b2.lb.r.a.y == platformlevel[1])
			{
				b2.lb.r.a.y -= 43;
			}
		}
		if (b2.lb.m.a.y == platformlevel[1] - 43 && b2.lb.m.a.y == b2.lb.l.a.y&&b2.lb.l.a.y == b2.lb.r.a.y)
		{
			b2lbjump(1, 0);
		}
	}







																				////////////////
																				//  Burger 3  //
																				////////////////


	//UpperBun At lvl 7
	if (b3.ub.plvl == platformlevel[8]){
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.l.a.x + 25 && charposx + 20 <= b3.ub.l.a.x + 25 + 4)
		{
			if (b3.ub.l.a.y == platformlevel[8])
			{
				b3.ub.l.a.y -= 43;
			}
		}
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.m.a.x + 25 && charposx + 20 <= b3.ub.m.a.x + 25 + 4)
		{
			if (b3.ub.m.a.y == platformlevel[8])
			{
				b3.ub.m.a.y -= 43;
			}
		}

		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.r.a.x + 25 && charposx + 20 <= b3.ub.r.a.x + 25 + 4)
		{
			if (b3.ub.r.a.y == platformlevel[8])
			{
				b3.ub.r.a.y -= 43;
			}
		}
		if (b3.ub.m.a.y == platformlevel[8] - 43 && b3.ub.m.a.y == b3.ub.l.a.y&&b3.ub.l.a.y == b3.ub.r.a.y)
		{
			b3ubjump(8, 7);
		}
	}
	//UpperBun At lvl 7
	if (b3.ub.plvl == platformlevel[7]){
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.l.a.x + 25 && charposx + 20 <= b3.ub.l.a.x + 25 + 4)
		{
			if (b3.ub.l.a.y == platformlevel[7])
			{
				b3.ub.l.a.y -= 43;
			}
		}
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.m.a.x + 25 && charposx + 20 <= b3.ub.m.a.x + 25 + 4)
		{
			if (b3.ub.m.a.y == platformlevel[7])
			{
				b3.ub.m.a.y -= 43;
			}
		}

		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.r.a.x + 25 && charposx + 20 <= b3.ub.r.a.x + 25 + 4)
		{
			if (b3.ub.r.a.y == platformlevel[7])
			{
				b3.ub.r.a.y -= 43;
			}
		}
		if (b3.ub.m.a.y == platformlevel[7] - 43 && b3.ub.m.a.y == b3.ub.l.a.y&&b3.ub.l.a.y == b3.ub.r.a.y)
		{
			b3ubjump(7, 5);
		}
	}
	//UpperBun At lvl 5
	if (b3.ub.plvl == platformlevel[5]){
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.l.a.x + 25 && charposx + 20 <= b3.ub.l.a.x + 25 + 4)
		{
			if (b3.ub.l.a.y == platformlevel[5])
			{
				b3.ub.l.a.y -= 43;
			}
		}
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.m.a.x + 25 && charposx + 20 <= b3.ub.m.a.x + 25 + 4)
		{
			if (b3.ub.m.a.y == platformlevel[5])
			{
				b3.ub.m.a.y -= 43;
			}
		}

		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.r.a.x + 25 && charposx + 20 <= b3.ub.r.a.x + 25 + 4)
		{
			if (b3.ub.r.a.y == platformlevel[5])
			{
				b3.ub.r.a.y -= 43;
			}
		}
		if (b3.ub.m.a.y == platformlevel[5] - 43 && b3.ub.m.a.y == b3.ub.l.a.y&&b3.ub.l.a.y == b3.ub.r.a.y)
		{
			b3ubjump(5, 3);
		}
	}
	//UpperBun At lvl 3
	if (b3.ub.plvl == platformlevel[3]){
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.l.a.x + 25 && charposx + 20 <= b3.ub.l.a.x + 25 + 4)
		{
			if (b3.ub.l.a.y == platformlevel[3])
			{
				b3.ub.l.a.y -= 43;
			}
		}
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.m.a.x + 25 && charposx + 20 <= b3.ub.m.a.x + 25 + 4)
		{
			if (b3.ub.m.a.y == platformlevel[3])
			{
				b3.ub.m.a.y -= 43;
			}
		}

		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.r.a.x + 25 && charposx + 20 <= b3.ub.r.a.x + 25 + 4)
		{
			if (b3.ub.r.a.y == platformlevel[3])
			{
				b3.ub.r.a.y -= 43;
			}
		}
		if (b3.ub.m.a.y == platformlevel[3] - 43 && b3.ub.m.a.y == b3.ub.l.a.y&&b3.ub.l.a.y == b3.ub.r.a.y)
		{
			b3ubjump(3, 1);
		}
	}
	//UpperBun At lvl 1
	if (b3.ub.plvl == platformlevel[1]){
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.l.a.x + 25 && charposx + 20 <= b3.ub.l.a.x + 25 + 4)
		{
			if (b3.ub.l.a.y == platformlevel[1])
			{
				b3.ub.l.a.y -= 43;
			}
		}
		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.m.a.x + 25 && charposx + 20 <= b3.ub.m.a.x + 25 + 4)
		{
			if (b3.ub.m.a.y == platformlevel[1])
			{
				b3.ub.m.a.y -= 43;
			}
		}

		if (b3.ub.plvl == charposy&&charposx + 20 >= b3.ub.r.a.x + 25 && charposx + 20 <= b3.ub.r.a.x + 25 + 4)
		{
			if (b3.ub.r.a.y == platformlevel[1])
			{
				b3.ub.r.a.y -= 43;
			}
		}
		if (b3.ub.m.a.y == platformlevel[1] - 43 && b3.ub.m.a.y == b3.ub.l.a.y&&b3.ub.l.a.y == b3.ub.r.a.y)
		{
			b3ubjump(1, 0);
		}
	}
	//Patty At lvl 5
	if (b3.pa.plvl == platformlevel[5]){
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.l.a.x + 25 && charposx + 20 <= b3.pa.l.a.x + 25 + 4)
		{
			if (b3.pa.l.a.y == platformlevel[5])
			{
				b3.pa.l.a.y -= 43;
			}
		}
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.m.a.x + 25 && charposx + 20 <= b3.pa.m.a.x + 25 + 4)
		{
			if (b3.pa.m.a.y == platformlevel[5])
			{
				b3.pa.m.a.y -= 43;
			}
		}

		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.r.a.x + 25 && charposx + 20 <= b3.pa.r.a.x + 25 + 4)
		{
			if (b3.pa.r.a.y == platformlevel[5])
			{
				b3.pa.r.a.y -= 43;
			}
		}
		if (b3.pa.m.a.y == platformlevel[5] - 43 && b3.pa.m.a.y == b3.pa.l.a.y&&b3.pa.l.a.y == b3.pa.r.a.y)
		{
			b3pajump(5, 3);
		}
	}
	//Patty At lvl 3
	if (b3.pa.plvl == platformlevel[3]){
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.l.a.x + 25 && charposx + 20 <= b3.pa.l.a.x + 25 + 4)
		{
			if (b3.pa.l.a.y == platformlevel[3])
			{
				b3.pa.l.a.y -= 43;
			}
		}
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.m.a.x + 25 && charposx + 20 <= b3.pa.m.a.x + 25 + 4)
		{
			if (b3.pa.m.a.y == platformlevel[3])
			{
				b3.pa.m.a.y -= 43;
			}
		}

		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.r.a.x + 25 && charposx + 20 <= b3.pa.r.a.x + 25 + 4)
		{
			if (b3.pa.r.a.y == platformlevel[3])
			{
				b3.pa.r.a.y -= 43;
			}
		}
		if (b3.pa.m.a.y == platformlevel[3] - 43 && b3.pa.m.a.y == b3.pa.l.a.y&&b3.pa.l.a.y == b3.pa.r.a.y)
		{
			b3pajump(3, 1);
		}
	}

	//Patty At lvl 1
	if (b3.pa.plvl == platformlevel[1]){
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.l.a.x + 25 && charposx + 20 <= b3.pa.l.a.x + 25 + 4)
		{
			if (b3.pa.l.a.y == platformlevel[1])
			{
				b3.pa.l.a.y -= 43;
			}
		}
		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.m.a.x + 25 && charposx + 20 <= b3.pa.m.a.x + 25 + 4)
		{
			if (b3.pa.m.a.y == platformlevel[1])
			{
				b3.pa.m.a.y -= 43;
			}
		}

		if (b3.pa.plvl == charposy&&charposx + 20 >= b3.pa.r.a.x + 25 && charposx + 20 <= b3.pa.r.a.x + 25 + 4)
		{
			if (b3.pa.r.a.y == platformlevel[1])
			{
				b3.pa.r.a.y -= 43;
			}
		}
		if (b3.pa.m.a.y == platformlevel[1] - 43 && b3.pa.m.a.y == b3.pa.l.a.y&&b3.pa.l.a.y == b3.pa.r.a.y)
		{
			b3pajump(1, 0);
		}
	}

	//Lettuce At lvl 3
	if (b3.le.plvl == platformlevel[3]){
		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.l.a.x + 25 && charposx + 20 <= b3.le.l.a.x + 25 + 4)
		{
			if (b3.le.l.a.y == platformlevel[3])
			{
				b3.le.l.a.y -= 43;
			}
		}
		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.m.a.x + 25 && charposx + 20 <= b3.le.m.a.x + 25 + 4)
		{
			if (b3.le.m.a.y == platformlevel[3])
			{
				b3.le.m.a.y -= 43;
			}
		}

		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.r.a.x + 25 && charposx + 20 <= b3.le.r.a.x + 25 + 4)
		{
			if (b3.le.r.a.y == platformlevel[3])
			{
				b3.le.r.a.y -= 43;
			}
		}
		if (b3.le.m.a.y == platformlevel[3] - 43 && b3.le.m.a.y == b3.le.l.a.y&&b3.le.l.a.y == b3.le.r.a.y)
		{
			b3lejump(3, 1);
		}
	}
	//Lettuce At lvl 1
	if (b3.le.plvl == platformlevel[1]){
		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.l.a.x + 25 && charposx + 20 <= b3.le.l.a.x + 25 + 4)
		{
			if (b3.le.l.a.y == platformlevel[1])
			{
				b3.le.l.a.y -= 43;
			}
		}
		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.m.a.x + 25 && charposx + 20 <= b3.le.m.a.x + 25 + 4)
		{
			if (b3.le.m.a.y == platformlevel[1])
			{
				b3.le.m.a.y -= 43;
			}
		}

		if (b3.le.plvl == charposy&&charposx + 20 >= b3.le.r.a.x + 25 && charposx + 20 <= b3.le.r.a.x + 25 + 4)
		{
			if (b3.le.r.a.y == platformlevel[1])
			{
				b3.le.r.a.y -= 43;
			}
		}
		if (b3.le.m.a.y == platformlevel[1] - 43 && b3.le.m.a.y == b3.le.l.a.y&&b3.le.l.a.y == b3.le.r.a.y)
		{
			b3lejump(1, 0);
		}
	}

	//Lower Bun At lvl 1
	if (b3.lb.plvl == platformlevel[1]){
		if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.l.a.x + 25 && charposx + 20 <= b3.lb.l.a.x + 25 + 4)
		{
			if (b3.lb.l.a.y == platformlevel[1])
			{
				b3.lb.l.a.y -= 43;
			}
		}
		if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.m.a.x + 25 && charposx + 20 <= b3.lb.m.a.x + 25 + 4)
		{
			if (b3.lb.m.a.y == platformlevel[1])
			{
				b3.lb.m.a.y -= 43;
			}
		}

		if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.r.a.x + 25 && charposx + 20 <= b3.lb.r.a.x + 25 + 4)
		{
			if (b3.lb.r.a.y == platformlevel[1])
			{
				b3.lb.r.a.y -= 43;
			}
		}
		if (b3.lb.m.a.y == platformlevel[1] - 43 && b3.lb.m.a.y == b3.lb.l.a.y&&b3.lb.l.a.y == b3.lb.r.a.y)
		{
			b3lbjump(1, 0);
		}
	}



																								////////////////
																								//  Burger 4  //
																								////////////////

	//UpperBun At lvl 8
	if (b4.ub.plvl == platformlevel[8]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[8])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[8])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[8])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[8] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(8, 6);
		}
	}
	//UpperBun At lvl 6
	if (b4.ub.plvl == platformlevel[6]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[6])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[6])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[6])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[6] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(6, 5);
		}
	}
	//UpperBun At lvl 5
	if (b4.ub.plvl == platformlevel[5]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[5])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[5])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[5])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[5] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(5, 4);
		}
	}
	//UpperBun At lvl 4
	if (b4.ub.plvl == platformlevel[4]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[4])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[4])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[4])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[4] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(4, 3);
		}
	}
	//UpperBun At lvl 3
	if (b4.ub.plvl == platformlevel[3]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[3])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[3])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[3])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[3] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(3, 1);
		}
	}
	//UpperBun At lvl 1
	if (b4.ub.plvl == platformlevel[1]){
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.l.a.x + 25 && charposx + 20 <= b4.ub.l.a.x + 25 + 4)
		{
			if (b4.ub.l.a.y == platformlevel[1])
			{
				b4.ub.l.a.y -= 43;
			}
		}
		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.m.a.x + 25 && charposx + 20 <= b4.ub.m.a.x + 25 + 4)
		{
			if (b4.ub.m.a.y == platformlevel[1])
			{
				b4.ub.m.a.y -= 43;
			}
		}

		if (b4.ub.plvl == charposy&&charposx + 20 >= b4.ub.r.a.x + 25 && charposx + 20 <= b4.ub.r.a.x + 25 + 4)
		{
			if (b4.ub.r.a.y == platformlevel[1])
			{
				b4.ub.r.a.y -= 43;
			}
		}
		if (b4.ub.m.a.y == platformlevel[1] - 43 && b4.ub.m.a.y == b4.ub.l.a.y&&b4.ub.l.a.y == b4.ub.r.a.y)
		{
			b4ubjump(1, 0);
		}
	}
	//Patty At lvl 6
	if (b4.pa.plvl == platformlevel[6]){
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.l.a.x + 25 && charposx + 20 <= b4.pa.l.a.x + 25 + 4)
		{
			if (b4.pa.l.a.y == platformlevel[6])
			{
				b4.pa.l.a.y -= 43;
			}
		}
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.m.a.x + 25 && charposx + 20 <= b4.pa.m.a.x + 25 + 4)
		{
			if (b4.pa.m.a.y == platformlevel[6])
			{
				b4.pa.m.a.y -= 43;
			}
		}

		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.r.a.x + 25 && charposx + 20 <= b4.pa.r.a.x + 25 + 4)
		{
			if (b4.pa.r.a.y == platformlevel[6])
			{
				b4.pa.r.a.y -= 43;
			}
		}
		if (b4.pa.m.a.y == platformlevel[6] - 43 && b4.pa.m.a.y == b4.pa.l.a.y&&b4.pa.l.a.y == b4.pa.r.a.y)
		{
			b4pajump(6, 5);
		}
	}
	//Patty At lvl 5
	if (b4.pa.plvl == platformlevel[5]){
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.l.a.x + 25 && charposx + 20 <= b4.pa.l.a.x + 25 + 4)
		{
			if (b4.pa.l.a.y == platformlevel[5])
			{
				b4.pa.l.a.y -= 43;
			}
		}
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.m.a.x + 25 && charposx + 20 <= b4.pa.m.a.x + 25 + 4)
		{
			if (b4.pa.m.a.y == platformlevel[5])
			{
				b4.pa.m.a.y -= 43;
			}
		}

		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.r.a.x + 25 && charposx + 20 <= b4.pa.r.a.x + 25 + 4)
		{
			if (b4.pa.r.a.y == platformlevel[5])
			{
				b4.pa.r.a.y -= 43;
			}
		}
		if (b4.pa.m.a.y == platformlevel[5] - 43 && b4.pa.m.a.y == b4.pa.l.a.y&&b4.pa.l.a.y == b4.pa.r.a.y)
		{
			b4pajump(5, 4);
		}
	}
	//Patty At lvl 4
	if (b4.pa.plvl == platformlevel[4]){
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.l.a.x + 25 && charposx + 20 <= b4.pa.l.a.x + 25 + 4)
		{
			if (b4.pa.l.a.y == platformlevel[4])
			{
				b4.pa.l.a.y -= 43;
			}
		}
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.m.a.x + 25 && charposx + 20 <= b4.pa.m.a.x + 25 + 4)
		{
			if (b4.pa.m.a.y == platformlevel[4])
			{
				b4.pa.m.a.y -= 43;
			}
		}

		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.r.a.x + 25 && charposx + 20 <= b4.pa.r.a.x + 25 + 4)
		{
			if (b4.pa.r.a.y == platformlevel[4])
			{
				b4.pa.r.a.y -= 43;
			}
		}
		if (b4.pa.m.a.y == platformlevel[4] - 43 && b4.pa.m.a.y == b4.pa.l.a.y&&b4.pa.l.a.y == b4.pa.r.a.y)
		{
			b4pajump(4, 3);
		}
	}
	//Patty At lvl 3
	if (b4.pa.plvl == platformlevel[3]){
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.l.a.x + 25 && charposx + 20 <= b4.pa.l.a.x + 25 + 4)
		{
			if (b4.pa.l.a.y == platformlevel[3])
			{
				b4.pa.l.a.y -= 43;
			}
		}
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.m.a.x + 25 && charposx + 20 <= b4.pa.m.a.x + 25 + 4)
		{
			if (b4.pa.m.a.y == platformlevel[3])
			{
				b4.pa.m.a.y -= 43;
			}
		}

		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.r.a.x + 25 && charposx + 20 <= b4.pa.r.a.x + 25 + 4)
		{
			if (b4.pa.r.a.y == platformlevel[3])
			{
				b4.pa.r.a.y -= 43;
			}
		}
		if (b4.pa.m.a.y == platformlevel[3] - 43 && b4.pa.m.a.y == b4.pa.l.a.y&&b4.pa.l.a.y == b4.pa.r.a.y)
		{
			b4pajump(3, 1);
		}
	}
	//Patty At lvl 1
	if (b4.pa.plvl == platformlevel[1]){
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.l.a.x + 25 && charposx + 20 <= b4.pa.l.a.x + 25 + 4)
		{
			if (b4.pa.l.a.y == platformlevel[1])
			{
				b4.pa.l.a.y -= 43;
			}
		}
		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.m.a.x + 25 && charposx + 20 <= b4.pa.m.a.x + 25 + 4)
		{
			if (b4.pa.m.a.y == platformlevel[1])
			{
				b4.pa.m.a.y -= 43;
			}
		}

		if (b4.pa.plvl == charposy&&charposx + 20 >= b4.pa.r.a.x + 25 && charposx + 20 <= b4.pa.r.a.x + 25 + 4)
		{
			if (b4.pa.r.a.y == platformlevel[1])
			{
				b4.pa.r.a.y -= 43;
			}
		}
		if (b4.pa.m.a.y == platformlevel[1] - 43 && b4.pa.m.a.y == b4.pa.l.a.y&&b4.pa.l.a.y == b4.pa.r.a.y)
		{
			b4pajump(1, 0);
		}
	}
	//Lettuce At lvl 5
	if (b4.le.plvl == platformlevel[5]){
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.l.a.x + 25 && charposx + 20 <= b4.le.l.a.x + 25 + 4)
		{
			if (b4.le.l.a.y == platformlevel[5])
			{
				b4.le.l.a.y -= 43;
			}
		}
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.m.a.x + 25 && charposx + 20 <= b4.le.m.a.x + 25 + 4)
		{
			if (b4.le.m.a.y == platformlevel[5])
			{
				b4.le.m.a.y -= 43;
			}
		}

		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.r.a.x + 25 && charposx + 20 <= b4.le.r.a.x + 25 + 4)
		{
			if (b4.le.r.a.y == platformlevel[5])
			{
				b4.le.r.a.y -= 43;
			}
		}
		if (b4.le.m.a.y == platformlevel[5] - 43 && b4.le.m.a.y == b4.le.l.a.y&&b4.le.l.a.y == b4.le.r.a.y)
		{
			b4lejump(5, 4);
		}
	}

	//Lettuce At lvl 4
	if (b4.le.plvl == platformlevel[4]){
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.l.a.x + 25 && charposx + 20 <= b4.le.l.a.x + 25 + 4)
		{
			if (b4.le.l.a.y == platformlevel[4])
			{
				b4.le.l.a.y -= 43;
			}
		}
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.m.a.x + 25 && charposx + 20 <= b4.le.m.a.x + 25 + 4)
		{
			if (b4.le.m.a.y == platformlevel[4])
			{
				b4.le.m.a.y -= 43;
			}
		}

		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.r.a.x + 25 && charposx + 20 <= b4.le.r.a.x + 25 + 4)
		{
			if (b4.le.r.a.y == platformlevel[4])
			{
				b4.le.r.a.y -= 43;
			}
		}
		if (b4.le.m.a.y == platformlevel[4] - 43 && b4.le.m.a.y == b4.le.l.a.y&&b4.le.l.a.y == b4.le.r.a.y)
		{
			b4lejump(4, 3);
		}
	}
	//Lettuce At lvl 3
	if (b4.le.plvl == platformlevel[3]){
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.l.a.x + 25 && charposx + 20 <= b4.le.l.a.x + 25 + 4)
		{
			if (b4.le.l.a.y == platformlevel[3])
			{
				b4.le.l.a.y -= 43;
			}
		}
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.m.a.x + 25 && charposx + 20 <= b4.le.m.a.x + 25 + 4)
		{
			if (b4.le.m.a.y == platformlevel[3])
			{
				b4.le.m.a.y -= 43;
			}
		}

		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.r.a.x + 25 && charposx + 20 <= b4.le.r.a.x + 25 + 4)
		{
			if (b4.le.r.a.y == platformlevel[3])
			{
				b4.le.r.a.y -= 43;
			}
		}
		if (b4.le.m.a.y == platformlevel[3] - 43 && b4.le.m.a.y == b4.le.l.a.y&&b4.le.l.a.y == b4.le.r.a.y)
		{
			b4lejump(3, 1);
		}
	}
	//Lettuce At lvl 1
	if (b4.le.plvl == platformlevel[1]){
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.l.a.x + 25 && charposx + 20 <= b4.le.l.a.x + 25 + 4)
		{
			if (b4.le.l.a.y == platformlevel[1])
			{
				b4.le.l.a.y -= 43;
			}
		}
		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.m.a.x + 25 && charposx + 20 <= b4.le.m.a.x + 25 + 4)
		{
			if (b4.le.m.a.y == platformlevel[1])
			{
				b4.le.m.a.y -= 43;
			}
		}

		if (b4.le.plvl == charposy&&charposx + 20 >= b4.le.r.a.x + 25 && charposx + 20 <= b4.le.r.a.x + 25 + 4)
		{
			if (b4.le.r.a.y == platformlevel[1])
			{
				b4.le.r.a.y -= 43;
			}
		}
		if (b4.le.m.a.y == platformlevel[1] - 43 && b4.le.m.a.y == b4.le.l.a.y&&b4.le.l.a.y == b4.le.r.a.y)
		{
			b4lejump(1, 0);
		}
	}
	//Lower Bun At lvl 3
	if (b4.lb.plvl == platformlevel[3]){
		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.l.a.x + 25 && charposx + 20 <= b4.lb.l.a.x + 25 + 4)
		{
			if (b4.lb.l.a.y == platformlevel[3])
			{
				b4.lb.l.a.y -= 43;
			}
		}
		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.m.a.x + 25 && charposx + 20 <= b4.lb.m.a.x + 25 + 4)
		{
			if (b4.lb.m.a.y == platformlevel[3])
			{
				b4.lb.m.a.y -= 43;
			}
		}

		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.r.a.x + 25 && charposx + 20 <= b4.lb.r.a.x + 25 + 4)
		{
			if (b4.lb.r.a.y == platformlevel[3])
			{
				b4.lb.r.a.y -= 43;
			}
		}
		if (b4.lb.m.a.y == platformlevel[3] - 43 && b4.lb.m.a.y == b4.lb.l.a.y&&b4.lb.l.a.y == b4.lb.r.a.y)
		{
			b4lbjump(3, 1);
		}
	}
	//Lower Bun At lvl 1
	if (b4.lb.plvl == platformlevel[1]){
		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.l.a.x + 25 && charposx + 20 <= b4.lb.l.a.x + 25 + 4)
		{
			if (b4.lb.l.a.y == platformlevel[1])
			{
				b4.lb.l.a.y -= 43;
			}
		}
		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.m.a.x + 25 && charposx + 20 <= b4.lb.m.a.x + 25 + 4)
		{
			if (b4.lb.m.a.y == platformlevel[1])
			{
				b4.lb.m.a.y -= 43;
			}
		}

		if (b4.lb.plvl == charposy&&charposx + 20 >= b4.lb.r.a.x + 25 && charposx + 20 <= b4.lb.r.a.x + 25 + 4)
		{
			if (b4.lb.r.a.y == platformlevel[1])
			{
				b4.lb.r.a.y -= 43;
			}
		}
		if (b4.lb.m.a.y == platformlevel[1] - 43 && b4.lb.m.a.y == b4.lb.l.a.y&&b4.lb.l.a.y == b4.lb.r.a.y)
		{
			b4lbjump(1, 0);
		}
	}






																//Burger 2
	/*//Lower Bun
	if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.l.a.x + 25 && charposx + 20 <= b2.lb.l.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b2.lb.l.a.y == platformlevel[1])
		{
			b2.lb.l.a.y -= 43;
		}
	}
	if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.m.a.x + 25 && charposx + 20 <= b2.lb.m.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b2.lb.m.a.y == platformlevel[1])
		{
			b2.lb.m.a.y -= 43;
		}
	}

	if (b2.lb.plvl == charposy&&charposx + 20 >= b2.lb.r.a.x + 25 && charposx + 20 <= b2.lb.r.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b2.lb.r.a.y == platformlevel[1])
		{
			b2.lb.r.a.y -= 43;
		}
	}
	if (b2.lb.m.a.y == platformlevel[1] - 43 && b2.lb.m.a.y == b2.lb.l.a.y&&b2.lb.l.a.y == b2.lb.r.a.y)
	{
		b2.lb.plvl = platformlevel[0];
		b2.lb.l.a.y = platformlevel[0];
		b2.lb.m.a.y = platformlevel[0];
		b2.lb.r.a.y = platformlevel[0];
	}

																//Burger 3
	//Lower Bun
	if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.l.a.x + 25 && charposx + 20 <= b3.lb.l.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b3.lb.l.a.y == platformlevel[1])
		{
			b3.lb.l.a.y -= 43;
		}
	}
	if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.m.a.x + 25 && charposx + 20 <= b3.lb.m.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b3.lb.m.a.y == platformlevel[1])
		{
			b3.lb.m.a.y -= 43;
		}
	}

	if (b3.lb.plvl == charposy&&charposx + 20 >= b3.lb.r.a.x + 25 && charposx + 20 <= b3.lb.r.a.x + 25 + 4)		//platformlevel[1]
	{
		if (b3.lb.r.a.y == platformlevel[1])
		{
			b3.lb.r.a.y -= 43;
		}
	}
	if (b3.lb.m.a.y == platformlevel[1] - 43 && b3.lb.m.a.y == b3.lb.l.a.y&&b3.lb.l.a.y == b3.lb.r.a.y)			//platformlevel[1]
	{
		b3.lb.plvl = platformlevel[0];
		b3.lb.l.a.y = platformlevel[0];
		b3.lb.m.a.y = platformlevel[0];
		b3.lb.r.a.y = platformlevel[0];
	}*/
}

#endif // BURGERSTRUCTURE_H_INCLUDED
