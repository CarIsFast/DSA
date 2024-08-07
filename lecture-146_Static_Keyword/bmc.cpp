#include <iostream>
#include <vector>

using namespace std;

int processArray(vector<int>& arr) {
    int writeIndex = 0; 
    int i = 0;          

    while (i < arr.size()) {
       
        if (arr[i] % 2 != 0) {
           
            int j = i;
           
            while (j < arr.size() && arr[j] % 2 != 0) {
                j++;
            }
            
            arr[writeIndex++] = arr[j - 1];

            i = j;
        } else {
            
            arr[writeIndex++] = arr[i++];
        }
    }
    
   
    return writeIndex;
}

int main() {
    vector<int> arr;
    int num;

    
    while (true) {
        cin>>num;
        if(num<0){
            break;
        }
        arr.push_back(num);
    }

   
    int newSize = processArray(arr);

    
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
