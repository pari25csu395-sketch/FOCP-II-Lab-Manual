#include <iostream>
using namespace std;

class Base{
    public :
    void show(){
        cout << "Base class function " << endl;
    }
};
class Derived : public Base{
    public:
    void display(){
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base b;
    b.show ();
    Derived d;
    d.show();
    d.display();

return 0;
}