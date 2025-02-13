#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;

    if (m < 0 || m >= arr.size())
    {
        return;
    }

    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}