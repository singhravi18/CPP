#include <iostream>
using namespace std;

void selection(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {

            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[7] = {5, 67, 89, 43, 56, 3, 7};

    selection(arr, 7);

    cout << "The sorted array is " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}