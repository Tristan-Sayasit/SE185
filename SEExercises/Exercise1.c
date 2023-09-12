#include <stdio.h>

double toMPH(double kilometersPH);
void printMPH(double kilometersPH);

void main () {
	// change this to switch output
	double kilometersPH = 600;
	
	printMPH(kilometersPH);
	
}

double toMPH(double kilometersPH) {
	
	if (kilometersPH < 0) {
		return -1;
	}
	else {
		kilometersPH /= 1.609;
	}
	
	return kilometersPH;
}

void printMPH(double kilometersPH) {
	
	if (kilometersPH >= 0) {
		printf("%lf KPH = %lf MPH", kilometersPH, toMPH(kilometersPH));
	} else {
		printf("Invalid Value");
	}
	
}