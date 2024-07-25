#include <stdlib.h>
#include <iostream>
#include "first_question.cpp"
#include "second_question.cpp"
#include "third_question.cpp"

int main() {
	float amount = 160000.0;
	float rate = 0.018;
	float duration = 300.0;
	float monthly = monthly_calcul(rate, duration, amount);

	std::cout << "total interests : " << round(interests_calcul(amount, monthly, duration)) << std::endl;
}