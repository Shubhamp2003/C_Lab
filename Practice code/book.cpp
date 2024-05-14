#include<iostream>
using namespace std;
class Author{
    private:
    char name[20];
    char qualification [20];
    public:
    void getdata(){
        cout<<"Enter name and qualification"<<endl;
        cin>>name>>qualification;
    }
    void putdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"qualification:"<<qualification<<endl;
    }
};
class Publication {
    private:
    char pname[50];
    public:
    void getdata(){
        cout<<"Enter pname"<<endl;
        cin>>pname;
    }
    void putdata(){
        cout<<"pname:"<<pname<<endl;
    }
};
class Book:public Author,public Publication{
    private:
    char title[40];
    int price;
    public:
    void getdata(){
  cout<<"Enter title and price"<<endl;
  cin>>title>>price;
    }
    void putdata(){
        cout<<"title:"<<title<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main(){
    Book b;
    b.Author::getdata();
    b.Author::putdata();
    
    b.Publication::getdata();
    b.Publication::putdata();
    b.getdata();
    b.putdata();
    return 0;
}