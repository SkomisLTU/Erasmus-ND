#include <stdio.h>
#include <stdlib.h>

char number[];
int  real;

int main() {
	
	printf("enter number:");
	scanf("%d", &real);
	itoa(real, number, 10);
	printf("string is : %s", number);
	return 0;
}
