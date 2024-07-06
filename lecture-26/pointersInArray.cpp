#include<iostream>
using namespace std;

int main() {
    int arr[10]={23,56,78,89};

    cout<<"address of first memory location is "<<arr<<endl;
    cout<<"address of first memory location is "<<&arr[0]<<endl;    
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr)+2<<endl;

    cout<<arr[2]<<" "<<*(arr+2)<<" "<<2[arr]<<endl;
    return 0;
}