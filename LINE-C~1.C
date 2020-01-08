#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main() {
    int gdriver = DETECT, gmode;
    int i;
    clrscr();

    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");


    //loop for the plane
    for(i=0; i<300; i++)
    {
    //rocket Thruster
    //line(220, 380, 390, 380); //holder
    ellipse(305,385-i,20,160,70,15);//holder too
    ellipse(255,380-i,325,40,25,15);
    ellipse(355,380-i,140,220,25,15);
    //line(255, 380, 255, 390);
    //line(280, 380, 280, 390);


    //ignore until needed
    //not og
	    //line(280,385,280,390);
    //centre lines - line(295, 380, 295, 390);
    //centre lines - line(320, 380, 320, 390);
    //line(330, 385, 330, 390);
    //line(360, 380, 360, 390);

    //rocket wings
    /*this is a line one
    line(230, 380, 270, 320);
    line(380, 380, 340, 320);
    */
    //ellipse
    ellipse(220,305-i,296,360,50,80);//left
    ellipse(390,305-i,190,245,50,80);//right
    //body
    // 2 side
    line(270, 320-i, 270, 255-i);
    line(340, 320-i, 340, 255-i);

    //dome
    // refrence line ->
    //line(305, 380, 305, 00);//checker
    ellipse(305,255-i,95,180,35,75);
    ellipse(305,255-i,0,83,35,75);
    //first two are circles and the next two are from where to where
    //last two are the size of ellipse in x and y
    //ellipse(220,250,0,72,50,100);
    //windows
    circle(305,215-i,12);
    circle(305,215-i,8);
    circle(305,265-i,15);
    circle(305,265-i,11);
    circle(305,325-i,18);
    circle(305,325-i,13);

    //tip
    line(300,180-i,305,130-i);
    line(310,180-i,305,130-i);
    //stage
    line(0, 400, 1000, 400);
    // left line(450, 400, 450, 390);
    //right line(150, 400, 150, 390);
    line(150, 390, 450, 390);
    arc(150, 400,90,180,10);
    arc(450,400,0,90,10);


    delay(10);
    cleardevice();

    }


    printf("%d",i);
    getch();

    closegraph();
}