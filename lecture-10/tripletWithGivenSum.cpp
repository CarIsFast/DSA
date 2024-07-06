#include<iostream>
using namespace std;

int main() {
    int arr[6]={ 1,2,3,4,5,6};
    int s=12;
    for(int i=0; i<6; i++){
        cout<<"loop 1"<<endl;
        for(int j=i+1; j<6; j++){
            cout<<"loop 2"<<endl;
            for(int k=j+1; k<6; k++){
                cout<<"loop 3"<<endl;
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }  
    return 0;
}