#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main() {
    //unordered_map <string,int> m;  
    map <string,int> m;  

    //insertion
    cout<<"insertion"<<endl;
    //1
    pair<string,int> p1 = make_pair("car1",1);
    m.insert(p1);

    //2
    pair<string,int> p2 ("car2",2);
    m.insert(p2);

    //3
    m["car3"] = 3;

    //search
    cout<<"search"<<endl;
    cout<<m["car1"]<<endl;
    cout<<m.at("car2")<<endl;
    cout<<m["un1"]<<endl;
    cout<<m["un2"]<<endl;
    cout<<m.at("un1")<<endl;
    cout<<m.at("un2")<<endl;

    //m.at() will show an error if the key does not 
    //exist in the hash map. but m[] will create a key and assign 0
    //to it so error will not be shown

    //size
    cout<<"size"<<endl;
    cout<<m.size()<<endl;

    //to check presence
    cout<<"to check presence"<<endl;
    cout<<m.count("car5")<<endl;
    cout<<m.count("car1")<<endl;
    //wil return 0 if not present and 1 if presnt

    //erase
    cout<<"erase"<<endl;
    m.erase("car2");
    cout<<m.size()<<endl;

    //iteration
    //unordered_map<string,int> :: iterator it = m.begin();
    map<string,int> :: iterator it = m.begin();
    while ( it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;
}