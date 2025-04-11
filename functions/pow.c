#include <stdio.h>

double mypow(double a, int exp){
	double result = 1.0;
	int positive_exp = exp;
	if (exp < 0){
		a = 1.0 / a;
		positive_exp = -exp;
	} 
	for (int i = 0; i < positive_exp; i++){
		result *= a;
	}
	return result;
}


