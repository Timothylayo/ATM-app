#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


void showMenu() {
	cout << "**********MENU**********" << endl;
	cout << "1. Check Balance " << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Transfer" << endl;
	cout << "5. Exist" << endl;
	cout << "*************************" << endl;

}

int main() {
	// showMenu,CHeck balance,Deposit,Withdraw,Exist
	int Option;
	double balance = 700;
	do {
		showMenu();
		cout << "Option is : ";
		cin >> Option;
		system("cls");

		switch (Option) {
		case 1:cout << "Balance is : " << balance << "$" << endl; break;
		case 2:cout << "Deposit Amount: " << "$" << endl;
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount; break;
		case 3: cout << "Withdraw Amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;

			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Not Enough Money";
			break;
		case 4:cout << "How Much Do You Want To Transfer out : ";
			int accountnumber;
			accountnumber<= 10;
			cout << " Enter account number ";
			cin >> accountnumber;
			double transferAmount;
			cin>> transferAmount;
			if (transferAmount <= balance)
				balance -= transferAmount;
			else
				cout << " Not Enough Money  ";
			break;



		}
		



	} while (Option != 5);
	
	return 0;

}
