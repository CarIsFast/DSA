#include<iostream>
using namespace std;
void LRsolve(string s, int x,int i, int &ans){
    if(i > s.length()){
        return;
    }
    if(s[i] == x){
        ans=i;
    }
    LRsolve(s,x,i+1,ans);
}
void RLsolve(string s, int x,int i, int &ans){
    if(i < 0){
        return;
    }
    if(s[i] == x){
        ans=i;
        return;
    }
    RLsolve(s,x,i-1,ans);
}
int main() {
    string s = "sjdkbjfsdhf";
    char x='d';
    int ans = -1;
    // LRsolve(s,x,0, ans);
    RLsolve(s,x,s.length()-1,ans);
    cout<<ans;
    return 0;
}