// question no. 15
#include<iostream>
using namespace std;

class student{
    private:
    int id;
    char stdname[20];
    public:
    student(){
        cout<<"Enter name and id:"<<endl;
        cin>>stdname>>id;
    }
    void displaystudent(){
        cout<<"\nInformation of student: \nname= "<<stdname<<" id= "<<id<<endl;
    }
};

class lecturer{
    private:
    int age;
    char lecname[20];
    public:
    lecturer(){
        cout<<"Enter name and age:"<<endl;
        cin>>lecname>>age;
    }
    void displaylecturer(){
        cout<<"Information of lecturer: \nname= "<<lecname<<" age= "<<age<<endl;
    }
};

class book: public student, public lecturer{
    private:
    int ISBN;
    public:
    book(){
        cout<<"Enter ISBN:"<<endl;
        cin>>ISBN;
    }
    void displaybook(){
        cout<<"International Standard Book Number(ISBN): "<<ISBN<<endl;
    }
};

class edition: public book{
    private:
    int print_year;
    public:
    edition(){
        cout<<"Enter Print year:"<<endl;
        cin>>print_year;
    }
    void displayedition(){
        cout<<"Print Year: "<<print_year<<endl;
    }
};

int main(){
    edition e;
    e.displaystudent();
    e.displaylecturer();
    e.displaybook();
    e.displayedition();

    return 0;
}