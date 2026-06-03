#include<iostream>
using namespace std;
typedef struct Point{
    int x, y;
} Point;

int main(){
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;
    return 0;
}