#include <stdio.h>
#include <stdlib.h>

char number[15];
int  real;
char aorb;

void intTOstr(){
	printf("enter number:");
	scanf("%d", &real);
	itoa(real, number, 10);
	printf("string is : %s", number);
}

void enter(){
	printf("enter letter a for int --> string convertion\n or letter b to string --> int convertion\n");
	scanf("%c", &aorb);
	if(aorb = 'a'){
		intTOstring();
		}else if(aorb = 'b'){
		strtoint();
	}else
	enter();
}

int main() {
	
	enter();
	
	return 0;
}

