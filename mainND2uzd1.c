#include <stdio.h>
#include <stdlib.h>

int getword(char s1[]);
int replace(char s2[], char c1, char c2);

int main() {
	
	char s[15];
	char c1;
	char c2;
	
	getword(s);
	printf("enter c1:\n");
	scanf(" %c", &c1);
	printf("enter c2:\n");
	scanf(" %c", &c2);
	replace(s,c1,c2);
	
	return 0;
}

int getword(char s1[]){
	
	printf("enter s \n");
	scanf(" %s", s1);
	
	return s1;
}

int replace(char s2[],char c1, char c2){
	
	int a;
	while(s2[a] != '\0'){
		if(s2[a]==c1){
			s2[a]=c2;
		}
		a++;
	}
	fputs(s2, stdout);
	//printf("%s", s2);
	return s2;
}
