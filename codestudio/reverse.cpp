#include<iostream>
using namespace std;

int main() {
    int N, reverse = 0;
    cin >> N;  // Input the number

    while (N != 0) {
        reverse = reverse * 10 + N % 10;  // Append the last digit to reverse
        N /= 10;  // Remove the last digit from N
    }

    cout << reverse << endl;  // Output the reversed number

    return 0;
}
