#include<iostream>
using namespace std;

int main() {
    
    int choice = 0;
    do{
        cin >> choice;
        switch (choice){
            case 1:
                cout<<"case 1";
                break;
            case 2:
                cout<<"case 2";
                continue;
            case 3:
                cout<<"3";
            case 4:
                cout<<"Exit";
                break;    
        }
    }while (choice!=4);
    return 0;
}