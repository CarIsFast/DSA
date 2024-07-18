/*
1) ENCAPSULATION
Process of hidding of data form user
wrapping of data in class
Perfect encapsulation
Each data member is private in class
in perfect encapsulation we use getters and setters

2) Inheritance

child class using the properties of patren class
Syntax - >
class child: Mode_of_inheritance parent

class animal{
};
class dog: public animal{
};
                    mode of inheritance
            Public      protected   private

public      public      protected   private

protected   protected   protected   private

private     N/A         N/A         N/A

ambiguity
class a{
    int ans;
}
class b{
    int ans;
}
class c: public a,public b{
}
c obj;
obj.a::ans;
:: scope resolution operator

3) polymorphism

1> compile time
    diffrent types or amount of parameters
2> run time
    called from differnt class objects
*/