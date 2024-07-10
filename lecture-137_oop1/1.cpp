#include<iostream>
using namespace std;

class Animal{

    //state or properties
    private:
    int weight;
    public:
        int age;
        string name;
        string type;

        //constructors

        Animal(){
            weight=0;
            age=0;
            type="";
            cout<<"constructor is called"<<endl;
        }
        Animal(int age){
            this->age=age;
            cout<<"parameterised constrctor"<<endl;
        }
        Animal (Animal& obj){
            this->age = obj.age;
            this->type = obj.type;
            this->name = obj.name;
        }

        ~Animal(){
            cout<<"destructor called"<<endl;
        }
        //behaviors or methods
        void sleep(){
            cout<<"sleeping"<<endl;
        }
        void setWeight(int weight){
            //this is a pointer to the current object
            this->weight=weight;
        }
        int getWeight(){
            return weight;
        }
};

int main() {
    // gives ouput as 1
    //cout<<"size of empty calss is "<< sizeof(Animal)<<endl;
    
    //object creation

    //static
    // Animal ramesh;
    // ramesh.age=10;
    // ramesh.name="lion";
    // cout<<ramesh.age<<endl;
    // cout<<ramesh.name<<endl;

    // ramesh.sleep();
    // ramesh.setWeight(101);
    // cout<<ramesh.getWeight()<<endl;
    //dynamic

    // Animal* surash = new Animal(30);
    // //surash.age will not work;
    // (*surash).age=15;
    // surash->age = 17;

    // surash->sleep();


    //copy constructro
    Animal c(50);
    Animal* a = new Animal(30);
    //destructoes are not called for dynamic objects ans we have manualy 
    //free the memory. after delete destructor is called
    delete a;
    Animal z=c;
    Animal q(*a);
    Animal b (c);

    return 0;
}