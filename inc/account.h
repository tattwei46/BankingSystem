class Account{
	
	private:
		int OwnerId,Balance;
		const char* OwnerName = "OwnerName";
		const char* AccountType = "SAVINGS";
		
	public:
		Account(void);
		void setOwnerId(int);
		int getOwnerId(void);
		void setBalance(int);
		int getBalance(void);
		void accountDebit(int);
		void accountCredit(int);
		void setOwnerName(const char* name);
		void setAccountType(const char* type);
		const char* getOwnerName(void);
		const char* getAccountType(void);
}; 
