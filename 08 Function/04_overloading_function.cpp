#include <iostream>
using namespace std;
void volume(float l)
{
    cout << "The volume of the cube is:" << l * l * l << endl;
}
void volume(float l, float b, float h)
{
    cout << "The volume of the cuboid is:" << l * b * h << endl;
}
void volume(float r, float h)
{
    cout << "The volume of the cylinder is:" << 3.14 * r * r * h;
    
}
int main()
{
    volume(3.5);
    volume(3.5, 6.5, 9.5);
    volume(3.5, 5.5);

    return 0;
}