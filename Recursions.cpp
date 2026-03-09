#include <iostream>
using namespace std;

int factorial(int n){
    if (n<+1){ // this ia a base conditon, if not given this, program will keep running
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    
    int a;
    cout << "Enter any num for factorial:" << endl;
    cin >> a;
    cout << "The Factorial of "<< a << " is " << factorial(a);



return 0;
}