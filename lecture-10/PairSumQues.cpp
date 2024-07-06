#include<iostream>
using namespace std;

int main() {
    int arr[6]={2,-3,3,3,-2};
    int s=0;
    for (int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if((arr[i]+arr[j])==s){
                cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
            }
        }
    }
    return 0;
}