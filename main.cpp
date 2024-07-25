#include <stdlib.h>
#include <iostream>
#include "third_question.cpp"

int main() {
	double amount1 = 140000.0;
	double rate1 = 0.038;
	double duration1 = 264.0;
	double amount2 = 160000.0;
	double rate2 = 0.044;
	double duration2 = 300.0;
	double monthly = monthly_calcul(amount2,rate2, duration2);

	std::cout << "Monthly payment : " << monthly << std::endl;
	std::cout << "Total interests : " << interests_calcul(amount2, rate2, duration2) << std::endl;
	std::cout << "Ratio : " << ratio(rate1, duration1, rate2, duration2) << std::endl;

	//rate grid in a map with duration of the loan as key and rate as value
	std::map<int, double> rate_grid;
	rate_grid[10] = 2.9;
	rate_grid[12] = 3.2;
	rate_grid[15] = 3.5;
	rate_grid[20] = 3.8;
	rate_grid[22] = 3.8;
	rate_grid[25] = 4.4;

	best_interests(rate_grid, 25);
}