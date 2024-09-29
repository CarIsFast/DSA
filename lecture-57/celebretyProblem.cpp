// // My approch
// class Solution {
//   public:
//     // Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& mat) {
//         // code here
//         int m = mat.size();
//         int n = mat[0].size();
//         int presentCeleIndex = -1;
//         for(int row = 0; row<m; row++){
//             int cele = 1;
//             for(int col = 0; col<n; col++){
//                 if(mat[row][col] == 1){
//                     cele = 0;
//                 }
//             }
//             if(cele){
//                 int celeColumn = row;
//                 for(int i = 0; i<m; i++){
//                     if(celeColumn == i){
//                         continue;
//                     }
//                     if(mat[i][celeColumn] == 0){
//                         presentCeleIndex = -1;
//                         return presentCeleIndex;
//                         break;
//                     }
//                 }
//                 presentCeleIndex = row;
//                 break;
                
//             }
//         }
//         return presentCeleIndex;
//     }
// };

// luv babber code

// class Solution {
//   public:
//       bool knows(int a, int b, vector<vector<int> >& mat){
//             if(mat[a][b] == 1){
//                 return true;
//             }
            
//             return false;
//       }
//     // Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& mat) {
//         // code here
//         stack <int> s;
        
//         for(int i=0; i<mat.size(); i++){
//             s.push(i);
//         }
        
//         while(s.size() > 1){
            
//             int a = s.top();
//             s.pop();
            
//             int b = s.top();
//             s.pop();
            
//             if(knows(a,b, mat)){
//                 s.push(b);
//             }else{
//                 s.push(a);
//             }
//         }
        
//         int possibleCele = s.top();
        
//         bool rowCheck = true;
//         for(int i=0; i<mat.size(); i++){
//             if(mat[possibleCele][i] == 1){
//                 rowCheck = false;
//                 return -1;
//             }
//         }
        
//         bool colCheck = true;
//         for(int i=0; i<mat.size(); i++){
//             if(i == possibleCele){
//                 continue;
//             }
//             if(mat[i][possibleCele] == 0){
//                 colCheck = false;
//                 return -1;
//             }
//         }
        
//         if(rowCheck && colCheck){
//             return possibleCele;
//         }
//     }
// };