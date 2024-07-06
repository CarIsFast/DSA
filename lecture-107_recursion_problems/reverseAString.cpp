#include<iostream>
using namespace std;
void solve(string& str, int s, int e){
    if(s>=e)
        return;
    swap(str[s],str[e]);
    solve(str, s+1, e-1);
}
int main() {
    string str = "ahgshdgi";
    int s=0;
    int e=7;
    solve(str, s, e);

    cout<<str;
    return 0;
} 