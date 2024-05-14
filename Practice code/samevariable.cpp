// Question no. 16
#include<iostream>
using namespace std;

class A{
    public:
    int x,y;
    void seta(){
        x=2;
        y=3;
    }
};

class B{
    public:
    int x,y;
    void setb(){
        x=4;
        y=5;
    }
};

class C: public A, public B{
    public:
    void sum(){
        int add;
        add=A::x+A::y+B::x+B::y;
        cout<<"Sum of all variable= "<<add<<endl;
    }
};

int main(){
    C c;
    c.seta();
    c.setb();
    c.sum();

    return 0;
}