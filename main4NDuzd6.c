#include <stdio.h>
#include <stdlib.h>

int main() {
	int menu = 0;
	int a;     //student number
	int b;    // student first name
	int c;   //  student surname
	int d;  //   introduction year
	char ch[100];
	long number = 0;
	
	printf("select what would you like to do:\n");
	printf("1 to introduce new students\n");
	printf("2 to edit data\n");
	printf("3 to list the catalog\n");
	
	scanf("%d", &menu);
	
	
	
	FILE *filep;
	filep = fopen("pasaka.txt", "w");
	
	
	
	while(1){
		ch = fgetc(filep);
		if(ch == EOF){
			break;
		}
		else {
			number++;
		}
		if(ch == ' '){
			number--;
		}
		
	}
	fclose(filep);
	printf("number of characters is: %d", number);
	return 0;
}
