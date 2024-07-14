#include<iostream>
#include<limits.h>
using namespace std;

template<class T>
void reverse(T *arrayX, int iSize)
{
    T temp;
    int i = 0;

    for(i = 0; i < iSize / 2; i++)
    {
        temp = arrayX[i];
        arrayX[i] = arrayX[iSize - 1 - i];
        arrayX[iSize - 1 - i] = temp;
    }
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

    reverse(arr,arrLen);

    cout << "Elements of array after reversing are\n";
    for(i = 0; i< arrLen; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "Enter number of floating point numbers to be provided\n";
    cin >> brrLen;
    brr = new float[brrLen];

    cout << "Enter the floating point numbers\n";
    for(i = 0; i< brrLen; i++)
    {
        cin >> brr[i];
    }
    
    reverse(brr,brrLen);

    cout << "Elements of array after reversing are\n";
    for(i = 0; i< brrLen; i++)
    {
        cout << brr[i] << "\t";
    }
    cout << endl;

    free(arr);
    free(brr);

    return 0;
}