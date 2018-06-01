#include <stdio.h>
#include <stdlib.h>

#define ASC0 'A'    //\\      //\\letter A
#define ASC1 'Z'   //  \\    //  \\letter Z
#define asc0 'a'  //    \\  //    \\letter a
#define asc1 'z' //      \\//      \\letter z



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {		
	char symb;
	printf("enter the symbol\n");
	while((symb = getchar()) != EOF)
	{
	//printf("enter the symbol\n");
	//scanf(" %c", &symb);
	//symb = getchar();
	
	if((symb >= 'a') && (symb <= 'z')){
		//symb = symb - 32;
		symb = symb - 'a'+'A';
		//printf("%c", symb);
	} else if((symb >= 'A') && (symb <= 'Z')){
		//symb = symb + 32;
		symb = symb + 'a'-'A';
		//printf("%c", symb);
	}
	printf("%c", symb);
	
}
	return 0;
}
