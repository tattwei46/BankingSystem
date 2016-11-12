/* Project Name: Banking System */
#include <iostream>
#include "./inc/account.h"

using namespace std;

int main(int argc, char** argv) {
	Account acc1;
	cout << acc1.getOwnerId() << "\n";
	cout << acc1.getBalance() << "\n";
	acc1.setOwnerName("davidcheah");
	cout << acc1.getOwnerName() << "\n";
	acc1.setAccountType("CURRENT");
	cout << acc1.getAccountType() << "\n";
	acc1.accountCredit(100);
	acc1.accountDebit(50);
	cout << acc1.getBalance() << "\n";
	return 0;
}
