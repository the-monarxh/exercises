#include <iostream>
using namespace std;

class Vector2D {
    public:
    int x, y;
    Vector2D (){};
    Vector2D (int a, int b){
        x = a;
        y = b;
    };
    Vector2D operator+= (Vector2D i){
        Vector2D temp;
        temp.x = x += i.x;
        temp.y = y += i.y;
       return(temp);
    };
};

int main() {
    Vector2D one(17,15);
    Vector2D two(10,24);
    //one.x = 17;
    //one.y = 15;
    //two.x = 10;
    //two.y = 24;

    cout << one.x << endl;

    Vector2D three;
    three = one += two;

    cout << one.x<< endl;

    return 0;
}