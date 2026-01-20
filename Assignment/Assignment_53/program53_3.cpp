#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr, int iSize)
{
    int i = 0;
    T iMax ;
    T SecondMax ;

    if (arr[0] > arr[1])
    {
        iMax = arr[0];
        SecondMax = arr[1];
    }
    else
    {
        iMax = arr[1];
        SecondMax = arr[0];
    }
    
    for(i = 2;i < iSize; i++)
    {
        if(arr[i] > iMax)
        {
            SecondMax = iMax;
            iMax = arr[i];
        }
        else if(arr[i] < iMax && arr[i] > SecondMax)
        {
            SecondMax = arr[i];
        }
    }
    if(SecondMax < iMax && SecondMax != iMax)
    {
        return SecondMax;
    }
} 
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = SecondMax(arr,5);
    printf("%d\n",iRet); // 40

    float fRet = SecondMax(brr,4);
    printf("%f\n",fRet); // 9.8

    return 0;
}