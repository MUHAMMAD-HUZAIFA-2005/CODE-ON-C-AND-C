#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string name;
	cout<<"welcome"<<endl;
	cout<<"what is your name"<<endl;
	cin>>name;
	{
		//menu
		cout<<"---menu---"<<endl;
		cout<<"number of item price"<<endl;
		cout<<endl;
		cout<<"1) BRYANI              RS.120"<<endl;
		cout<<"2) COFFE               RS.80"<<endl;
		cout<<"3) ANDAY WALA BURGER   RS.50"<<endl;
		cout<<"4) NEHARI              RS.200"<<endl;
		cout<<"5) ZINGER ROLL         RS.130"<<endl;
		cout<<"6) DOUBLE PARATHA      RS.150"<<endl;
		cout<<"7) PARTY ROLL          RS.100"<<endl;
	}
	
	{
		int Q;
		cout<<"customer name is"<<name<<endl;
		cout<<"ENTER YOUR QUANTITY";cin>>Q;
		cout<<"YOUR QUANTITY :"<<Q<<endl;
		
		char od;
		cout<<"WHAT IS YOUR ORDER"<<endl;
		cin>>od;
		
		if (od== '1')
		{
			cout<<"YOUR ORDER IS BRYANI AND TOTAL PRICE IS :"<<120*Q<<endl;
		}
		
		else if (od== '2')
		{
			cout<<"YOUR ORDER IS COFFE AND TOTAL PRICE IS :"<<80*Q<<endl;
		}
		
		else if (od== '3')
		{
			cout<<"YOUR ORDER IS ANDAY WALA BURGER AND TOTAL PRICE IS :"<<50*Q<<endl;
		}
		
		else if (od== '4')
		{
			cout<<"YOUR ORDER IS NEHARI AND TOTAL PRICE IS :"<<200*Q<<endl;
		}
		
		else if (od== '5')
		{
			cout<<"YOUR ORDER IS ZINGER ROLL AND TOTAL PRICE IS :"<<130*Q<<endl;
		}
		
		else if (od== '6')
		{
			cout<<"YOUR ORDER IS DOUBLE PARATHA AND TOTAL PRICE IS :"<<150*Q<<endl;
		}
		
		else if (od== '7')
		{
			cout<<"YOUR ORDER IS PARTY ROLL AND TOTAL PRICE IS :"<<100*Q<<endl;
		}
		
		else
		{
			cout<<"NOT AVALIBLE"<<endl;
		}
	
		 }
       
       return 0; 
	    }
    
