#include<iostream>
#include<limits.h>
using namespace std;

template<class T>
T min(T *arrayX, int iSize)
{
    T min = arrayX[0];
    int i = 0;

    for(i = 1; i < iSize; i++)
    {
        if(min > arrayX[i])
        {
            min = arrayX[i];
        }
    }

    return min;
}

int main()
{
    int *arr = NULL;
    float *brr = NULL;
    int arrLen = 0, brrLen = 0, i = 0;

    cout << "Enter number of integers to be provided\n";
    cin >> arrLen;
    arr = new int[arrLen];

    cout << "Enter the integer elements\n";
    for(i = 0; i< arrLen; i++)
    {
        cin >> arr[i];
    }

    int iMin = min(arr,arrLen);
    cout << iMin << endl;;

    cout << "Enter number of floating point numbers to be provided\n";
    cin >> brrLen;
    brr = new float[brrLen];

    cout << "Enter the floating point numbers\n";
    for(i = 0; i< brrLen; i++)
    {
        cin >> brr[i];
    }
    
    float fMin = min(brr,brrLen);
    cout << fMin << endl;

    free(arr);
    free(brr);

    return 0;
}