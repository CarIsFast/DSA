#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l;
    list<int> n(6,100);
    l.push_back(5);
    l.push_front(2);
    for(int i : n){
        cout<<i<<" ";
    }
    l.push_front(2);
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    // pop_back  pop_front size

    return 0;
}