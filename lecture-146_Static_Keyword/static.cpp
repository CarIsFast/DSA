#include<iostream>
using namespace std;

/*
static data member > that variable is goig to share memory with all of the class instances
*/
/*
static member function -> there is no instance of that class being passed into that method
*/
class abc {
    public:
        static int x, y;
        static void print(){
            cout<<x<< " " <<y<<endl;
        }
};

int abc::x;
int abc::y;

int main() {
    abc obj1;
    obj1.x = 20;
    obj1.y = 30;
    obj1.print();  
    abc obj2;
    obj2.x = 1;
    obj2.y = 2;
    obj1.print();  
    obj2.print(); 
    abc::print(); 
    return 0;
}