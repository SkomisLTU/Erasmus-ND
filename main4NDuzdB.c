#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int convert(char nmc[18]);

int main() {
	
	long long num;
	char nmc[18];
	
	printf("enter number as string (max 18 digits):\n");
	printf("           ");
	scanf(" %s", &nmc);
	num = convert(nmc);
	return 0;
}

int convert(char nmc[18]){
	int ones  = 1;
	int integer;
	long long num;
	num = 0;
	for(integer = 0; nmc[integer]!='\0'; integer++){}
	for(integer;integer>=0;integer--){
		num = num + ((nmc[integer])-'0')*(ones/10);
		ones = ones*10;
	}
	printf("number is: %lli\n", num);
	return num;
}

