#include <iostream>
using namespace std;

// volumes of different shapes at once with the same name
// FUNCTION OVERLOADING

int volume(float a){
    return a * a * a ;
}

int volume(float l , float b , float h){
    return l * b * h;
}

int volume(float r , float h){
    return 3.14 * r * r * h;

}

int main() {

    cout << "vol of cube is "<< volume(3) << endl;
    cout << "vol of cuboid is " << volume(3,6,7)<< endl;
    cout << "vol of cylinder is " << volume(4,5);

return 0;
}