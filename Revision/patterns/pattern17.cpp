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
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        for (col = 1; col <= row; col++)
        {

            cout << "*" ;
        }
        cout << endl;
    }
}