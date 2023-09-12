#include <stdio.h>

void compareDouble(double var1, double var2);

void main () {
	double var1;
	double var2;

	printf("Enter first variable: ");
	scanf("%lf", &var1);
	printf("Enter second variable: ");
	scanf("%lf", &var2);
	
	compareDouble(var1, var2);
	
}

void compareDouble(double var1, double var2) {
	if ((int)(var1 * 1000) == (int)(var2 * 1000)) {
		printf("Values are equal");
	}
		else {
			printf("Values are not equal");
		}
}