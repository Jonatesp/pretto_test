#include "first_question.cpp"

double ratio(double rate1, double duration1, double rate2, double duration2) {
	double m1_percentage_of_m3 = (100.0 + interests_calcul(100.0, rate1, duration1)) / 100.0;
	double m1_percentage_of_m2 = (100.0 - interests_calcul(100.0, rate2, duration2)) / 100.0;
	double m2_percentage_of_m4 = (100.0 + interests_calcul(100.0, rate2, duration2)) / 100.0;
	
	return ((1.0 / m1_percentage_of_m3) / ((1.0 / m1_percentage_of_m3) + (1.0 / (m1_percentage_of_m2 * m2_percentage_of_m4))) * 100.0);
}