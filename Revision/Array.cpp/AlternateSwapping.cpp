#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout  << arr[i] << " " ;

    }
    cout << endl;
}

int main()
{

    int arr[8] = {2, 4, 3, 5, 6, 7, 8, 9};
    int brr[5] = {1, 2, 3, 4, 5};

    swapAlternate(arr, 8);
    printArray(arr, 8);

    swapAlternate(brr, 5);
    printArray(brr, 5);
}