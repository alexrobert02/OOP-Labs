#include "Canvas.h"
int main() {
    Canvas picture(50, 50);
    picture.DrawCircle(15, 15, 10, '$');
    picture.Print();
    picture.Clear();
    picture.FillCircle(15, 15, 10, '#');
    picture.Print();
    picture.Clear();
    picture.DrawRect(5, 5, 25, 25, '.');
    picture.Print();
    picture.Clear();
    picture.FillRect(5, 5, 25, 25, '*');
    picture.Print();
    picture.Clear();
    picture.DrawLine(5, 10, 20, 20, '*');
    picture.Print();
    return 0;
}