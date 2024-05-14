// lab 6 question no. 2
#include<iostream>
using namespace std;

class base{
    public:
    virtual void testfunction();
};
class derived: public base{
    public:
    void testfunction();
};
void base::testfunction(){
    cout<<"Base class"<<endl;
}
void derived::testfunction(){
    cout<<"Derived class"<<endl;
}
int main(){
    base b;
    derived d;
    // b=&d;
    b.testfunction();
    d.testfunction();

    return 0;
}