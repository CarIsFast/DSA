#include<iostream>
using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // to check wheather the matrix empty or not
//         if (matrix.empty() || matrix[0].empty()) return false;

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int s = 0;
//         int e = row*col-1;
//         int mid = s + (e-s)/2;
        
//         while(s<=e){
//             //here mid/col is the number of row and mid%col is the number of col 
//             int element = matrix[mid/col][mid%col];
//             if(element==target){
//                 return true;
//             }
//             else if(element < target){
//                 s = mid+1;
//             }
//             else{
//                 e=mid-1;
//             }

//             mid = s + (e-s)/2;
//         }
//         return false;
//     }
// };
int main() {
    
    return 0;
}
