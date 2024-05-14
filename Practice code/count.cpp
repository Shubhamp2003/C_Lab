// lab 6 question no. 10
#include<iostream>
using namespace std;

class student{
    private:
    int roll;
    char name[20];
    static int count;
    public:
    void getdata(){
        cout<<"Enter roll and name"<<endl;
        cin>>roll>>name;
        count++;
    }
    void displaycount(){
        cout<<"count:"<<count<<endl;
    }

};
int student::count=0;
int main(){
    student s1,s2,s3;
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();

    return 0;
}