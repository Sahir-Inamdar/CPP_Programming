#include<iostream>
using namespace std;

template<class T>
T SumEven(T *arr, int iSize)
{
    int i = 0;
    T iSum = 0;

    for(i = 0;i < iSize; i++)
    {
        if(arr[i] % 2 == 0)
        {
            iSum = iSum + arr[i];
        }
    }
    return iSum;
} 
int main()
{
    int arr[]={19,20,89,13,50};
    int iRet = 0;

    iRet = SumEven(arr,5);

    cout<<"Addition of sum of all even numbers is : "<<iRet<<"\n";
    
    return 0;
}