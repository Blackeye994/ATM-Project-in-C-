class ATM{
	private :
		int money;         	 //original amount.
		int pin_code;		//original pin code of a ATM.
		int check_pin;	   //check your pin code.
		int amount;       //Select your amount.
		char check;       //for check balance.
	public :
		ATM(int);
		void Deposit();
		void withdrawal();
		void check_balance();
};