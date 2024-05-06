#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point monPoint;

    monPoint.x = 5;
    monPoint.y = 10;

    Point *pointeurPoint = &monPoint;

    pointeurPoint->x = 15;
    pointeurPoint->y = 20;

    cout << "Valeur de x : " << pointeurPoint->x << endl;
    cout << "Valeur de y : " << pointeurPoint->y << endl;

    return 0;
}
