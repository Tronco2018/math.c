#include <stdio.h>

double mysqrt(double n){
	if (n < 0) return -1;

	double x = n;
	double prev = 0.0;
	double epsilon = 1e-10;

	while ((x - prev > epsilon) || (prev - x > epsilon)){
		prev = x;
		x = 0.5 * (x + n / x);
	}
	return x;
}

