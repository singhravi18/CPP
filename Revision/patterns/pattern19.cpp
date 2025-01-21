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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        for (col = 1; col <= (n - row + 1); col++)
        {

            cout << "*" ;
        }
        cout << endl;
    }
}