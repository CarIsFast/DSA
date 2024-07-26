#include<iostream>
using namespace std;
class abc{
    int x; int y; int z;
    public:
        // abc(int a,int b,int c ){
        //     x =  a;
        //     y = b; 
        //     z= c;
        // }

        //initialization list
        // can reinitialize const variables
        abc(int _x, int _y, int _z) : x(_x), y(_y), z(_z){}

        // syntax for const method
        int getx() const{
            return x;
        }

        int gety() const{
            return y;
        }

        int getz() const{
            return z;
        }


};
void print(const abc &a){
    cout<< a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
}
int main() {
    abc a(1,2,3);
    print(a);
    return 0;
}