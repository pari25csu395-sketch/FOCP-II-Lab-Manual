 #include <iostream>
 using namespace std;

 int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
 }
 
 int main() {
    int x;
    cout << "enter any num:" << endl;
    cin >> x;
    cout << "the term in fib series at " << x << "position is " << fib(x);
 
 return 0;
 }