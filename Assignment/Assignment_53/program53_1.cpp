#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int i = 0;

    for(i = 0;i < iSize; i++)
    {
        dest[i] = src[i];    
    }

} 
int main()
{
    int src[]={10,20,30,40,50};
    int dest[] = {'\0'};

    CopyArray(src,dest,5);

    for(int i = 0; i < 5; i++)
    {
        cout << dest[i] << "\t";
    }

    return 0;
}