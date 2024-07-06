#include<iostream>
using namespace std;

int main() {
    // int num = 5;

    // cout<<"value at NUM  is "<<num<<endl;
    // cout<<"address at num is "<<&num<<endl;

    // int *ptr = &num;
    // cout<<"address at ptr is"<<ptr<<endl;
    // cout<<"value at ptr is "<<*ptr<<endl;

    //coping a pointer
    int i=5;
    int *p = &i;
    int *q = p;

    cout<<p<<" _ "<<q<<endl;
    cout<<*p<<" _ "<<*q<<endl;

    return 0;
}