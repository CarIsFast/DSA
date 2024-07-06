#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr1[4]={3,5,8,2};
    int arr2[3]={4,6,8};
    vector<int> ans;
    int i=3,j=2;
    int carry=0;
    while (i>=0 || j>=0){
        int val1 = (i>=0) ? arr1[i] : 0;
        int val2 = (j>=0) ? arr2[j] : 0;

        int sum = val1+val2+carry;

        carry = sum/10;
        sum=sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }
    int size = ans.size();
    for(int i=0; i<size; i++){
        cout<<ans[size-i-1];
    }
    return 0;
}