# include<iostream>
# include <bits/stdc++.h>
# include<vector>
using namespace std;


class Solution {
    public:
        string convertDateToBinary(string date) {
            int year = stoi(date.substr(0, 4));
            int month = stoi(date.substr(5, 2));
            int day = stoi(date.substr(8, 2));
            
            string binaryYear = bitset<12>(year).to_string();
            string binaryMonth = bitset<4>(month).to_string();
            string binaryDay = bitset<5>(day).to_string();
            
            // Remove leading zeroes
            binaryYear = binaryYear.substr(binaryYear.find('1'));
            binaryMonth = binaryMonth.substr(binaryMonth.find('1'));
            binaryDay = binaryDay.substr(binaryDay.find('1'));
            
            return binaryYear + "-" + binaryMonth + "-" + binaryDay;
        }
    };
    