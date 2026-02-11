#include <iostream>
using namespace std;

double sq_area(double a){
    return a*a;
}
double circle_area(double b){
    return 3.14*b*b ;
}
double rectangle_area(double c , double d){
    return c*d;
}


int main()
{
    double x;
    cout << "enter the side of a square : ";
    cin >> x;
    double result = sq_area(x);
    cout << result << "\n";

    double y;
    cout << "Enter the radius of circle : ";
    cin >> y;
    double cir_area = circle_area(y);
    cout << cir_area;

    double e ,f ;
    cout << "Enter the length and breadth : ";
    cin >> e;
    cin >> f;
    double rect_area = rectangle_area(3,7);
    cout << rect_area;


    return 0;

}
