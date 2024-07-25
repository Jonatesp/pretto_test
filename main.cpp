#include <stdlib.h>
#include <iostream>
#include "second_question.cpp"
#include "third_question.cpp"

int main() {
	double amount = 160000.0;
	double rate = 0.018;
	double duration = 300.0;
	double monthly = monthly_calcul(amount,rate, duration);

	std::cout << "monthly payment : " << monthly << std::endl;
	std::cout << "total interests : " << interests_calcul(amount, rate, duration) << std::endl;
	std::cout << "ratio : " << ratio(0.0115, 180.0, rate, duration) << std::endl;
}