//EggCosts
//4/5/2018
//Author: Brandon Seamer

//IPO Chart
/*
Inputs: userEggs dozenEggs, remainderEggs, costPerDozen, costPerIndividual, discountCostPerDozen, totalCost
Processes: dozenEggs = userEggs / 12, remainderEggs = userEggs % 12, totalCost = dozenEggs*costPerDozen + remainderEggs*costPerIndividual
Outputs: totalCost
*/
#include <iostream>
#include <string>
//Declare Variables
int main()
{
	int userEggs;
	int dozenEggs;
	int remainderEggs;
	double costPerDozen = 2;
	double costPerIndividual = .25;
	double discountCostPerDozen = 1.5;
	double totalCost;

	//UserInputs
	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> userEggs;
	//Processes
	dozenEggs = userEggs / 12;
	remainderEggs = userEggs % 12;
	if (dozenEggs < 11)
	{
		totalCost = dozenEggs*costPerDozen + remainderEggs*costPerIndividual;
	}
	else
	{
		totalCost = dozenEggs*discountCostPerDozen + remainderEggs*costPerIndividual;
	}
	//Output
	std::cout << "Your total cost is: " << totalCost << ". " << std::endl;

	system("pause");
	return 0;

}