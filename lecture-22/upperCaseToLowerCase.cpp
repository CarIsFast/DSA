#include<iostream>
using namespace std;

int to_lowerCase(char i){
    if(i>='a' && i<='z'){
        return i;
    }
    else{
        int temp = i - 'A';
        temp = temp + 'a';
        return temp;
    }
}
int main() {
    char ans = to_lowerCase('G');
    cout<<ans;
    return 0;
}