/*
 * Question23.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: Zach Cullins
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getStandardShipping(double);
double getPremiumShipping(double);

int main()
{
	double totalBeforeShipping = 0.0;
	char membership = ' ';
	double totalAfterShipping = 0.0;

	//Enter amount owed before shipping
	cout << "Enter amount owed before shipping: ";
	cin >> totalBeforeShipping;

	if (totalBeforeShipping < 0)
	{
		cout << "Invalid amount of money entered. Please try again.";
		return 0;
	}

	//Determine level of Membership (Standard or Premium)
	cout << "Enter membership level (S/P): ";
	cin >> membership;

	if (toupper(membership) == 'S')
	{
		//call getStandardShipping function to get the shipping price & total
		totalAfterShipping = getStandardShipping(totalBeforeShipping);

		//Display total amount owed with Standard Shipping
		cout << fixed << setprecision(2) << endl;
		cout << "Total amount owed with standard shipping: $" << totalAfterShipping << endl;

	}
	else if (toupper(membership) == 'P')
	{
		//Call getPremiumShipping function for shipping price and total
		totalAfterShipping = getPremiumShipping(totalBeforeShipping);

		//Display amount owed after Premium Shipping
		cout << fixed << setprecision(2) << endl;
		cout << "Total amount owed with premium shipping: $" << totalAfterShipping << endl;
	}

	return 0;
} //End of main function

double getStandardShipping(double price)
{
	double shipping = 0.0;

	//If-else if loop to determine the shipping price
	if (price >= 0 && price <= 100)
		shipping = 12.99;
	else if (price > 100)
		shipping = 4.99;
	//end if

	//return the price plus the shipping cost
	return shipping + price;
} // End of getStandardShipping function

double getPremiumShipping(double order)
{
	double shipping = 0.0;

	//If-else-if loop to determine the shipping price
	if (order >= 0 && order <= 49.99)
		shipping = 4.99;
	else if (order > 49.99)
		shipping = 0.00;
	//end if

	//Return the order cost plus the shipping cost
	return shipping + order;

} //end of getPremiumShipping function

