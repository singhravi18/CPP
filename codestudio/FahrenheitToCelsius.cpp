#include <iostream>
using namespace std;

int main() {
    int S, E, W;
    cin >> S >> E >> W;
    
    for (int f = S; f <= E; f += W) {
        int c = (5 * (f - 32)) / 9; // Convert Fahrenheit to Celsius
        cout << f << "\t" << c << endl; // Print table with tab separation
    }
    
    return 0;
}
