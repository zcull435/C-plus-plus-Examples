/*
 * 24.cpp
 *
 *  Created on: May 11, 2020
 *      Author: zcull
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int searchFor = 0;
	int code = 0;
	int salary = 0;
	char found = 'N';
	char another = 'Y';

	ifstream inFile;

	while (another == 'Y')
	{
		inFile.open("Intermediate24.txt", ios::in);
		if (inFile.is_open())
		{
			// enter the needed logic here
			// for entering the payroll code
			cout << "Please enter payroll code: " << endl;
			cin >> code;

			while (!inFile.eof() && found == 'N')
			{
				// keep searching for the payroll code
				// until EOF
				for (int searchFor = 1; searchFor != code; searchFor++)
				{
					cout << "Is this your payroll code? (Y/N): " << searchFor << endl;
					cin >> found;
					searchFor += 1;
				}

			}	//end while
			inFile.close();

			if (toupper(found) == 'Y')
				{
					inFile >> salary;
					cout << "Your payroll code is: " << code << endl;
					cout << "Your salary is: $" << salary << endl;
				}

			else
				cout << "Invalid payroll code"
					<< endl << endl;
			//end if

			if (found == 'N')
			{
				cout << "Search for another code (Y or N)? ";
				cin >> another;
				another = toupper(another);
			}

		}
		else
		{
			cout << "The Intermediate24.txt file could not be opened." << endl;
			another = 'N';
		}	//end if
	}	//end while
	return 0;
}	//end of main function


