#include<iostream>
using namespace std;
void update(int **p){
    // p=p+1;
    //no change

    // *p=*p+1;
    // value at p1 changed

    **p=**p+1;
    //vale change at i
}
int main() {
    int i=5;
    int *p1=&i;
    int **p2=&p1;

    // cout<<"preinting p1 "<<p1<<endl;
    // cout<<"address of p1 "<<&p1<<endl;

    // cout<<*p2<<endl;
    // cout<<**p2;

    // cout<<"before "<<i<<endl;
    // cout<<"before "<<p1<<endl;
    // cout<<"before "<<p2<<endl;
    // update(p2);
    // cout<<"after "<<i<<endl;
    // cout<<"after "<<p1<<endl;
    // cout<<"after "<<p2<<endl;
    
    return 0;
}