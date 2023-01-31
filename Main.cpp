#include <iostream>
using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int monthlyFee = 0;
	int jamIncluded = 0;
	int jamPrice = 0;
	int totalCost;

	cout << "What package do you own?  A, B, or C" << endl;
	cin >> whichPackage;
	cout << "How many jams, jellies, or preserves did you purchase this month?" << endl;
	cin >> howManyJams;
	
	// The default values for the montly packages
	if (whichPackage == 'A' || whichPackage == 'a')
	{
		monthlyFee = 8;
		jamIncluded = 2;
		jamPrice = 5;
	}
	else if (whichPackage == 'B' || whichPackage == 'b')
	{
		monthlyFee = 12; 
		jamIncluded = 4;
		jamPrice = 4;
	}
	else if (whichPackage == 'C' || whichPackage == 'c')
	{
		monthlyFee = 15;
		jamIncluded = 6;
		jamPrice = 3;
	}

	// calculate total cost
	if (howManyJams <= jamIncluded)
	{
	// just carge the monthly fee
		totalCost = monthlyFee;

	}
	else
	{
		// charge monthly fee + (difference) * jamPrice
		totalCost = monthlyFee + (howManyJams - jamIncluded) * jamPrice;
	}
	
	cout << "You own $" << totalCost << endl;


	 return 0;
}