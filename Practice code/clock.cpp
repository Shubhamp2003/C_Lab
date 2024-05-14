// Question no. 13
#include<iostream>
using namespace std;

class clock{
    private:
    int hr, min, sec;
    public:
    clock(){
        hr=0;
        min=0;
        sec=0;
    }
    void settime(){
        cout<<"Set hr, min, sec: "<<endl;
        cin>>hr>>min>>sec;
    }
    void displaytime(){
        cout<<"Hr:min:sec :: "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

class wall_clock: public clock{
    private:
    int day, month, year;
    public:
    wall_clock(){
        day=0;
        month=0;
        year=0;
    }
    void setdate(){
        cout<<"Set day, month, year: "<<endl;
        cin>>day>>month>>year;
    }
    void displaydate(){
        cout<<"day/month/year = "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){
    wall_clock w1, w2;
    cout<<"Initially set to zero for object1"<<endl;
    w1.displaytime();
    w1.displaydate();
    w2.settime();
    w2.setdate();
    w2.displaytime();
    w2.displaydate();

    return 0;
}