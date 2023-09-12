#include <stdio.h>

void printMegabytesAndKilobytes(int kilobytes);

int main () {
	int kilobytes = 10000;
	
	printMegabytesAndKilobytes(kilobytes);
	
	return 0;
}

void printMegabytesAndKilobytes(int kilobytes) {

int megabytes;
int leftoverkb;

megabytes = kilobytes / 1024;
leftoverkb = kilobytes % 1024;
	
if (kilobytes < 0) {
	printf("Invalid Value");
} else
	printf("%d KB = %d Mb and %d Kb", kilobytes, megabytes, leftoverkb);

}