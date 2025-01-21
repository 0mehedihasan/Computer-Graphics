#include <iostream>
#include<graphics.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(RED);
    circle(50,50,50);

    int x=getmaxx(),y=getmaxy();
    cout<<"x="<<x<<"Y="<<y;

    //x,y
    setcolor(GREEN);
    line(0,y/2,x,y/2);
    setcolor(RED);
    line(x/2,0,x/2,y);

    setcolor(YELLOW);
    circle(x/2,y/2,150);

    getch();
    closegraph();
    return 0;
}
