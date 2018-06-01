#include <stdio.h>
#include <stdlib.h>

#define ASC0 0x41        // letter A
#define ASC1 0x5A        // letter Z
#define asc0 0x61        // letter a
#define asc1 0x7A        // letter z

char symb;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {		
		


	printf("enter the symbol\n");
	//scanf("%c", &symb);
	symb = getchar();
	
	if((symb >= asc0) && (symb <= asc1)){
		symb = symb - 32;
		printf("%c\n", symb);
	} else if((symb >= ASC0) && (symb <= ASC1)){
		symb = symb + 32;
		printf("%c\n", symb);
	} else {
		printf("%c\n", symb);
	}

	return 0;
}
