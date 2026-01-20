#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr, int iSize)
{
    int i = 0;
    T iMin ;
    T SecondMin ;

    if (arr[0] < arr[1])
    {
        iMin = arr[0];
        SecondMin = arr[1];
    }
    else
    {
        iMin = arr[1];
        SecondMin = arr[0];
    }
    
    for(i = 2;i < iSize; i++)
    {
        if(arr[i] < iMin)
        {
            SecondMin = iMin;
            iMin = arr[i];
        }
        else if(arr[i] > iMin && arr[i] < SecondMin)
        {
            SecondMin = arr[i];
        }
    }
    if(SecondMin > iMin && SecondMin != iMin)
    {
        return SecondMin;
    }
} 
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = SecondMin(arr,5);
    printf("%d\n",iRet); // 20

    float fRet = SecondMin(brr,4);
    printf("%f\n",fRet); // 8.7

    return 0;
}