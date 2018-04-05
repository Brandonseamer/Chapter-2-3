//Lake View Hotel
//4/5/2018
//Author: Brandon Seamer

//Declare Variables
#include <iostream>
#include <string>
double totalBill;
double nightlyRate = 100;
double nights;
double serviceCharge = 35;
double services;
double telephoneCharge = .25;
double telephoneUses;

int main()
{
	//UserInputs
	std::cout << "How many nights did the customer stay?" << std::endl;
	std::cin >> nights;
	std::cout << "How many times did they use room service?" << std::endl;
	std::cin >> services;
	std::cout << "How many times did they use the telephone?" << std::endl;
	std::cin >> telephoneUses;
	//Process
	totalBill = nights*nightlyRate + services*serviceCharge + telephoneCharge*telephoneUses;
	//Output
	std::cout << "The customer's total bill is: " << totalBill << ". >>>" << std::endl;
	//conclusion
	system("pause");
	return 0;

}