#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr, int iSize, T value)
{
    int i = 0;
    bool bFlag = false;

    for(i = 0;i < iSize; i++)
    {
        if(arr[i] == value)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
} 
int main()
{
    int arr[]={10,20,30,10,50};
    bool bRet = false;

    bRet = Search(arr,5,30);

    if(bRet == true)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"Element is not present";
    }
    

    return 0;
}