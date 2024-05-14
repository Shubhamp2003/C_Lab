#include <iostream>

using namespace std;
class Student{
private:
    int rollno;
    char name[20];
public:
    void getStudent(){
    cout<<"Enter students roll and name:"<<endl;
    cin>>rollno>>name;
    }
    void displayStudent(){
    cout<<"Student's roll no: "<<rollno<<endl;
    }
};
class Computerscience:public Student{
private:
    float marks1;
    float marks2;
    float marks3;
public:
    float average;
    void getmarks(){
    cout<<"Enter marks in three subjects for cs"<<endl;
    cin>>marks1>>marks2>>marks3;
    }
    void displaymarks(){
    cout<<"Subject1: "<<marks1<<endl;
    cout<<"Subject2: "<<marks2<<endl;
    cout<<"Subject3: "<<marks3<<endl;
    }
    void getaverage(){
    average=(marks1+marks2+marks3)/3.0;
    }
    void displayaverage(){
    cout<<"Average: "<<average<<endl;
    }
};

class mathematics:public Student{
private:
    float mthmarks1;
    float mthmarks2;
    float mthmarks3;
public:
    float avg;
    void getmthmarks(){
    cout<<"Enter marks in three subjects for maths"<<endl;
    cin>>mthmarks1>>mthmarks2>>mthmarks3;
    }
    void displaymthmarks(){
    cout<<"sub1: "<<mthmarks1<<endl;
    cout<<"sub2: "<<mthmarks2<<endl;
    cout<<"sub2: "<<mthmarks3<<endl;
    }
    void getavg(){
    avg=(mthmarks1+mthmarks2+mthmarks3)/3.0;
    }
    void displayavg(){
    cout<<"Average: "<<avg<<endl;
    }
};
int main(){
Computerscience cs;
mathematics m;
cs.getStudent();
cs.getmarks();
cs.getaverage();
m.getmthmarks();
m.getavg();
cs.displayStudent();
cs.displaymarks();
cs.displayaverage();
m.displaymthmarks();
m.displayavg();

return 0;
}