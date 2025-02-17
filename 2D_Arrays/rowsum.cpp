#include <iostream>
using namespace std;

void rowSum(int arr[][4], int n, int m)
{

    cout << "Printing the sum" << endl;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
           
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][4];

    // Taking row wise inputs
    cout << "Enter the elements in the 2-D Array" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Taking column wise inputs
    // cout << "Enter the elements in the 2-D Array"<<endl;

    // for (int j = 0 ; j < 4 ; j ++){
    //     for (int i = 0 ; i < 3 ; i ++){
    //         cin >> arr[i][j] ;
    //     }
    // }

    cout << "Printing the elements entered in the Array " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowSum(arr, 3, 4);

    // for (int i = 0 ; i < 3 ; i ++){
    //     for (int j = 0 ; j < 4 ; j ++){
    //         cout << arr[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
}