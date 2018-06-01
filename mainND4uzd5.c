#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char ch;
	long number = 0;
	
	
	FILE *filep;
	filep = fopen("pasaka.txt", "r");
	
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
	printf("number of word is: %d", number);
	return 0;
}
