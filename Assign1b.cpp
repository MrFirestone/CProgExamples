#include <iostream>
//#include <stdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{

	double tank = 0;
	double mpg = 0;
	double price = 0;
	double oneTank = 0;
	double hundy = 0;
	double month = 0;
	double year = 0;

	cout << "\nThis program will compute the fuel efficiency of your car.\n\n";
	cout << "Number of Callons in Tank? ";
	cin >> tank;
	cout << "Number of Miles per Gallon? ";
	cin >> mpg;
	cout << "Price per Gallon of Gas? ";
	cin >> price;

	oneTank = tank * mpg;
	hundy = 100.0 / mpg * price;
	month = 15000.0 / mpg / 12.0 * price;
	year = 15000.0 / mpg * price;

	cout << "\n** Fuel Efficiency **\n";
	cout << "Mileage for one tank:" << setw(9) << " " << oneTank << " miles\n";
	cout << "Cost for 100 mile trip:" << fixed << setprecision(2) << setw(7) << "$" <<  hundy << endl;
	cout << "Cost per month:" << setw(15) << "$" << month << endl;
	cout << "Cost per year:" << setw(16) << "$" << year << "\n\n";

	system("pause");

	return 0;
}