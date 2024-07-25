#include <math.h>

double monthly_calcul(double amount, double rate, double duration) {
	return (amount * ((rate / 12.0) / (1.0 - (pow(1.0 + (rate / 12.0), -duration)))));
}

double interests_calcul(double amount, double rate, double duration) {
	return (monthly_calcul(amount, rate, duration) * duration - amount);
}