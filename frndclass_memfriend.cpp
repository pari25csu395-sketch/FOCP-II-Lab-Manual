#include <iostream>
using namespace std;

class Complex ; // forward declaration

class Calculator{
    int add(int a , int b){
        return(a+b);
    }
    int SumRealComplex(Complex , Complex):
    int SumCompComplex(Complex , Complex);

};

class Complex{
    int a ,b ;

    // individually declaring funaciions as friends
    /*friend int Calculator :: SumRealComplex (Complex , Complex);
    friend int Calculator :: SumCompComplex (Complex , Complex)*/

   // Aliter = declaring whole class a friend
   friend class Calculator;

   void setnumber(int n1 , int n2){
    a = n1;
    b = n2;
   }

   void printnumber(){
        cout << " your number is " << a << "+" << b << "i" << endl;
    }
    
};

int Calculator :: SumRealComplex( Complex o1 , Complex o2){
        return (o1.a + o2.a);
    }

    int Calculator :: SumCompComplex( Complex o1 , Complex o2){
        return (o1.b + o2.b);
    }

int main() {

    Complex o1 , o2;
    o1.setnumber(1, 4);
    o2.setnumber(2,3);

    Calculator Calc;
    int res =  Calc.SumRealComplex(o1 , o2);
    cout << " The sum of real part is " << res << endl;
    int resc  =  Calc.SumCompComplex(o1 , o2);
    cout << " The sum of imaginary part is " << resc << endl;
     


return 0;
};