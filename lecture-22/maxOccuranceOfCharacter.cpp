#include<iostream>
using namespace std;
//can use char getMaxChar(string s)
int getMaxChar(string s){
    int arr[26]={0};
    int size = s.length();

    for(int i=0; i<size; i++){
        char ch = s[i];
        int num = 0;
        if(ch >='a' && ch<='z'){
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }
        arr[num]++;
    }
    int maxi =-1;
    int ans=0;
    for (int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    //can use char final
    int final = 'a'+ ans;
    return final;
}
int main() {
    string s;
    cin>>s;
    char ans=getMaxChar(s);
    cout<<ans;
    return 0;
}