#include<iostream>
using namespace std;

template<class T>
T addN(T *arrayX, int iSize)
{
    T sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        sum += arrayX[i]; 
    }

    return sum;
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

    int iSum = addN(arr,arrLen);
    cout << iSum << endl;;

    cout << "Enter number of floating point numbers to be provided\n";
    cin >> brrLen;
    brr = new float[brrLen];

    cout << "Enter the floating point numbers\n";
    for(i = 0; i< brrLen; i++)
    {
        cin >> brr[i];
    }
    
    float fSum = addN(brr,brrLen);
    cout << fSum << endl;

    free(arr);
    free(brr);

    return 0;
}