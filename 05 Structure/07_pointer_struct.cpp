#include<iostream>
using namespace std;
struct Point{
    int x, y;
};
int main(){
    Point p1 = {10, 20};
    Point* ptr = &p1;

    cout << "Point p1: (" << ptr->x << ", " << ptr->y << ")" << endl;

    return 0;
}