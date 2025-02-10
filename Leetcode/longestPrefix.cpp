# include <iostream>
# include <bits/stdc++.h>
# include <vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
            
            // Sort the array
            sort(strs.begin(), strs.end());
            
            // Compare the first and last strings (which will have the minimum common prefix)
            string first = strs[0];
            string last = strs[strs.size() - 1];
            int i = 0;
            
            // Find the common prefix between first and last strings
            while (i < first.size() && i < last.size() && first[i] == last[i]) {
                i++;
            }
            
            return first.substr(0, i);
        }
    };
    