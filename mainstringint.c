#include <stdio.h>
#include <stdlib.h>

int number;
char somenum[];

int main(){
	
	printf("enter number as string:\n");
	gets(somenum);
	number = atoi(somenum);
	printf("%d", number);
	
	return 0;
}
