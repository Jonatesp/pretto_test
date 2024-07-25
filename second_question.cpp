#include "first_question.cpp"

double ratio(double rate1, double duration1, double rate2, double duration2) {
	//pourcentage du petit pret avec interets (m1) par rapport au capital du petit pret (m3)
	double m1_percentage_of_m3 = (100.0 + interests_calcul(100.0, rate1, duration1)) / 100.0;
	
	//pourcentage du petit pret avec interets (m1) par rapport au grand pret avec interets (m2)
	double m1_percentage_of_m2 = (100.0 - interests_calcul(100.0, rate2, duration2)) / 100.0;

	//pourcentage du grand pret avec interets (m2) par rapport au capital du grand pret (m4)
	double m2_percentage_of_m4 = (100.0 + interests_calcul(100.0, rate2, duration2)) / 100.0;

	//formule donnant le ratio que represente le capital du petit pret dans le montant global du pret (petit + long) pour que
	return ((1.0 / m1_percentage_of_m3) / ((1.0 / m1_percentage_of_m3) + (1.0 / (m1_percentage_of_m2 * m2_percentage_of_m4))) * 100.0);
}