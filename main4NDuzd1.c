#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ASC0 'A'        // letter A
#define ASC1 'Z'        // letter Z
#define asc0 'a'        // letter a
#define asc1 'z'        // letter z

char symb;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*	while(1){
		
		printf("enter the symbol\n");
		//scanf("%c", &symb);
		symb = getchar();
		
		if( ((symb >= asc0) && (symb <= asc1)) || ((symb >= ASC0) && (symb <= ASC1)) ){
		
			printf("This is a letter in ");
		
			if((symb >= asc0) && (symb <= asc1)){
				printf("lowercase\n");
			}
			else {
				printf("uppercase\n");
			}
		
		} 
		else {
			printf("this is not a letter\n");
		}
*/
		
		
		
	while(1)
	{
	printf("enter the symbol\n");
	scanf(" %c", &symb);
	//symb = getchar();
	
	if((symb >= asc0) && (symb <= asc1)){
		printf("the letter is lowercase\n");
	} else if((symb >= ASC0) && (symb <= ASC1)){
		printf("the letter is in uppercase\n");
	} else {
		printf("this is not a letter\n");
	}
}
	return 0;
}
