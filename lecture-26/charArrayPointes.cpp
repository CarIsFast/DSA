#include<iostream>
using namespace std;
//in c++ points have different implimentation for char and int
int main() {
    int arr[10];
    int *ptr=&arr[0];
    //in int array cout will display address of first location
    cout<<ptr<<endl;

    // char ch[10]="abc";
    // char *c=&ch[0];
    // int char array cout of pointer to char array will display the whole array
    // cout<<c<<endl;


    //pointer to char prints whole string
    // so in this case it will print characters till it encounters a null char
    char temp = 'z';
    char *t = &temp;
    cout<<t;

    //not recomended
    // char *c = "abcd";
    return 0;
}