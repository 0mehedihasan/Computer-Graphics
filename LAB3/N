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
    line(0, B / 2, A, B / 2);  // x-axis
    setcolor(RED);
    line(A / 2, 0, A / 2, B);  // y-axis
    A = A / 2;
    B = B / 2;

    // User input for the two points
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    // DDA Line Algorithm
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate steps required for generating pixels
    int steps = max(abs(dx), abs(dy));

    // Calculate increment in x and y
    float Xinc = float(dx) / float(steps);
    float Yinc = float(dy) / float(steps);

    // Initial points
    float x = x1;
    float y = y1;

    putpixel(round(x) + A, B - round(y), WHITE);  // Plot the first point

    for (int i = 0; i < steps; i++) {
        x += Xinc;
        y += Yinc;

        putpixel(round(x) + A, B - round(y), WHITE);  // Plot the next point
    }

    getch();
    closegraph();
    return 0;
}
