#include <iostream>
using namespace std;

class Base{
    public :
    Base(int x) {}
};

class Derived : public Base {
    public :
    Derived(int a, int b) : Base(a) {

        cout << "Derived constructor:" << b << endl;
    
    }
};


int main() {
    Derived d(10,20);

return 0;
}