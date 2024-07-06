#include<iostream>
using namespace std;

void rev(string &s, int i, int j){
    if(i>j){
        return;
    }
    else{
        swap(s[i], s[j]);
        rev(s,i+1,j-1);
    }
}

int main() {
    string s = "abcde";
    rev(s, 0, 4);
    cout<<s;
    return 0;
}