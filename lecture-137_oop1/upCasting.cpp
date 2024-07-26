#include<iostream>
using namespace std;

class animal{
    public:
        virtual void sound(){
            cout<<"speaking"<<endl;
        }
};

class dog : public animal{
    public:
        void sound(){
            cout<<"barking"<<endl;
        }
};

int main() {
    // animal obj;
    // int i;
    // int *p = new int;
    // // dynamic creation of obj 
    // // a is pointer of type animal class pointing to an object
    // animal* a = new animal();
    // a->sound();

    // dog* d = new dog();
    // d->sound();

    // // this is called up casting
    // // in this z is a pointer of type animal points to the oject of class dog
    // // in upcasting if 
    // animal* z = new dog();
    // z->sound();

    //down casting (dog*) this is typecasting
    dog* y = (dog*) new animal();
    y->sound();
    return 0;
}