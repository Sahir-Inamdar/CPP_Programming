#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }

}

int main()
{
    int iRet = Max(10,20,30,40);
    printf("Maximum is %d\n", iRet);

    float fRet = Max(10.5f,20.3f,40.5f,16.8f);
    printf("Maximum is %f\n", fRet);

    return 0;
}