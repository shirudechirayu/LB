#include<iostream>
#include<limits.h>
using namespace std;

template<class T>
T max(T *arrayX, int iSize)
{
    T max = arrayX[0];
    int i = 0;

    for(i = 1; i < iSize; i++)
    {
        if(max < arrayX[i])
        {
            max = arrayX[i];
        }
    }

    return max;
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

    int iMax = max(arr,arrLen);
    cout << iMax << endl;;

    cout << "Enter number of floating point numbers to be provided\n";
    cin >> brrLen;
    brr = new float[brrLen];

    cout << "Enter the floating point numbers\n";
    for(i = 0; i< brrLen; i++)
    {
        cin >> brr[i];
    }
    
    float fMax = max(brr,brrLen);
    cout << fMax << endl;

    free(arr);
    free(brr);

    return 0;
}