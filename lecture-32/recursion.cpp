#include<iostream>
using namespace std;
void reachHome(int s, int d){
    cout<<s<<endl;
    if(s==d){
        cout<<"reache Home"<<endl;
        return;
    }
    s++;
    reachHome(s,d);
}
int main() {
    int destination = 10;
    int scorce = 1;

    reachHome(scorce, destination);
    return 0;
}