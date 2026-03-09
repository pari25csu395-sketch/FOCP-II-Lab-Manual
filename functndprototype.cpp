#include <iostream>
using namespace std;

int sum(int a , int b);

void g(void); //another eg;-

int main() {
    int num1, num2; // actual parameters
    cout << "enter num1:"<< endl;
    cin >> num1;
    cout << "enter num2:"<< endl;
    cin >> num2;

    cout << "sum is : " << sum(num1, num2) << endl;1

    g(); // another eg

return 0;
}

int sum(int a , int b){ // formal parameters- taking values from actual parameters

    int c  = a+b ;
    return c;
}

void g(){

    cout << "Hey, Pari this side !" ;
}
