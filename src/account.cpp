#include "../inc/account.h"
#include <cstdlib>
#include <ctime>

Account::Account(void)
{
	srand(static_cast<unsigned int>(time(0)));
	OwnerId = rand();
	Balance = 0;
}

int Account::getBalance(void){
	return Balance;
}

void Account::accountDebit(int amount)
{
	Balance -= amount;
}

void Account::accountCredit(int amount)
{
	Balance += amount;
}

void Account::setOwnerId(int idNum)
{
	OwnerId = idNum;
}

int Account::getOwnerId(void)
{
	return OwnerId;
}

void Account::setBalance(int amount)
{
	Balance = amount;
}

void Account::setOwnerName(const char* name)
{
	OwnerName = name;
}

void Account::setAccountType(const char* type)
{
	AccountType = type;
}

const char* Account::getOwnerName(void)
{
	return OwnerName;
}

const char* Account::getAccountType(void)
{
	return AccountType;
}


