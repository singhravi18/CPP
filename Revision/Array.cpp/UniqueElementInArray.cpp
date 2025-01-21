#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int element = 0;
    for (int i = 0; i < size; i++)
    {

        element = arr[i] ^ element;
    }

    return element;
}

int main()
{
    int arr[5] = {10,4,10,4,5};

    int result = unique (arr , 5);

    cout << result ;
}