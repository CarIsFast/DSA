#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> a(5,10); //(size, initial value)
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    
    cout<<"size-> "<<v.size()<<endl;
    v.clear();
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;
    return 0;
}