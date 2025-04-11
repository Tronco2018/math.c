#include <stdio.h>

double mymax(double x, double y){
	if (x < y){
		return y;
	} else if (x > y){
		return x;
	}else {
		printf("Numbers are equal");
		return -1;
	}	
	
}
int main() {
	printf("%f", mymax(1, 3));
}
