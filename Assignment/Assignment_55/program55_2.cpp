#include<iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    if(no1 < no2)
    {
        cout<<"first number is smaller can't divide";
    }
    
    T Div = 0;

    Div = no1 / no2;

    return Div;
}

int main()
{
    int iRet = Div(20,10);
    printf("%d\n", iRet);

    float fRet = Div(20.3f,10.5f);
    printf("%f\n", fRet);

    return 0;
}