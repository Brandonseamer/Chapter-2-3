//Cartwright Industries
//4/6/2018
//Author: Brandon Seamer
#include <iostream>

int main()
{

	//Declare Variables
	double grossPay;
	double FWT =.2;
	double FICA = .08;
	double stateTax = .04;
	//Process
	std::cout << "Input the employee's weekly gross pay." << std::endl;
	std::cin >> grossPay;
	std::cout << "The employee's weekly net pay is:" << grossPay - grossPay*FWT - grossPay*FICA - grossPay*stateTax << ". "<< std::endl;
	//Conclusion
	system("pause");
		return 0;
}