# include <vector>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            if (matrix.empty() || matrix[0].empty()) return {};
    
            vector <int> ans ;
    
            int totalRow = matrix.size() ;
            int totalCol = matrix[0].size();
    
            int total = totalRow * totalCol ;
            int count = 0 ;
    // indexes of starting and ending rows and columns
            int startRow = 0;
            int endRow = totalRow - 1;
            int startCol = 0;
            int endCol = totalCol - 1;
    
            while (count < total){
    // printing the first row
                for (int index = startCol ; count < total && index <= endCol ; index++){
                    ans.push_back(matrix [startRow][index]);
                    count ++;
                }
                startRow++;
    //printing the last column
                for (int index = startRow ; count < total && index <= endRow ; index ++ ){
                    ans.push_back (matrix [index][endCol]);
                    count ++ ;
                }
                endCol--;
    // printing the last row
                for (int index = endCol ; count < total && index >= startCol ; index -- ){
                    ans.push_back (matrix [endRow][index]);
                    count ++ ;
                }
                endRow--;
    // printing the first column
                for (int index = endRow ; count < total && index >= startRow ; index -- ){
                    ans.push_back (matrix [index][startCol]);
                    count ++ ;
                }
                startCol++;
            }
            return ans;
        }
    };