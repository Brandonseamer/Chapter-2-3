//Sharon's Paychecks
//4/6/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>


int main()
{
	//IPO
	//Inputs
	/*
	double payCheckPercentage
	double payChecks
	double payCheckValue
	double bonusCheck = 100
	
	*/

	//Processes
	/*
	payChecks = payChecks - 1 after each deposit
	payCheckValue = userInput
	payCheckPercentage = userInput
	totalSavings = bonusCheck
	totalSavings = totalSavings + payCheckValue*payCheckPercentage
	*/

	//Outputs
	//double totalSavings

	//	<<<Code Starts Here >>>

	//Declare Variables
		double payCheckPercentage;
		double payChecks = 24;
		double payCheckValue;
		double totalSavings = 100;
		double netPay;
		double payChecksRemaining =1;
	//Processes
		std::cout << "Welcome to your local Savings Calculator Program. (Accessible on your local hard drive) >>>" << std::endl;
		std::cout << "What percentage of your check deposits would you like to save? >>>" << std::endl;
		std::cin >> payCheckPercentage;
		payCheckPercentage = payCheckPercentage / 100;
		
		
		do
		{
			std::cout << "What is the value of your next check? " << "Check " << payChecksRemaining<< " /24" << std::endl;
			std::cin >> payCheckValue;
			netPay = netPay + payCheckValue;
			totalSavings = totalSavings + payCheckValue*payCheckPercentage;
			payChecks = payChecks - 1;
			payChecksRemaining = payChecksRemaining + 1;
		} while (payChecks > 0);

	//Output
		std::cout << "Your total savings is: " << totalSavings << ". :) >>>" << std::endl;
		std::cout << "Your total net pay is: " << netPay << ". :) >>>" << std::endl;
		std::cout << "Your total gross income is: " << netPay - totalSavings << ". :) >>>" << std::endl;
	system("pause");
	return 0;
}