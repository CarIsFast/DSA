#include<iostream>
using namespace std;

class abc{
    public:
        int x;
        int *y;
        abc(int _x, int _y) : x(_x), y(new int(_y)) {}

        // default dumb copy constructor does shallow copy
        // abc (const abc &obj){
        //     x=obj.x;
        //     y=obj.y;
        // }

        // deep copy constructor
        abc (const abc &obj){
            x=obj.x;
            y=new int(*obj.y);
        }

        void print(){
            cout<<"value at x "<<x
                <<"\naddress at y "<<y    
                <<"\nnvalue at y "<<*y
                <<endl<<endl;
        }
        ~abc(){
            delete y;
        }
};

int main() {
    abc *a = new abc(1,2);
    a->print();

    abc b(*a);
    // abc b=a;
    b.print();
    //pointer in b is also pointing at same location i.e y

    *b.y = 20; // syntax to update value of pointer of a class
    /*
    We cant access y directly we have to write obj.y but boj.y gives us value of y which is a address and to access the value  at y we have to write *(obj.y) just like *y = 20 
    */
    delete a;
    b.print();
    return 0;
}