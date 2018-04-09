//Cartwright Industries
//4/6/2018
//Author: Brandon Seamer
#include <iostream>

int main()
{

	//Declare Variables
	double hoursWorked;
	double hourlyWage;
	double FWT =.2;
	double FICA = .08;
	double stateTax = .04;
	double grossPay;
	//Process
	std::cout << "Input the employee's hours worked." << std::endl;
	std::cin >> hoursWorked;
	std::cout << "Input the employee's hourly wage." << std::endl;
	std::cin >> hourlyWage;
	if (hoursWorked > 40)
	{
		grossPay = hourlyWage*40 + (hoursWorked-40)*1.5;
	}
	else{
		grossPay = hourlyWage*hoursWorked;
	}
	std::cout << "The employee's gross pay is:" << grossPay << ". " << std::endl;
	std::cout << "The employee's weekly net pay is:" << grossPay - grossPay*FWT - grossPay*FICA - grossPay*stateTax << ". "<< std::endl;
	//Conclusion
	system("pause");
		return 0;
}