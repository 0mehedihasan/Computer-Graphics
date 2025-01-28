#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx(), y = getmaxy();
    cout << "x=" << x << " y=" << y << endl;

    setcolor(GREEN);
    line(0, y / 2, x, y / 2);
    setcolor(RED);
    line(x / 2, 0, x / 2, y);

    int X0 = x / 2;
    int Y0 = y / 2;

    int x1 = X0 + 50;
    int y1 = Y0 - 50;
    int x2 = X0 + 500;
    int y2 = Y0 - 500;

    setcolor(WHITE);
    line(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
