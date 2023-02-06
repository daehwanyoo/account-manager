#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main(void) {
	AccountHandler manager;
	int choice;

	while (1) {
		manager.ShowMenu();
		cout << "Menu: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithdrawMoney();
			break;
		case INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Error: invalid option" << endl;
		}
	}
	return 0;
}