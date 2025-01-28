#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int A = getmaxx(), B = getmaxy();

    setcolor(GREEN);
    line(0, B / 2, A, B/ 2);
    setcolor(RED);
    line(A / 2, 0, A / 2, B);
    A=A/2;
    B=B/2;

    int x1 = 1, y1 = 1, x2 = 100, y2 = 100;

    int dx = x2 - x1;
    int dy = y2 - y1;
    float m = float(dy) / float(dx);
    float b = y1 - m * x1;

    if (abs(m) <= 1) {
        if (x1 > x2) {
            swap(x1, x2);
            swap(y1, y2);
        }
        int x = x1;
        int y = y1;
        putpixel(x+A, B-y, WHITE);
        while (x <= x2) {
            x = x + 1;
            y = round(m * x + b);
            putpixel(x+A, B-y, WHITE);
        }
    }
    else if (abs(m) > 1) {
        if (y1 > y2) {
            swap(x1, x2);
            swap(y1, y2);
        }
        int x = x1;
        int y = y1;
        putpixel(x+A, B-y, WHITE);
        while (y <= y2) {
            y = y + 1;
            x = round((y - b) / m);
            putpixel(x+A, B-y, WHITE);
        }
    }
    getch();
    closegraph();
    return 0;
}
