#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int A = getmaxx(), B = getmaxy();

    setcolor(GREEN);
    line(0, B / 2, A, B / 2);
    line(A / 2, 0, A / 2, B);
    A = A / 2;
    B = B / 2;

    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    float m = float(dy) / float(dx);

    if (abs(m) <= 1)
    {
        int x = x1;
        int y = y1;
        while (x <= x2)
        {
            putpixel(x+A, B-y, WHITE);
            x = x + 1;
            y = round(y+m);

        }
    }
    else if (abs(m) > 1)
    {
        int x = x1;
        int y = y1;
        while (y <= y2)
        {
            putpixel(x+A, B-y, WHITE);
            y = y + 1;
            x = round(x+(1/m));
        }
    }
    
    getch();
    closegraph();
    return 0;
}
