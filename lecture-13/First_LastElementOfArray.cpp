#include<iostream>
using namespace std;
// this funtion can find last and first occerance both but i was unable to give output -1 if not found
// void binary_search(int arr[], int size, int key){
//     int start = 0;
//     int end = size -1;
//     while(start<=end){
//         int mid=(start + end)/2;
//         if (key==arr[mid]){
//             start = mid;
//             end = mid;
//             while(key==arr[start]){
//                 start--;
//             }
//             cout<<++start<<" ";
//             while(key==arr[end]){
//                 end++;
//                 if(end==10){
//                     break;
//                 }
//             }
//             cout<<--end;
//             break;
//         }
//         else if (key<=arr[mid]){
//             end = mid -1;
//         }
//         else if (key>=arr[mid]){
//             start = mid +1;
//         }
//     }
// }
int firstOccerance(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int ans = -1;
    while(start<=end){
        int mid=(start + end)/2;
        if (key==arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if (key<=arr[mid]){
            end = mid -1;
        }
        else if (key>=arr[mid]){
            start = mid +1;
        }
    }
    return ans;
}
int lastOccerance(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int ans = -1;
    while(start<=end){
        int mid=(start + end)/2;
        if (key==arr[mid]){
            ans = mid;
            start = mid +1;
        }
        else if (key<=arr[mid]){
            end = mid -1;
        }
        else if (key>=arr[mid]){
            start = mid +1;
        }
    }
    return ans;
}
int main() {
    int arr[10]={0,0,2,2,2,4,4,8,8,9};
    int start=0;
    int end=10;
    // int first = -1;
    // int last = -1;
    int key=8;
    //binary_search(arr, 10, key);
    cout<<firstOccerance(arr, 10, key)<<" ";
    cout<<lastOccerance(arr, 10, key);
    return 0;
}

// pairs 
/*  
only returns pair
in the line below 
return data type is pair followed by function name and parameters
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair <int , int> p;
    p.first = firstOccerance(arr, n, k);
    p.second = lastOccerance(arr, n, k);

    return p;
}
*/