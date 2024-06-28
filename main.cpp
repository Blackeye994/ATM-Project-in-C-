#include <iostream>
#include "headerfile.h"
using namespace std;

int main() 
{
	ATM user(100);
	int choice ;
	char selection ;
	
	do{
		cout<<"=============================ATM Form========================================"<<endl;
	cout<<"++++++++++++++++++++++++++What do want+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\t 1). Check Balance"<<endl;
	cout<<"\t 2). Deposit money"<<endl;
	cout<<"\t 3). Withdraw money"<<endl;
	cout<<"\t 4). Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1 :
			user.check_balance();
			break;
		case 2 :
			user.Deposit();
			break;
		case 3 :
			user.withdrawal();
			break;
		case 4 :
			cout<<"Your program is closed."<<endl;
			break;
		default :
			cout<<"wrong number you have select";
	}
	
		cout<<"Can you do again (Y/N): ";
		cin>>selection;
		
	}while(selection == 'Y');
	return 0;
}