#ifndef FMA_H
#define FMA_H
#include <iostream>


class FMA
{
    public:
        FMA();
        virtual ~FMA();
            int calY (int x, int A, int B, int C);
            int D (int A,int B, int C);
            void numofroots (int D);
            float root (int B, int D, int A);
            float extremum (int B, int C, int x, int y);
            void kind (float a);
            float extremumX (int A, int B);
    protected:
    private:
        int A;
        int B;
        int C;
        int x;

};

#endif // FMA_H
