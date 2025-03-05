# include <iostream>
# include <vector>
using namespace std;

class Solution {
    public:
        bool areNumbersAscending(string s) {
            int prev = -1; // Initialize previous number as -1 (smaller than any positive number)
            int num = 0;
            bool hasNum = false;
            
            for (char c : s) {
                if (isdigit(c)) {
                    num = num * 10 + (c - '0'); // Forming multi-digit numbers
                    hasNum = true;
                } else if (hasNum) {
                    if (num <= prev) return false; // Check strictly increasing condition
                    prev = num; // Update previous number
                    num = 0; // Reset num for the next number
                    hasNum = false;
                }
            }
            
            if (hasNum && num <= prev) return false; // Final check for last number
            
            return true;
        }
    };
    