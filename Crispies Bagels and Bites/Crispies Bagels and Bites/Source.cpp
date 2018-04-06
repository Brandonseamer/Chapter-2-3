//Crispies Bagels and Bites
//4/6/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>

int main()
{
	//Declare Variables
	double bagels;
	double donuts;
	double cupsOfCoffee;

	//Process
	std::cout << "How many bagels did the customer order?" << std::endl;
	std::cin >> bagels;
	std::cout << "How many donuts did the customer order?" << std::endl;
	std::cin >> donuts;
	std::cout << "How many cups of coffee did the customer order?" << std::endl;
	std::cin >> cupsOfCoffee;
	//Output
	std::cout << "Their total is cost is:" << bagels*.99 + donuts*.75 + cupsOfCoffee*1.2 << ". " << std::endl;
	//Conclusion
	system("pause");
	return 0;
}