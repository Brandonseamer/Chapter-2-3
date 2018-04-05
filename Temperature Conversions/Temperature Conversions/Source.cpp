//Temperature Conversions
//4/5/2018
//Author: Brandon Seamer


/*Problem:

In this challenge you will write a program that a user enters a three temperatures one for three different times during the day.
Example what was the temperature in celsius at 8:00 am, 12:00 pm, and 5:00 pm. The Output should then give the answer in both celsius and Fahrenheit.
Enrichment: Write an if statement structure that does not accept a temperature lower than the temperature given at 8:00 am 
and does not give a temperature 10 degrees higher from the one given at 12:00 pm. Give an error message if the user does.*/

#include <iostream>
#include <string>


int main()
{
	//Declare Variables
	double tempAtEightAM;
	double tempAtNoon;
	double tempAtFivePM;
	//UserInputs
	std::cout << "What was the temperature at 8:00AM in Celsius? >>>" << std::endl;
	std::cin >> tempAtEightAM;
	std::cout << "What was the temperature at 12:00PM in Celsius? >>>" << std::endl;
	std::cin >> tempAtNoon;
	if (tempAtNoon < tempAtEightAM){
		std::cout << "We believe you typed it wrong, the temperature at 12:00PM is typically greater than at 8:00AM, please retry. >>>" << std::endl;
		std::cout << "What was the temperature at 12:00PM in Celsius? >>>" << std::endl;
		std::cin >> tempAtNoon;
	}
	else{}
	std::cout << "What was the temperature at 5:00PM in Celsius? >>>" << std::endl;
	std::cin >> tempAtFivePM;
	//Outputs
	std::cout << "The temperature at 8:00 AM is: " << tempAtEightAM << " in Celsius, and " << tempAtEightAM*1.8 + 32 << " in fahrenheit." << std::endl;
	std::cout << "The temperature at 12:00 PM is: " << tempAtNoon << " in Celsius, and " << tempAtNoon*1.8 + 32 << " in fahrenheit." << std::endl;
	std::cout << "The temperature at 5:00 PM is: " << tempAtFivePM << " in Celsius, and " << tempAtFivePM*1.8 + 32 << " in fahrenheit." << std::endl;
	//Conclusion
	system("pause");
	return 0;
}