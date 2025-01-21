#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{

    int num = factorial(n);
    int denum = factorial(r) * factorial(n - r);

    return num / denum;
}

int main()
{

    int n , r;
    cin >> n >> r;

    cout << "The value of nCr is "<< nCr(n , r);
}
