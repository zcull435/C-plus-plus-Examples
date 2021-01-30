/*
 * 21.cpp
 *
 *  Created on: May 11, 2020
 *      Author: Zach Cullins
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char letter = ' ';
	int count = 0;

	ifstream inFile;
	inFile.open("Introductory21.txt", ios::in);

	if (inFile.is_open())
	{
		for (int x = 1; x < 11; x++)
		{
			cout << "Enter Letter " << x << endl;
			cin >> letter;
			count++;
			letter = toupper(letter);

		}
		inFile.close();

	}
	else
		cout << "The Introductory21.txt file could not be opened." << endl;
	//end if
	cout << "There are " << count << " numbers in this file" << endl;

	return 0;
}	//end of main function


