#include <iostream>
using namespace std;

int main()
{

    int a, b;
    char op;

    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    cout << "Enter the opeartion that you want to perform" << endl;
    cin >> op;

    switch (op)
    {

    case '+':
        cout << "The sum is" << a + b << endl;
        break;

    case '-':
        cout << "The difference is" << a - b << endl;
        break;

    case '*':
        cout << "The product is" << a * b << endl;
        break;

    case '/':
        cout << "The division is" << a / b << endl;
        break;

    case '%':
        cout << "The remainder is " << a % b << endl;
        break;

    default:
        cout << "Enter the correct operation" << endl;
    }
}