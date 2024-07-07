#include<iostream>
#include<vector>
using namespace std;
void solve(string &s, int i){
    //base case
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    //firet solution
    for (int j=i; j<s.length(); j++){
        swap(s[i],s[j]);
        solve(s,i+1);
        //back tracking
        swap(s[i],s[j]);
    }
}
int main() {
    string s = "abc";
    solve(s,0);
    return 0;
}