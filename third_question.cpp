#include <map>
#include <iostream>
#include "second_question.cpp"

void best_interests(std::map<int, double> rate_grid, int long_loan_duration) {
	double	loan_duration = 0.0;
	double	best_interests = 1000.0;

	for (std::map<int, double>::iterator it = rate_grid.begin(); it != rate_grid.end(); it++) {
		if (it->first < long_loan_duration) {
			double current_ratio = ratio(it->second / 100.0, it->first * 12, rate_grid.find(long_loan_duration)->second / 100.0, long_loan_duration * 12);
			double current_loan_interests = (interests_calcul(100.0, it->second / 100.0, it->first * 12.0) * current_ratio + interests_calcul(100.0, rate_grid.find(long_loan_duration)->second / 100.0, long_loan_duration * 12.0) * (100.0 - current_ratio)) / 100.0;
			if (current_loan_interests < best_interests) {
				best_interests = current_loan_interests;
				loan_duration = it->first;
			}
		}
	}
	std::cout << "Best interests for the short loan with a total loan duration of 25 years based on the grid is the " << loan_duration;
	std::cout << " years long loan with " << best_interests << " \% of total interests." << std::endl;
}