//
//  lab_02.cpp
//  < Лосєва Марія >
//  Лінійні програми
//  Варіант 9
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a;
    double b;
    double z1;
    double z2;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    
    z1 = (cos(a)-cos(b))*(cos(a)-cos(b))-(sin(a)-sin(b))*(sin(a)-sin(b));
    z2 = sin(-4)*sin(-4)*(a-b)/2*cos(a+b);
    
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    
    cin.get();
    return 0;
}

