#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{

	int num = 0;
	int loop = 0;

	cout << "\nThis program will compute 15 multiples of a given number.\n\n";
	cout << "Compute 15 multiples of what number? ";
	cin >> num;

	cout << "Multiples are: ";

	for (loop = 1; loop < 15; loop++)
		cout << loop * num << ", ";

	cout << loop * num << endl << endl;

	return 0;
}