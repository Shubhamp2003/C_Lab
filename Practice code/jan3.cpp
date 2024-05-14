#include<iostream>
using namespace std;

class shopping
{
	int code[20];
	float price[20];
	public:
	int x,n,r;
	void add();
	void remove();
	void display();
};

void shopping::add()
{
	cout<<"Enter number of items: ";
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cout<<"code: "<<i+1<<endl;
		cout<<"Enter price:";
		cin>>price[i];
	}
	cout<<"\nEnter how many items to add: ";
	cin>>n;
	for(int i=x;i<x+n;i++)
	{
		cout<<"code: "<<i+1<<endl;
		cout<<"Enter price:";
		cin>>price[i];
	}
}

void shopping::remove()
{
	cout<<"\nEnter how many items to remove: ";
	cin>>r;
	x=x+n-r;
	cout<<"Last item removed\n";
}

void shopping::display()
{
	cout<<"\nDisplaying details:\n";
	if(x==0)
	{
		cout<<"No item selected";
	}
	else
	{
		for(int i=0;i<x;i++)
		{
			cout<<"code: "<<i+1<<endl;
			cout<<"price: "<<price[i]<<endl;
		}
		float total;
		for(int i=0;i<x;i++)
		{
			total=total+price[i];
		}
		cout<<"\nTotal cost: "<<total;
	}
}

int main()
{
	shopping s1;
	s1.add();
	s1.remove();
	s1.display();
}