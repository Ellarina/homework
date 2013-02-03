#include "fma.h"
#include <math.h>
#include<conio.h>

using namespace std;

FMA::FMA()
{
    //ctor
}

FMA::~FMA()
{
    //dtor
}
int FMA::calY (int x, int A, int B, int C)
{
    int y;
    y = (A*(x*x)) + (B*x) + C;
    return y;
}
int FMA::D (int A,int B, int C)
{
    int D;
    D = (B*B) - (4*A*C);
    return D;
}
void FMA::numofroots (int D)
{
    if (D == 0)
    {
        cout<< "Num. of roots = 1"<<endl;
    }
    else if (D > 0)
    {
        cout<< "Num. of roots = 2"<<endl;
    }
    else
        cout<< "Num. of roots = 0"<<endl;
}
float FMA::extremum (int B, int C, int x, int y)
{
    int a;
    a = ((B*x)+C-y) / (x*x);
    return a;
}
void FMA::kind (float a)
{
    if (a == 0)
    {
        cout<< "The polynomial has no extremum."<<endl;
    }
    else if (a < 0)
    {
        cout<< "The polynomial has a maximum extremum."<<endl;
    }
    else
        cout<< "The polynomial has a minimum extremum."<<endl;
}
float FMA::root (int B, int D, int A)
{
    int R;
    R = (-B + sqrt(D)) / (2*A);
    return R;
}
float FMA::extremumX (int A, int B)
{
    float X;
    X = -B / (2*A);
    return X;
}
int A()
{
    int A;
    return A;
}
int B()
{
    int B;
    return B;
}int C()
{
    int C;
    return C;
}
