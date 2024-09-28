// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
//   // Write your code here
//   if(str.length() % 2 != 0){
//     return -1;
//   }
//   stack <char> s;
//   int cost = 0;
//   int open =0;
//   int close =0;
//   for(char c : str){
//     if (c == '{') {
//       s.push(c);
//       open++;
//     } else if (!s.empty() && c == '}' && s.top() == '{'){
//       s.pop();
//       open--;
//     }else{
//       s.push(c);
//       close++;
//     }
//   }
  
//   if(s.size() == 0) {
//     return 0;
//   }
  
//   cost = (open + 1)/2 + (close+1)/2;
//   return cost;

// }