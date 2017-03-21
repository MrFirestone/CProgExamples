#include <iostream>
//#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{

	int qty[5] = {0};
	double price[5] = {0};
	double total[5] = {0};
	double grandTotal = 0;

	int loop = 0;
	
	cout << "\nThis program will display a table of total prices based on a given quantity and unit price.\n\n";

	for (loop = 0; loop < 5; loop++)	{
		cout << "Item #" << loop+1 << ":\n";
		cout << setw(7) << " " << "Price? ";
		cin >> price[loop];
		cout << setw(7) << " " << "Quantity? ";
		cin >> qty[loop];
		total[loop] = qty[loop] * price[loop];
		grandTotal += total[loop];
	}

	cout << " Item" << setw(10) << "Qty" << setw(10) << "Price" << setw(11) << "Total\n";
	cout << "-------------------------------------\n";
	
	for (loop = 0; loop < 5; loop++)	{
		cout << "Item #" << loop+1 << setw(8) << qty[loop] << fixed
			<< setw(6) << setprecision(2) << "$" << price[loop] << setw(6) << "$" << total[loop] << endl;
	}
	cout << "\nTotal for Table: $" << grandTotal << "\n\n";

	system("pause");

	return 0;
}