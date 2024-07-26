// lvalue -> variable having memory location

// rvalue -> variable not having memory location

    //eg. int &a = b -> here a is a rvalue

#include<iostream>
using namespace std;

int main() {

    //revision for pointers
    // int x = 5;
    // int *p = &x;

    // cout<<&x<<endl;   
    // cout<<p<<endl;   

    // *p = 10;
    // cout<<p<<endl;   
    // cout<<x<<endl;

    //2. const with pointers
    // const int *a = new int(2); // CONST data,NON-CONST pointer
    // // int const *a = new int(2); same as the above statement 
    // cout<<*a<<endl;
    // // *a = 20 this will give an error as you cant reassign the const variable
    // int b = 20;
    // a = &b;
    // cout<< *a << endl;
    // //pointer can be reassigned

    // // CONST pointer, but non const data
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20; // this will work as we are changing the value of value to which the pointer is pointing.
    // //so the pointer is still pointing to the same memory location 
    // cout<<*a<<endl;

    // int b = 50;
    // //a = &b; // this wont work

    //CONT pointer , CONST data
    // const int *const a = new int (2);
    // cout<<*a<<endl;

    return 0;
}