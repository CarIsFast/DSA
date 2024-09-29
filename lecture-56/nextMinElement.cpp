// next smaller element
//#include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     vector <int> ans(n);
//     stack<int> s;
//     s.push(-1);
//     for (int i=n-1; i>=0; i--){
//         int curr = arr[i];

//         while(curr <= s.top()){
//             s.pop();
//         }

//         ans[i] = s.top();
//         s.push(curr);
//     }

//     return ans;
// }


// my approch

// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     vector <int> ans;
//     stack<int> s;
//     for (int i=n-1; i>=0; i--){
//         if(!s.empty() && arr[i] > s.top()){
//             ans.push_back(s.top());
//             s.push(arr[i]);
//         }else if(!s.empty() && arr[i] <= s.top()){
//             while(s.top() >= arr[i]){
//                 s.pop();
//                 if(s.empty()) break;
//             }
//             if(s.empty()){
//                 ans.push_back(-1);
//             }else{
//                 ans.push_back(s.top());
//             }
//             s.push(arr[i]);
//         }else if(s.empty()){
//             ans.push_back(-1);
//             s.push(arr[i]);
//         }

//     }
//     int i=0; int j=n-1;
//     while(i <= j){
//         swap(ans[i], ans[j]);
//         i++;
//         j--;
//     }
//     return ans;
// }

//most easy approch

//  for (int i=n-1; i>=0; i--){
//         int curr = arr[i];

//         while(curr <= s.top()){
//             s.pop();
//         }

//         ans.push_back(s.top());
//         s.push(curr);
//     }


// more easy approch
// for (int i=n-1; i>=0; i--){
//         if(arr[i] > s.top()){
//             ans.push_back(s.top());
//             s.push(arr[i]);
//         }
//         else if (arr[i] <= s.top()){
//             while(arr[i] <= s.top()){
//                 s.pop();
//             }
//             ans.push_back(s.top());
//             s.push(arr[i]);
//         }
//     }