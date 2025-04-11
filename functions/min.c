#include <stdio.h>

double mymin(double x, double y){
	if (x > y){
		return y;
	} else if (x < y){
		return x;
	}else {
		printf("Numbers are equal");
		return -1;
	}	
	
}
