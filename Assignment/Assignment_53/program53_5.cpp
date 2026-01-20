#include<iostream>
using namespace std;

template<class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int i = 0;
    
    printf("before replacing :\n");
    for(i = 0;i < iSize; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
    printf("after replacing :\n");
    for(i = 0;i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
        printf("%d\t",arr[i]);  
    }
    
} 
int main()
{
    int arr[]={10,20,30,10,50};

    Replace(arr,5,10,77);

    return 0;
}