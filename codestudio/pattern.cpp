#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Take input for the number of rows
    
    for (int i = 1; i <= n; i++) {  // Loop for each row
        for (int j = i; j < i + i; j++) {  // Loop to print the required numbers in each row
            cout << j;  // Print the number
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
