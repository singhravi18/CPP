#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{
    bool Isswapped;
    for (int i = 1; i < size; i++)
    {
        Isswapped = false;

        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                Isswapped = true;
            }
        }
        if (Isswapped == false){
            break;
        }
    }
}

int main()
{
    int arr[7] = {55, 67, 89, 3, 54, 87, 53};

    cout << arr;

    bubble(arr, 7);

    cout << "The sorted array is" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}