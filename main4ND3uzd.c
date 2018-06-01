#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	char str[10];
	int num;
	int sum;
	printf("enter number\n");
	scanf("%d", &num);
	
	sum = num / 10;
	printf("%d", sum);	
	
	return 0;
}
