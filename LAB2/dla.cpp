#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
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

    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    float xIncrement = dx / float(steps);
    float yIncrement = dy / float(steps);

    float xCurrent = x1;
    float yCurrent = y1;

    setcolor(WHITE);

    for (int i = 0; i <= steps; i++) {
        putpixel(round(xCurrent), round(yCurrent), WHITE);
        xCurrent += xIncrement;
        yCurrent += yIncrement;
    }

    getch();
    closegraph();
    return 0;
}
