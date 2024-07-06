#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = (s+e)/2;
    while (s<e){
        if (arr[mid]>=arr[0]){
            s = mid +1;
        }
        else {
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}
int main() {
    int arr[7]= {7,1,2,3,4,5,6};
    cout<<findPivot(arr, 7);
    return 0;
}