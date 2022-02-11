#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	cout<<"How many items you  want to order?"<<endl;
	cin>>n;
	for (i=n;i>=1;i+0){
	
	string name;
	cout<<"Welcome,"<<endl;
	cout<<"What is your name"<<endl;
	cin>>name;
	cout<<"-----------------Menu-----------------"<<endl;
	cout<<"1) Sausage    Rs-220"<<endl;
	cout<<"2) Cheese & Mushroom Omelet    Rs-50"<<endl;
	cout<<"3) Paratha    Rs-25"<<endl;
	cout<<"4) French Toast    Rs-45"<<endl;
	cout<<"5) Coffee   Rs-120"<<endl;
	cout<<"6) Tea    Rs-40"<<endl;
	cout<<"7) Pan Cake with Nutella Serving      Rs-395"<<endl;
	cout<<"--------------------------------------"<<endl;
	int Q;
	cout<<"What is the Quantity"<<endl;
	cin>>Q;
	cout<<"Your quantity is "<<Q<<endl;
	cout<<"What is your order"<<endl;
	char od;
	cin>>od;
	if (od=='1')
	{
		cout<<"Your order is Sausage and your price is"<<Q*220<<endl;
	}
	else if (od=='2')
	{
		cout<<"Your order is Cheese & Mushroom Omelet and your price is"<<Q*50<<endl;
	}
	else if (od=='3')
	{
		cout<<"Your order is Paratha and your price is"<<Q*25<<endl;
	}
	else if (od=='4')
	{
		cout<<"Your order is French Toast and your price is"<<Q*45<<endl;
	}
	else if (od=='5')
	{
		cout<<"Your order is Coffee and your price is"<<Q*120<<endl;
	}
	else if (od=='6')
	{
		cout<<"Your order is Tea and your price is"<<Q*40<<endl;
	}
	else if(od=='7')
	{
		cout<<"Your order is Pan Cake with Nutella Serving and your price is"<<Q*395<<endl;
	}
	else
	{
		cout<<"Sorry, wrong order. Please try again :)"<<endl;
	}
}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}   
