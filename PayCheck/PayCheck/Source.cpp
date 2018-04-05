//PayCheck Calculator
//4/5/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>

int main()
{
	//variables
	double hourlyPay;
	double hoursWorked;
	double netPaid;

	//User inputs
	std::cout << "Please enter your hourly pay. >>>" << std::endl;
	std::cin >> hourlyPay;
	std::cout << "Please enter your hours worked. >>>" << std::endl;
	std::cin >> hoursWorked;

	//Process
	netPaid = hourlyPay*hoursWorked;

	//Output
	std::cout << "Your net pay is: " << netPaid << ". >>>" << std::endl;

	//Returns
	system("pause");
	return 0;
}