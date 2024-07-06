#include<iostream>
using namespace std;

char toLowerCase(char i){
    if((i >= 'a' && i <='z')|| (i>= '0' && i <='9')){
        return i;
    }
    else {
        char temp = i - 'A';
        temp  = temp + 'a';
        return temp;
    }
}
bool checkPalindrom(string a){
    int s =0;
    int e= a.size()-1;
    for(int i=0; i<a.size(); i++){
        if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main() {
    
    string s={};
    cin>>s;
    string temp={};
    //removing unwanted characters
    for(int i=0; i<s.size(); i++){
        if((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z') || (s[i] >= '0' && s[i] <='9')){
            temp.push_back(s[i]);
        }
    }
    //making lowercase
    for(int i=0; i<temp.size(); i++){
        temp[i]=toLowerCase(temp[i]);
    }
    //checking for palindrome
    cout<<checkPalindrom(temp);
    return 0;
}