#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n " << endl;
    cin >> n;

    int row, col;

    for (row = 1; row <= n; row++)
    {
        char start = 'A' + n - row;
        for (col = 1; col <= row; col++)
        {

            cout << start << " ";
            start = start + 1;
        }
        cout << endl;
    }
}