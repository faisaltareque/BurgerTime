# include "igraphics.h"
#include"burgerstructure.h"
#ifndef CHARPOSITION_H_INCLUDED
#define CHARPOSITION_H_INCLUDED

bool stand = true;
bool mright = false;
bool mleft = false;
bool platform = false;
bool ladder = false;

void charmoverestriction(){
	charmidx = charposx + 20;

	if (charposy == 172 || charposy == 240 || charposy == 312 || charposy == 384 || charposy == 456 || charposy == 524 || charposy == 596 || charposy == 668)
	{
		//Platform LVL 1
		if (charposy == platformlevel[1] && (charmidx >= 80 && charmidx <= 912))
			platform = true;
		//Platform LVL 2
		if (charposy == platformlevel[2] && (charmidx >= 288 && charmidx <= 500))
		platform = true;		
		//Platform LVL 3
		if (charposy == platformlevel[3] && (charmidx >= 80 && charmidx <= 288))
			platform = true;
		if (charposy == platformlevel[3] && (charmidx >= 500 && charmidx <= 912))
			platform = true;
		//Platform LVL 4
		if (charposy == platformlevel[4] && (charmidx >= 80 && charmidx <= 500))
			platform = true;
		if (charposy == platformlevel[4] && (charmidx >= 708 && charmidx <= 912))
			platform = true;
		//Platform LVL 5
		if (charposy == platformlevel[5] && (charmidx >= 500 && charmidx <= 912))
			platform = true;
		//Platform LVL 6
		if (charposy == platformlevel[6] && (charmidx >= 80 && charmidx <= 500))
			platform = true;
		if (charposy == platformlevel[6] && (charmidx >= 708 && charmidx <= 912))
			platform = true;
		//Platform LVL 7
		if (charposy == platformlevel[7] && (charmidx >= 288 && charmidx <= 708))
			platform = true;
		//Platform LVL 8
		if (charposy == platformlevel[8] && (charmidx >= 80 && charmidx <= 912))
			platform = true;
	}
	else platform = false;
	if (charmidx == 80 || charmidx == 188 || charmidx == 288 || charmidx == 396 || charmidx == 500 || charmidx == 708 || charmidx == 812 || charmidx == 912)
	{ 
		//Ladder Column 1
		if (charmidx == laddercolumn[1] && (charposy >= platformlevel[1] && charposy <= platformlevel[4]))
			ladder = true;
		if (charmidx == laddercolumn[1] && (charposy >= platformlevel[6] && charposy <= platformlevel[8]))
			ladder = true;
		//Ladder Column 2
		if (charmidx == laddercolumn[2] && (charposy >= platformlevel[3] && charposy <= platformlevel[6]))
			ladder = true;
		//Ladder Column 3
		if (charmidx == laddercolumn[3] && (charposy >= platformlevel[1] && charposy <= platformlevel[8]))
			ladder = true;
		//Ladder Column 4
		if (charmidx == laddercolumn[4] && (charposy >= platformlevel[6] && charposy <= platformlevel[8]))
			ladder = true;
		//Ladder Column 5
		if (charmidx == laddercolumn[5] && (charposy >=100 && charposy <= platformlevel[8]))
			ladder = true;
		//Ladder Column 6
		if (charmidx == laddercolumn[6] && (charposy >= platformlevel[1] && charposy <= platformlevel[8]))
			ladder = true;
		//Ladder Column 7
		if (charmidx == laddercolumn[7] && (charposy >= platformlevel[1] && charposy <= platformlevel[5]))
			ladder = true;
		//Ladder Column 8
		if (charmidx == laddercolumn[8] && (charposy >= platformlevel[1] && charposy <= platformlevel[3]))
			ladder = true;
		if (charmidx == laddercolumn[8] && (charposy >= platformlevel[5] && charposy <= platformlevel[8]))
			ladder = true;	
	}
	else ladder = false;

}

void charmoveright(){
	mright = true;
	stand = false;
	mleft = false;
	//Platform LVL 1
	if (charposy == platformlevel[1] && charmidx < 912)
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}

	//platform LVL 2
	if (charposy == platformlevel[2] && charmidx < 500)
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 3
	if (charposy == platformlevel[3] && (charmidx >= 500 && charmidx < 912))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[3] && (charmidx >= 80 && charmidx < 288))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 4
	if (charposy == platformlevel[4] && (charmidx >= 708 && charmidx < 912))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[4] && (charmidx >= 80 && charmidx < 500))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//platform LVL 5
	if (charposy == platformlevel[5] && charmidx < 912)
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 6
	if (charposy == platformlevel[6] && (charmidx >= 708 && charmidx < 912))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[6] && (charmidx >= 80 && charmidx < 500))
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//platform LVL 7
	if (charposy == platformlevel[7] && charmidx < 708)
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 8
	if (charposy == platformlevel[8] && charmidx < 912)
	{
		charposx += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}

}
void charmoveleft(){
	mright = false;
	stand = false;
	mleft = true;
	//Platform LVL 1
	if (charposy == platformlevel[1] && charmidx > 80)
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 2
	if (charposy == platformlevel[2] && charmidx > 288)
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 3
	if (charposy == platformlevel[3] && (charmidx > 80 && charmidx <= 288))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[3] && (charmidx > 500 && charmidx <= 912))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 4
	if (charposy == platformlevel[4] && (charmidx > 80 && charmidx <= 500))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[4] && (charmidx > 708 && charmidx <= 912))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 5
	if (charposy == platformlevel[5] && charmidx > 500)
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 6
	if (charposy == platformlevel[6] && (charmidx > 80 && charmidx <= 500))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charposy == platformlevel[6] && (charmidx > 708 && charmidx <= 912))
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 7
	if (charposy == platformlevel[7] && charmidx > 288)
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Platform LVL 8
	if (charposy == platformlevel[8] && charmidx > 80)
	{
		charposx -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}

}
void charmoveup(){
	mright = true;
	stand = false;
	mleft = false;
	//printf("CharX:%d\tCharY:%d\n", charposx, charposy);

	//Ladder Column 1
	if (charmidx == laddercolumn[1] && (charposy >= platformlevel[1] && charposy < platformlevel[4]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charmidx == laddercolumn[1] && (charposy >= platformlevel[6] && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 2
	if (charmidx == laddercolumn[2] && (charposy >= platformlevel[3] && charposy < platformlevel[6]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 3
	if (charmidx == laddercolumn[3] && (charposy >= platformlevel[1] && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 4
	if (charmidx == laddercolumn[4] && (charposy >= platformlevel[6] && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 5
	if (charmidx == laddercolumn[5] && (charposy >= 100 && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 6
	if (charmidx == laddercolumn[6] && (charposy >= platformlevel[1] && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 7
	if (charmidx == laddercolumn[7] && (charposy >= platformlevel[1] && charposy < platformlevel[5]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 8
	if (charmidx == laddercolumn[8] && (charposy >= platformlevel[1] && charposy < platformlevel[3]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charmidx == laddercolumn[8] && (charposy >= platformlevel[5] && charposy < platformlevel[8]))
	{
		charposy += 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}

}
void charmoverdown(){
	mright = false;
	stand = false;
	mleft = true;
	//printf("CharX:%d\tCharY:%d\n", charposx, charposy);

	//Ladder Column 1
	if (charmidx == laddercolumn[1] && (charposy > platformlevel[1] && charposy <= platformlevel[4]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charmidx == laddercolumn[1] && (charposy > platformlevel[6] && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 2
	if (charmidx == laddercolumn[2] && (charposy > platformlevel[3] && charposy <= platformlevel[6]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 3
	if (charmidx == laddercolumn[3] && (charposy > platformlevel[1] && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 4
	if (charmidx == laddercolumn[4] && (charposy > platformlevel[6] && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 5
	if (charmidx == laddercolumn[5] && (charposy > 100 && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 6
	if (charmidx == laddercolumn[6] && (charposy > platformlevel[1] && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 7
	if (charmidx == laddercolumn[7] && (charposy > platformlevel[1] && charposy <= platformlevel[5]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	//Ladder Column 8
	if (charmidx == laddercolumn[8] && (charposy > platformlevel[1] && charposy <= platformlevel[3]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}
	if (charmidx == laddercolumn[8] && (charposy > platformlevel[5] && charposy <= platformlevel[8]))
	{
		charposy -= 4;
		animateindex++;

		if (animateindex >= 2)
			animateindex = 0;
	}

}

#endif // IMAGELOADER_H_INCLUDED