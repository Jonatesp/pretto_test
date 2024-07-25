#include <math.h>

float monthly_calcul(float rate, float duration, float amount) {
	return (amount * ((rate / 12.0) / (1.0 - (pow(1.0 + (rate / 12.0), -duration)))));
}

float interests_calcul(float amount, float monthly, float duration) {
	return (monthly * duration - amount);
}