#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n " << endl;
    cin >> n;

    int row, col;
    char count = 'A';

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {

            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}