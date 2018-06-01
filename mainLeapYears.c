#include <stdio.h>

#define ska 4
#define co1 100
#define co2 400

int year;
int ans0;   
int ans1;
int ans2;

int main() {
	
	while(1){
	    
		printf("enter the year:\n");
		scanf("%d", &year);
		
		ans0 = year % ska;
		ans1 = year % co1;
		ans2 = year % co2;
		
		if((ans2==0) || ((ans0==0) && (ans1 != 0))){
			printf("The year %d is leap year \n ", year);
		}
		else {
			printf("The year %d is not a leap year \n", year);
		}
	}
	return 0;
}
