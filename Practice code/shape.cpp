// Question no. 14
#include<iostream>
using namespace std;

class shape{
    private:
    float base, height, length, breadth;
    public:
    float area1, area2;
    void getarea1(){
        cout<<"Enter base and height"<<endl;
        cin>>base>>height;
        area1=(base*height)/2;
    }
    void getarea2(){
        cout<<"Enter length and breadth"<<endl;
        cin>>length>>breadth;
        area2=length*breadth;
    }
};

class triangle:public shape{
    public:
    void showarea1(){
        cout<<"Area of triangle is "<<area1<<endl;
    }
};

class rectangle:public shape{
    public:
    void showarea2(){
        cout<<"Area of rectangle is "<<area2<<endl;
    }
};

int main(){
    triangle t1;
    rectangle r1;
    t1.getarea1();
    r1.getarea2();
    t1.showarea1();
    r1.showarea2();

    return 0;
}