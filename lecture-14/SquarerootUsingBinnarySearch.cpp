#include<iostream>
using namespace std;

// int BS(int arr[], int size, int key){
//     int s = 0;
//     int e = size -1;
//     int mid = (s+e)/2;
//     while (s<=e){
//         if ((mid*mid) > key){
//             e = mid -1;
//         }
//         if((mid*mid)<key && ((mid+1)*(mid+1))<key){
//             s = mid +1;
//         }
//         if((mid*mid)<key && ((mid+1)*(mid+1))>key){
//             return mid;
//         }
//         mid = (s+e)/2;
//     }
   
// }
long long int binarySearch(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;
        
        while(s<=e){
            long long int square = mid * mid;
            if(square == n){
                return mid;
            }
            else if (square > n){
                e = mid - 1;
            }
            else {
                s = mid + 1;
                ans = mid;
            }
            mid = s + (e-s)/2;
        }
        return ans;
}
double morePreicision(int n,int pri, int tempsol){
    double factor=1;
    double ans = tempsol;
    for (int i = 0; i<pri; i++){
        factor = factor/10;
        
        for (double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main() {
    //int arr[11]={0,1,2,3,4,5,6,7,8,9,10};
    //cout<<BS(arr, 11, 10);

    // For this code no nedd of an array
    //cout<<binarySearch(50);
    int n;
    cout<<"Enter the number  ";
    cin >> n;
    int tempsol = binarySearch(n);
    int pri;
    
    cout << "Enter the pricision you want ";
    cin >> pri;
    cout<<"Answer is "<< morePreicision(n,pri, tempsol);


    return 0;
}