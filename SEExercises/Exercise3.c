#include <stdio.h>

void isLeapYear(int year);

void main () {
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	isLeapYear(year);
}

void isLeapYear(int year) {
	if (year > 0 && year <9999) {
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				if (year % 400 == 0) {
					printf("%d is a leap year", year);
				} else {
					printf("%d is not a leap year", year);
				}
			} else {
				printf("%d is a leap year", year);
			}
		} else {
			printf("%d is not a leap year", year);
		}
	}
}