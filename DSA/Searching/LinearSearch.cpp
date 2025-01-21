#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    int index;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            return 1;
        
        }
    
    }
        
    return 0;
}



int main()
{

    int arr[10] = {1, 5, 15, 16, 4, 17, 12, 14, 19, 30};

    int key;
    int index;
    cout <<"Enter the element to search from the array" << endl;
    cin >> key;

    int found = search(arr, 10, key);

    if (found)
    {
        cout << "Element is found " << endl;
    }

    else {
        cout << "Element not found" << endl;
    }
    
        
    
}