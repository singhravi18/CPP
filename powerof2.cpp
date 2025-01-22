#include <iostream>
using namespace std;

bool isPowerOftwo(int n)
{
    int ans = 1;

    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }

        if (ans < INT32_MAX / 2)
        {
            ans = ans * 2;
        }
    }
    return false;
}

int main()
{
    int n;

    cout << "Enter the value to check whether it is power of 2 or not" << endl;
    cin >> n;

    if (isPowerOftwo(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}