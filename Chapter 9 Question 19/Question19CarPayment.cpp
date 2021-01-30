/*
 * Question19CarPayment.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author/Editor: Zach Cullins
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
double getPayment(int, double, int);

int main()
{
	int carPrice = 0;
	int rebate = 0;
	double creditRate = 0.0;
	double dealerRate = 0.0;
	int term = 0;
	double creditPayment = 0.0;
	double dealerPayment = 0.0;

	cout << "Car price (after any trade-in): ";
	cin >> carPrice;
	cout << "Rebate: ";
	cin >> rebate;
	cout << "Credit union rate: ";
	cin >> creditRate;
	cout << "Dealer rate: ";
	cin >> dealerRate;
	cout << "Term in years: ";
	cin >> term;

	//Call function to calculate payments
	creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);

	dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

	//Display Payments
	cout << fixed << setprecision(2) << endl;
	cout << "Credit union payment: $" << creditPayment << endl;
	cout << "Dealer payment: $" << dealerPayment << endl;

	//Calculate and display total price of the car if loan is financed through dealer or credit union
	double carUnionTotal = 0.0;
	double carDealerTotal = 0.0;
	double carUnionYear = 0.0;
	double carDealerYear = 0.0;

	//Monthly payment from credit union and car dealer
	carUnionTotal = ((creditPayment * creditRate) + creditPayment);
	carDealerTotal = ((dealerPayment * dealerRate) + dealerPayment);

	//Total payment from credit union and car dealer
	carUnionYear = ((term * 12) * carUnionTotal);
	carDealerYear = ((term * 12) * carDealerTotal);

	//Display monthly payment
	cout << fixed << setprecision(2) << endl;
	cout << "The monthly price for car loan through the credit union: $" << carUnionTotal << endl;
	cout << "The monthly price for car loan through dealer: $" << carDealerTotal << endl;

	//Display total amount owed to credit union and dealer
	cout << fixed << setprecision(2) << endl;
	cout << "The total price for car loan through credit union: $" << carUnionYear << endl;
	cout << "The total price for car loan through dealer: $" << carDealerYear << endl;
	return 0;

} //End of main function


//*****function definitions*****
double getPayment(int prin, double monthRate, int months)
{
	//Calculates & returns a monthly payment
	double monthPay = 0.0;
	monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));

	return monthPay;
}  //end of getPayment function


