#include <iostream>
#include "headerfile.h"
using namespace std;
ATM :: ATM(int balance)
{
	money = balance;
	cout<<"Enter your 4-digit PIN code:";
	cin>>pin_code;
}

void ATM :: check_balance()
{
	cout<<"Your amount is: "<<money<<endl;	
}

void ATM :: Deposit()
{
	cout<<"Now, you want to deposit money."<<endl;
	cout<<"Enter you PIN code: ";
	cin>>check_pin;	
	if(check_pin == pin_code)
	{
		cout<<"Select your amount"<<endl;
		cout<<" 1). 500 \t\t 2). 1000 \n 3). 1500 \t\t 4). 2,000 \n 5). 5,000 \t\t 6). 10,000"<<endl;
		cin>>amount;
		if(amount >= 500)
		{
			money = money + amount;
			cout<<"Your request is succussful "<<endl;
			cout<<"Can you check your balance (Y/N): ";
			cin>>check;
			if(check == 'Y')
			{
				check_balance();
			}
		}else
		{
			cout<<"Your amount is less then the minimum deposit 500 "<<endl;
		}
	}else
	{
		cout<<"Your pin code is wrong. please try again"<<endl;
	}
}

void ATM :: withdrawal()
{
	cout<<"Now, Your withdraw is starting"<<endl;
	cout<<"Select your amount"<<endl;
		cout<<" 1). 500 \t\t 2). 1000 \n 3). 1500 \t\t 4). 2,000 \n 5). 5,000 \t\t 6). 10,000"<<endl;
		cin>>amount;
		cout<<"Now enter our PIN code: ";
		cin>>check_pin;
		if(check_pin == pin_code)
		{
			if(money >= amount)
			{
				money = money - amount;
				cout<<"Your request is succussful "<<endl;
				cout<<"Can you check your balance (Y/N): ";
				cin>>check;
				if(check == 'Y')
				{
					check_balance();
				}
			}else
			{
				cout<<"Your balance is less then "<<amount<<endl;
			}
		}else
		{
			cout<<"your PIN code is wrong."<<endl;
		}
}