# include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit to the first
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {  // If the digit is less than 9, simply increment and return
                digits[i]++;
                return digits;
            }
            digits[i] = 0;  // If it's 9, set it to 0 and continue
        }
        
        // If we are here, that means all digits were 9 (e.g., 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
