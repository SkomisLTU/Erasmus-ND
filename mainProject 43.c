#include <stdio.h>
#include <stdlib.h>

int toS(int num, char str2[]);

int main(int argc, char *argv[]) {
	char str2[10];
	int num;
	printf("enter number\n");
	scanf("%d", &num);
	toS(num,str2);
	printf("%s", str2);
	return 0;
}
int toS(int num, char str2[]){
	char str1[10];
	int sum;
	int div;
	int i = 0, inc;
	while(num>0){
		
		sum = num % 10;
		num = num / 10;
		str1[i] = sum+'0';
		i++;
	}
	i--;
	inc = i;
	for(inc;inc>=0;inc--){
		str2[inc]=str1[i-inc];
	}
	str2[i+1] = '\0';
	return str2;
}
