#include <iostream>
using namespace std;

int main(){
    // pointer - data type which holds the address of another data type

    int a = 4;
    int* b = &a;

    // "&" = (address of) operator
     cout << "the address of a is:" << &a << endl;
     cout << "the address of a is :" << b << endl;

     cout << "the value of a is:" << *b << endl;

     // pointer to pointer - stores the address of another pointer

    int** c = &b;
    cout << "address of pointer b is :" << &b << endl;


     return 0;
}

