#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> a;
    a.push_back(5);
    a.push_front(10);
    a.push_back(24);
    a.pop_back();
    cout<<a.at(1);
    //a.pop_front();
    cout<<a.size();
    a.erase(a.begin(),a.begin()+1);
    cout<<a.size();

    return 0;
}