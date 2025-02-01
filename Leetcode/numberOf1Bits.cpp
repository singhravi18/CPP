class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            count += n & 1;  // Add 1 if the least significant bit is 1
            n >>= 1;  // Right shift n by 1 to check the next bit
        }
        return count;
    }
};
