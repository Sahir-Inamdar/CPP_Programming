#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    int i = 0;
    T iMin = arr[0];

    for(i = 0;i < iSize; i++)
    {
        if(arr[i] < iMin)
        {
           iMin = arr[i];
        }
    }
    return iMin;
} 
int main()
{
    int arr[]={19,20,89,13,50};
    int iRet = 0;

    iRet = Min(arr,5);

    cout<<"Smallest Number is : "<<iRet; 
    
    return 0;
}