#include <stdio.h>
#include <stdlib.h>

double bodyFatPercentage (int userAge, int userGender, double userWeight, double userHeight);

void main () {
	int userAge;
	int userGender;
	double userWeight;
	double userHeight;
	double bfp;
	
	printf("Please enter your age: ");
	scanf(" %d", &userAge);
	
	if (userAge < 18 || userAge > 79) {
		printf("The user input must be adult for reliable body fat calculation\n");
		exit(0);
	}
	
	printf("Enter 0 for female or 1 for male: ");
	scanf(" %d", &userGender);
	printf("Please enter your weight in kg: ");
	scanf(" %lf", &userWeight);
	printf("Please enter your height in meters: ");
	scanf(" %lf", &userHeight);
	printf("\n");
	
	bfp = bodyFatPercentage(userAge, userGender, userWeight, userHeight);
	
	if (userGender == 0) {  // if female
		if (userAge >= 20 && userAge <= 39) {
			if (bfp <= 33.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime.");
			} else if (bfp >= 33.01 && bfp <= 39.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels.");
			} else if (bfp > 39.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
			
		if (userAge >= 40 && userAge <= 59) {
			if (bfp <= 35.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime.");
			} else if (bfp >= 35.01 && bfp <= 40.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels.");
			} else if (bfp > 40.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
			
		if (userAge >= 60 && userAge <= 79) {
			if (bfp <= 36.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime");
			} else if (bfp >= 36.01 && bfp <= 42.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels");
			} else if (bfp > 42.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
		}
		
	if (userGender == 1) {  // if male
		if (userAge >= 20 && userAge <= 39) {
			if (bfp <= 19.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime.");
			} else if (bfp >= 19.01 && bfp <= 25.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels.");
			} else if (bfp > 25.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
			
		if (userAge >= 40 && userAge <= 59) {
			if (bfp <= 22.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime.");
			} else if (bfp >= 22.01 && bfp <= 28.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels.");
			} else if (bfp > 28.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
			
		if (userAge >= 60 && userAge <= 79) {
			if (bfp <= 25.0) {
				printf("Your body fat percentage is NORMAL\n");
				printf("\n");
				printf("Maintain healthy diet and exercise regime.");
			} else if (bfp >= 25.01 && bfp <= 30.0) {
				printf("Your body fat percentage is ABOVE AVERAGE\n");
				printf("\n");
				printf("Make an honest assessment of your diet and exercise levels.");
			} else if (bfp > 30.0) {
				printf("Your body fat percentage is HIGH\n");
				printf("\n");
				printf("Your health may be at risk. Seek advice from a GP.");
			}
			}
		}
}

double bodyFatPercentage (int userAge, int userGender, double userWeight, double userHeight) {
	double calculateBodyFatPercentage;
	double bmi;
	
	bmi = userWeight / (userHeight * userHeight);
	
	calculateBodyFatPercentage = (1.39 * bmi) + (0.16 * userAge) - (10.34 * userGender) - 9;
	
	return calculateBodyFatPercentage;
}