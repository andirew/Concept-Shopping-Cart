// 
// This is an extremely simplified/concept shopping cart system
/////////////////////////////////////////////////////////////////
#include "main.h"
#include <iostream>
#include <iomanip>
using namespace std;



															//Functions
int checkout();			// Display menu and return selection

	int main() {
		w1 error;

		int iCost = 0;	// Selected item cost
		int iTotal = 0;
		cout << "SeneKEA Order Tool\n"
			<< "======================\n";

		// process user input
		while (iCost != 10) {
			iCost = checkout();
			if (iCost == 0)
				cout << error.errMsg;
			else if (iCost == -1) {
				iTotal = 0;
				cout << error.cancelMsg;
			}
			else if (iCost == 10) {
				cout << "Total is $" << iTotal << endl;
				cout << error.printMsg;
			}
			else {
				cout << "Total increases by $" << iCost << endl;
				iTotal += iCost;
			}
		}
		return 0;
	}



