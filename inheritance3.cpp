#include <iostream>
using namespace std;

class Base{
    public :
    Base(){
        cout << "Base class default cponstructor called" << endl;
    }

};
class Derived : public Base{
    public : 
    Derived(){
        cout << "Derived class default constructor called" << endl;
    }
};

int main() {
    Derived d;

return 0;
}