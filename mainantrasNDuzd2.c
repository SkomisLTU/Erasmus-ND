#include <stdio.h>
#include <stdlib.h>


int a;
int b;
int c;
int d;      		// pradinis zodzio ilgis

char str[20];
char ch;

void squeeze(){
	d=c-b;
	printf("number of erased \"%c\"  letters is %d  \n",ch, d);
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	printf("Enter word\n");
	gets(str);
	printf("Enter letter that is in need to replace\n");
	scanf("%c", &ch);
	for(c = 0; str[c] != '\0'; ++c);                           // Sitas skirtas surasti zodzio ilgi
	
	for(a=0,b=0;a<c;a++){
		if(str[a]!=ch){
			str[b]=str[a];
			b++;
		}
	}
	
	str[b]='\0';
	printf("Word without letters is %s \n",str);
	
	squeeze();
	
	return 0;
}
