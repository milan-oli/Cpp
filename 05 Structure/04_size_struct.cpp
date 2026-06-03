#include <iostream>
using namespace std;
struct GfG{
    char c;
    int x, y;
};

int main(){

    cout << sizeof(GfG);
    return 0;
}

/*the size should be 9 but the result is 12 due to padding. 
The compiler adds some extra bytes to make the size of 
the structure a multiple of the largest data type in 
the structure. In this case, the largest data type is int
which is 4 bytes, so the compiler adds 3 bytes of padding after 
the char to make the total size of the structure 12 bytes.*/