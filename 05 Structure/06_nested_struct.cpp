#include<iostream>
using namespace std;
struct Point{
    int x, y;
};  
struct Rectangle{
    Point topLeft;
    Point bottomRight;
};
int main(){
    Rectangle rect;
    rect.topLeft.x = 0;
    rect.topLeft.y = 10;
    rect.bottomRight.x = 10;
    rect.bottomRight.y = 0;

    cout << "Top Left Point: (" << rect.topLeft.x << ", " << rect.topLeft.y << ")" << endl;
    cout << "Bottom Right Point: (" << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;

    return 0;
}