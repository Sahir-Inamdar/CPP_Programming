#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize) 
{
    int iCnt = 0;
    int Counter = 0;
    T temp[iSize];

    for(iCnt = iSize-1 ; iCnt >= 0 ; iCnt--)
    {
        temp[Counter] = arr[iCnt];
        Counter++;
    }
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        arr[iCnt] = temp[iCnt];
    }

}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; // 10 20 30 10 30 40 10 40 10
    }

    cout<<"\n";

    Reverse(arr,9); 

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; // 10 40 10 40 30 10 30 20 10
    } 

    return 0;
} 