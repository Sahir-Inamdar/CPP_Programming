#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *arr, int iSize)
{
    int i = 0;
    T Sort = arr[0];
    bool bFlag = false;

    for(i = 0 , bFlag = true;i < iSize; i++)
    {
        if(arr[i] < Sort) 
        {
            bFlag = false;
            break;
        }  
        Sort = arr[i];
    }
    return bFlag;

} 
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    bool iRet = CheckSorted(arr,5);
    if(iRet == false)
    {
        printf("Array is not sorted\n",iRet);
    }
    else
    {
        printf("Array is sorted\n",iRet);
    }

    bool fRet = CheckSorted(brr,4);
    if(fRet == false)
    {
        printf("Array is not sorted\n",fRet);
    }
    else
    {
        printf("Array is sorted\n",fRet);
    }

    return 0;
}