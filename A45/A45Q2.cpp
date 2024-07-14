#include<iostream>
#include<limits.h>
using namespace std;

template<class T>
int frequency(T *arrayX, int iSize, T value)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arrayX[i] == value)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int *arr = NULL;
    float *brr = NULL;
    int arrLen = 0, brrLen = 0, i = 0, iSearch = 0;
    float fSearch = 0.0f;

    cout << "Enter number of integers to be provided\n";
    cin >> arrLen;
    arr = new int[arrLen];

    cout << "Enter the integer elements\n";
    for(i = 0; i< arrLen; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search" << endl;
    cin >> iSearch;

    int iFreq = frequency(arr,arrLen,iSearch);
    cout << iFreq << endl;;

    cout << "Enter number of floating point numbers to be provided\n";
    cin >> brrLen;
    brr = new float[brrLen];

    cout << "Enter the floating point numbers\n";
    for(i = 0; i< brrLen; i++)
    {
        cin >> brr[i];
    }

    cout << "Enter the element to search" << endl;
    cin >> fSearch;
    
    iFreq = frequency(brr,brrLen,fSearch);
    cout << iFreq << endl;

    free(arr);
    free(brr);

    return 0;
}