#include<iostream>
using namespace std;
void update1 (int n){
    n++;
}
void update2 (int& n){
    n++;
}
int main() {
    //reference variable have different names refereng to same memory location
    // eg. int i = 5 ; have address 710 then j will also have address 710 and have same value as i

    // int i = 5;
    // //reference variable
    // int& j = i;
    // i++;
    // cout<<i<<endl;;
    // j++;
    // cout<<i;
    int i=5;
    cout<<"before"<<i<<endl;
    update1(i);
    cout<<"After"<<i<<endl;
    cout<<"before"<<i<<endl;
    update2(i);
    cout<<"After"<<i<<endl;
    return 0;
}