#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i<n; i++){
        if (pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main() {
    int n,m;
    int arr[5]={10,15,20,25,30};
    m=2;
    cout<<allocateBooks(arr, 5, 2);
    return 0;
}
// #include<vector>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }