// class Solution {
// public:
//     vector<int> nextSmallerElement(vector<int> &arr, int n)
//     {
//         // Write your code here.
//         vector <int> ans(n);
//         stack<int> s;
//         s.push(-1);
//         for (int i=n-1; i>=0; i--){
//             int curr = arr[i];

//             while(s.top()!=-1 && curr <= arr[s.top()]){
//                 s.pop();
//             }

//             ans[i] = s.top();
//             s.push(i);
//         }

//         return ans;
//     }
//     vector<int> prevSmallerElement(vector<int> &arr, int n)
//     {
//         // Write your code here.
//         vector <int> ans(n);
//         stack<int> s;
//         s.push(-1);
//         for (int i=0; i<n; i++){
//             int curr = arr[i];

//             while(s.top()!=-1 && curr <= arr[s.top()]){
//                 s.pop();
//             }

//             ans[i] = s.top();
//             s.push(i);
//         }

//         return ans;
//     }
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> next(n);
//         next = nextSmallerElement(heights, n);

//         vector<int> prev(n);
//         prev = prevSmallerElement(heights, n);

//         int area = INT_MIN;
//         for(int i=0; i<n; i++){
//             int l = heights[i];

//             if(next[i] == -1){
//                 next[i] = n;
//             }
//             int b = next[i] - prev[i] -1;

//             int newArea = l*b;
//             area = max(area, newArea);

//         }
//         return area;
//     }
// }