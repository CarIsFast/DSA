#include<iostream>
using namespace std;

void print (int *p){
    cout<<p<<endl;
}

void update(int *p){
    //p=p+1;
    //cout<<"in update fucetion "<<p<<endl;

    //we can only update the value to which ptr is pointing to
    *p = *p+1;
}
//we can also write
// void getsum (int *arr, int n)
void getSum(int arr[], int n){
    cout<<"size ; "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum;
}
int main() {
    /*
    int num=5;
    int *p=&num;

    //print(p);
    //will nto update
    cout<<"Before "<<p<<endl;
    update(p);
    cout<<"After "<<p<<endl;
    cout<<*p<<endl;
    */
    int arr[5]={5,4,3,2,1};
    getSum(arr, 5);

    return 0;
}