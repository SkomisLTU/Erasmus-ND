#include <stdio.h>
#include <stdlib.h>

int toint(char s[]);

int main(int argc, char *argv[]) {
	
	char s[10];
	int i;
	printf("enter number as string\n");
	gets(s);
	i = toint(s);
	printf(" string is %d\n", i);
	
	return 0;
}

int toint(char s[]){
	int num, snum, dnum;
	int ten = 1,i;
	for(i=0;s[i]!='\0';i++);
	i--;
	for(i;i>=0;i--){
		num = (s[i]-'0')*ten;
		snum = num+snum;
		ten = ten*10;
	}
	return snum;
	
}
