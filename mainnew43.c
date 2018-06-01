#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	char str[10];
	int num;
	int sum;
	int div = 11;
	int i;
	printf("enter number\n");
	scanf("%d", &num);
	
	while(div>10){
		sum = num % 10;
		div = num / 10;
		printf("sum: %d\n", sum);
		printf("div :%d\n", div);
		i++;
	}
	
	return 0;
}
