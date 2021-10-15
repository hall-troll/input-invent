//Alexis Morris
//COP1334C
//This is a mark-up calculator used to get the retail price of an item and calulate it's new price after a 
//percentage mark-up that the user enters

#include <iostream>
#include <iomanip> //called in case I need to specifically format the output
#include <string>  //called to accurately read user input

using namespace std;

int main()
{
	double wholesaleCost,		//defining functions and their data types
		markupPercent,
		retailPrice;

		cout << "\nThe Markup Calculator\n\n";

	//Have user input necessary data

	cout << "Enter the item number: ";
	cin >> itemNumber;

	cout << "Enter the item description: ";
	getline(cin, description);

	cout << "Enter the current price of item " << itemNumber << ":" << endl;
	cin >> wholesaleCost;

	cout << "Enter the percent markup % for item " << itemNumber << ":" << endl;
	cin >> markupPercent;

	//Calculate the new retail price w the percent markup
	
	markupPercent = wholesaleCost(markupPercent) * .01;










		 
} 