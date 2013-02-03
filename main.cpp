#include "FMA.h"
#include <iostream>


using namespace std;

int main()
{
    int A,B,C,R,D,X,x,y,a;
    FMA fnct, fnct1, fnct2, fnct3, fnct4;
    cout<< "Given: y = Ax2 + Bx + C"<<endl;
    cout<< "Enter a value for"<<endl<<"A: ";
    cin>> A;
    cout<< "B: ";
    cin>> B;
    cout<< "C: ";
    cin>> C;
    cout<< "\ny = "<<A<<"x2 + "<<B<<"x + "<<C<<endl;
    cout<<"Enter a value for x: ";
    cin>> x;
    y = fnct.calY (x,A,B,C);
    cout<<"The value of y is: "<< y <<endl;
    fnct1.numofroots (D);
    R = fnct2.root (B, D, A);
    cout<<"Root = "<<R<<endl;
    fnct3.kind (a);
    X = fnct4.extremumX (A, B);
    cout<<"Extremum of x = "<<X<<endl;

    return 0;
}
