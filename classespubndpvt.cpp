#include <iostream>
using namespace std;

// classes are extn of structures
// structures cannot be pvt and funct cannot be used in it so classes are required
// class Employee {
// Pari, Vanshita, kanagna} ; --> this is also right syntax


class Employee
{
    private:
    int a , b, c;

    public:
    int d , e;
    void setdata(int a1 , int b1, int c1);
    void getdata(){
        cout << "the value is a is: " << a << endl;
        cout << "the value is b is: " << b << endl;
        cout << "the value is c is: " << c << endl;
        cout << "the value is d is: " << d << endl;
        cout << "the value is e is: " << e << endl;
    }
};

void Employee :: setdata(int a1 , int b1 , int c1){

    a = a1;
    b = b1;
    c = c1;

}

int main(){

    Employee Pari;
    Pari.d = 2; // a,b,c cannot be declared like this bcoz they are pvt.
    Pari.e = 3;
    Pari.setdata(4,5,6);
    Pari.getdata();

return 0;
}