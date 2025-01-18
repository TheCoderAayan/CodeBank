#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class calc{
	public:

	void add(int a,int b)
	{
		cout<<endl<<"--------------------------------"<<endl;
		cout<<"Addition is:"<<(a+b);
	}
		void sub(int a,int b)
	{
			cout<<endl<<"--------------------------------"<<endl;
		cout<<"Subtraction is:"<<(a-b);
	}
		void mul(int a,int b)
	{
			cout<<endl<<"--------------------------------"<<endl;
		cout<<"Multiplication is:"<<(a*b);
	}
		void div(int a,int b)
	{
			cout<<endl<<"--------------------------------"<<endl;
		cout<<"Division is:"<<(a/b);
	}
		void mod(int a,int b)
	{
			cout<<endl<<"--------------------------------"<<endl;
		cout<<"Modulus is:"<<(a%b);
	}
};

int main(){
	calc num;
	float n1,n2;
	char op;
	float ans;
	
	cout<<"================# MENU #=================="<<endl;
	cout<<"1) Addition..\n2)Subtraction..\n3)Multiplication..\n4)Division..\n5)Modulus.."<<endl;
	cout<<endl<<"Enter operator:";
	cin>>op;
	
	
	
	cout<<endl<<"Enter the 1st value:";
	cin>>n1;
	cout<<endl<<"Enter the 2nd value:";
	cin>>n2;
	
	
	if(op=='1')
	{
		num.add(n1,n2);
	}
	else if(op=='2')
	{
		num.sub(n1,n2);	
	}
	else if(op=='3')
	{
		num.mul(n1,n2);	
	}
	else if(op=='4')
	{
		num.div(n1,n2);	
	}
	else if(op=='5')
	{
		num.mod(n1,n2);	
	}
	else
	{
		cout<<endl<<"Wrong choice!!!!";
	}
	
	
}
