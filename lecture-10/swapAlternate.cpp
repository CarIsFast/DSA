#include<iostream>
using namespace std;

int main() {
    int even[6]={1,2,3,4,5,6};
    int j=0;
    for (int i=0 ; i<6; i+=2){
        
        swap(even[i],even[i+1]);
        cout<<i<<endl;
    }
    for (int i = 0; i<6; i++){
        cout <<even[i]<<" ";
    }
    cout<<endl;
    int odd[5]={1,2,3,4,5};

    for (int i=0 ; i<5; i+=2){
        if(i+1<5){
        swap(odd[i],odd[i+1]);}
        cout<<i<<endl;
    }
    for (int i = 0; i<5; i++){
        cout <<odd[i]<<" ";
    }
        
    return 0;
    }
