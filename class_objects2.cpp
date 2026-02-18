#include <iostream>
using namespace std;
class Area{
public:
double length , breadth;

void setData(){
    
    cout << "Enter length and breadth";
    cin >> length >> breadth ;
}
double area(){
    return (length * breadth);
}
};
int main(){
    Area rectangle;
    rectangle.setData();
    cout << "Area of rectangle" << rectangle.area() << endl;

return 0;
}


