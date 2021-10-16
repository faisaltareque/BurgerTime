# include "igraphics.h"
#include"burgerstructure.h"
#include"enemystructure.h"
#ifndef IMAGELOADER_H_INCLUDED
#define IMAGELOADER_H_INCLUDED

int imgbs, imgbh, imgbq, imgbhs, imgbb, imgbm, imgbis, imgbih, imgbihs, imgbiq, imgbim, imgbbw, imgbibw, imgbfw, imgbifw, imgbrookie, imgbirookie, imgbpro, imgbipro;
int imgmainmenu, imggmbkgrnd, imghelp1, imghelp2, imghelp3, imghighscore, imgloading, imglevel, imggameover;
int imgsettings;
int charright[2], charleft[2];
int imgstand;

int imgburger, imglife;

void imageLoad(){
	imgmainmenu = iLoadImage("images\\mainmenu.png");
	imghighscore = iLoadImage("images\\highscore.png");
	imggmbkgrnd = iLoadImage("images\\gamemap.png");
	imghelp1 = iLoadImage("images\\help1.jpg");
	imghelp2 = iLoadImage("images\\help2.jpg");
	imghelp3 = iLoadImage("images\\help3.jpg");
	imgloading = iLoadImage("images\\help.png");
	imglevel = iLoadImage("images\\level.png");
	imggameover = iLoadImage("images\\gameover.png");




	imgbs = iLoadImage("images\\buttonstart.png");
	imgbhs = iLoadImage("images\\buttonhs.png");
	imgbh = iLoadImage("images\\buttonhelp.png");
	imgbq = iLoadImage("images\\buttonquit.png");
	imgbb = iLoadImage("images\\buttonback.png");
	imgbm = iLoadImage("images\\mainbutton.png");
	imgbim = iLoadImage("images\\mainbutton2.png");
	imgbis = iLoadImage("images\\buttonstart2.png");
	imgbih = iLoadImage("images\\buttonhelp2.png");
	imgbihs = iLoadImage("images\\buttonhs2.png");
	imgbiq = iLoadImage("images\\buttonquit2.png");
	imgbbw = iLoadImage("images\\buttonback.png");
	imgbibw = iLoadImage("images\\buttonback2.png");
	imgbfw = iLoadImage("images\\buttonforward.png");
	imgbifw = iLoadImage("images\\buttonforward2.png");
	imgbrookie = iLoadImage("images\\buttonrookie.png");
	imgbirookie = iLoadImage("images\\buttonrookie2.png");
	imgbpro = iLoadImage("images\\buttonpro.png");
	imgbipro = iLoadImage("images\\buttonpro2.png");









	charright[0] = iLoadImage("images\\right1.png");
	charright[1] = iLoadImage("images\\right2.png");
	charleft[0] = iLoadImage("images\\left1.png");
	charleft[1] = iLoadImage("images\\left2.png");
	imgstand = iLoadImage("images\\straightpos1.png");

	//Enemy
	egg1.imgl[0] = iLoadImage("images\\el1.png");
	egg1.imgl[1] = iLoadImage("images\\el2.png");
	egg1.imgr[0] = iLoadImage("images\\er1.png");
	egg1.imgr[1] = iLoadImage("images\\er2.png");

	egg2.imgl[0] = iLoadImage("images\\el1.png");
	egg2.imgl[1] = iLoadImage("images\\el2.png");
	egg2.imgr[0] = iLoadImage("images\\er1.png");
	egg2.imgr[1] = iLoadImage("images\\er2.png");

	egg3.imgl[0] = iLoadImage("images\\el1.png");
	egg3.imgl[1] = iLoadImage("images\\el2.png");
	egg3.imgr[0] = iLoadImage("images\\er1.png");
	egg3.imgr[1] = iLoadImage("images\\er2.png");

	hotdog1.imgl[0] = iLoadImage("images\\hl1.png");
	hotdog1.imgl[1] = iLoadImage("images\\hl2.png");
	hotdog1.imgr[0] = iLoadImage("images\\hr1.png");
	hotdog1.imgr[1] = iLoadImage("images\\hr2.png");

	hotdog2.imgl[0] = iLoadImage("images\\hl1.png");
	hotdog2.imgl[1] = iLoadImage("images\\hl2.png");
	hotdog2.imgr[0] = iLoadImage("images\\hr1.png");
	hotdog2.imgr[1] = iLoadImage("images\\hr2.png");

	hotdog3.imgl[0] = iLoadImage("images\\hl1.png");
	hotdog3.imgl[1] = iLoadImage("images\\hl2.png");
	hotdog3.imgr[0] = iLoadImage("images\\hr1.png");
	hotdog3.imgr[1] = iLoadImage("images\\hr2.png");

	//Burger Image Load
	b1.ub.l.image = iLoadImage("images\\upperbun-l.png");
	b1.ub.m.image = iLoadImage("images\\upperbun-m.png");
	b1.ub.r.image = iLoadImage("images\\upperbun-r.png");
	b1.le.l.image = iLoadImage("images\\lettuce-l.png");
	b1.le.m.image = iLoadImage("images\\lettuce-m.png");
	b1.le.r.image = iLoadImage("images\\lettuce-r.png");
	b1.pa.l.image = iLoadImage("images\\patty-l.png");
	b1.pa.m.image = iLoadImage("images\\patty-m.png");
	b1.pa.r.image = iLoadImage("images\\patty-r.png");
	b1.lb.l.image = iLoadImage("images\\lowerbun-l.png");
	b1.lb.m.image = iLoadImage("images\\lowerbun-m.png");
	b1.lb.r.image = iLoadImage("images\\lowerbun-r.png");

	b2.ub.l.image = iLoadImage("images\\upperbun-l.png");
	b2.ub.m.image = iLoadImage("images\\upperbun-m.png");
	b2.ub.r.image = iLoadImage("images\\upperbun-r.png");
	b2.le.l.image = iLoadImage("images\\lettuce-l.png");
	b2.le.m.image = iLoadImage("images\\lettuce-m.png");
	b2.le.r.image = iLoadImage("images\\lettuce-r.png");
	b2.pa.l.image = iLoadImage("images\\patty-l.png");
	b2.pa.m.image = iLoadImage("images\\patty-m.png");
	b2.pa.r.image = iLoadImage("images\\patty-r.png");
	b2.lb.l.image = iLoadImage("images\\lowerbun-l.png");
	b2.lb.m.image = iLoadImage("images\\lowerbun-m.png");
	b2.lb.r.image = iLoadImage("images\\lowerbun-r.png");

	b3.ub.l.image = iLoadImage("images\\upperbun-l.png");
	b3.ub.m.image = iLoadImage("images\\upperbun-m.png");
	b3.ub.r.image = iLoadImage("images\\upperbun-r.png");
	b3.le.l.image = iLoadImage("images\\lettuce-l.png");
	b3.le.m.image = iLoadImage("images\\lettuce-m.png");
	b3.le.r.image = iLoadImage("images\\lettuce-r.png");
	b3.pa.l.image = iLoadImage("images\\patty-l.png");
	b3.pa.m.image = iLoadImage("images\\patty-m.png");
	b3.pa.r.image = iLoadImage("images\\patty-r.png");
	b3.lb.l.image = iLoadImage("images\\lowerbun-l.png");
	b3.lb.m.image = iLoadImage("images\\lowerbun-m.png");
	b3.lb.r.image = iLoadImage("images\\lowerbun-r.png");

	b4.ub.l.image = iLoadImage("images\\upperbun-l.png");
	b4.ub.m.image = iLoadImage("images\\upperbun-m.png");
	b4.ub.r.image = iLoadImage("images\\upperbun-r.png");
	b4.le.l.image = iLoadImage("images\\lettuce-l.png");
	b4.le.m.image = iLoadImage("images\\lettuce-m.png");
	b4.le.r.image = iLoadImage("images\\lettuce-r.png");
	b4.pa.l.image = iLoadImage("images\\patty-l.png");
	b4.pa.m.image = iLoadImage("images\\patty-m.png");
	b4.pa.r.image = iLoadImage("images\\patty-r.png");
	b4.lb.l.image = iLoadImage("images\\lowerbun-l.png");
	b4.lb.m.image = iLoadImage("images\\lowerbun-m.png");
	b4.lb.r.image = iLoadImage("images\\lowerbun-r.png");








	imgburger = iLoadImage("images\\burger.png");
	imglife = iLoadImage("images\\life.png");

}
#endif // IMAGELOADER_H_INCLUDED
