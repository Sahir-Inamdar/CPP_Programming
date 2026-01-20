#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 0;
    int iPos = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iCount++;
        if(arr[iCnt] == iNo )
        {
            iPos = iCount;
        }
    }

    return iPos;
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);

    cout<<iRet;

    return 0;
} 