#include<iostream>
using namespace std;
int factorial(int n){
    //base case. it is mandatory and tell us when to stop
    if(n==0)
        return 1;
    return n * factorial (n-1);
}
int main() {
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}