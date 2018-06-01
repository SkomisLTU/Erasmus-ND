/*
#include <stdio.h>
#include <stdlib.h>
void check(char ch, int* slash, int* star, int* num, char* ss);
int main() {

	char ch;
	char ss;
	int slash = 0;
	int star  = 0;
	int state = 0;
	int num   = 0;

	FILE *filep;
	FILE *newfp;
	filep = fopen("pasaka.txt", "r");
	newfp = fopen("pafailas.txt", "w");

	while(1){
		ch = fgetc(filep);
		if(ch == EOF){
			break;
		}
		
		check(ch, &slash, &star, &num, &ss);
		printf("OUT %d \t %d \t %d \t %c\n", num, slash, star, ss);
		
		if(((state == 1) && (star == 0) && (ch == '/'))||((state == 0) && (ch == '*') && (slash == 1))){
            if(state == 1){
                state = 0;
		}
			else{state = 1;}
		}
		if(state == 0 && num == 0){
            fprintf(newfp, "%c", ch);
		}
		if(state == 0 && num == 1){
			
		}
		num = 0;
	}
	fclose(filep);
	fclose(newfp);
	//remove("pasaka.txt");
	//rename("pafailas.txt", "pasaka.txt")
	//printf("stte: %d ", state);
	//printf("number of characters is: %d \n", num);
	return 0;
}

void check(char ch, int* slash, int* star, int* num, char* ss){

	if(ch == '/'){
		*num = num +1;
		*ss = ch;
		if(*slash == 0){
			*slash = 1;
		}
		else{*slash = 0;}
	}
	if(ch == '*'){
		*num = num + 1;
		*ss = ch;
		if(*star == 0){
			*star = 1;
		}
		else{*star = 0;}
	}
	printf("IN %d \t %d \t %d \t %c\n", num, slash, star, ss);
	return;
	
}













#include <stdio.h>
#include <stdlib.h>
void check(char ch, int* slash, int* star, int* num, char* ss);
int main() {

	char ch;
	char ss;
	int slash = 0;
	int star  = 0;
	int state = 0;
	int num   = 0;

	FILE *filep;
	FILE *newfp;
	filep = fopen("pasaka.txt", "r");
	newfp = fopen("pafailas.txt", "w");

	while(1){
		ch = fgetc(filep);
		if(ch == EOF){
			break;
		}
		
		if(ch == '/'){
		num++;
		ss = ch;
		if(slash == 0){
			slash = 1;
		}
		else{slash = 0;}
	}
	if(ch == '*'){
		num++;
		ss = ch;
		if(star == 0){
			star = 1;
		}
		else{star = 0;}
	}
		
		if(((state == 1) && (star == 0) && (ch == '/'))||((state == 0) && (ch == '*') && (slash == 1))){
            if(state == 1){
                state = 0;
		}
			else{state = 1;}
		}
		if(state == 0 && num == 0){
            fprintf(newfp, "%c", ch);
		}
		if(state == 0 && num == 1){
			
		}
		num = 0;
	}
	fclose(filep);
	fclose(newfp);
	//remove("pasaka.txt");
	//rename("pafailas.txt", "pasaka.txt")
	//printf("stte: %d ", state);
	//printf("number of characters is: %d \n", num);
	return 0;
}

void check(char ch, int* slash, int* star, int* num, char* ss){

	
	return;
	
}

*/






#include <stdio.h>
#include <stdlib.h>


int main() {

	char ch;
	char ss;              //   antram simboliui patikrint
	int slash = 0;
	int star  = 0; 
	int state = 0;
	int num   = 0;
	int print = 0;
	int stint = 0;    //  /  /   /  0 ==> bekomentaru  1==> komentarai

	FILE *filep;
	FILE *newfp;
	filep = fopen("pasaka.txt", "r");
	newfp = fopen("pafailas.txt", "w");

	while(1){
		ch = fgetc(filep);
		if(ch == EOF){
			break;
		}
		
		if(ch == '/' || ch == '*'){
			ss = fgetc(filep);
			stint = 1;
			if(ch == '/' && ss == '*'){
				state = 1;
				print = 1;
			}
			if(ch == '*' && ss == '/'){
			
				state = 0;
				print = 1;
			}
		}
		
		if(state == 0 && print == 0){
			fprintf(newfp, "%c", ch);
		}
		if(stint == 1 && state == 0 && print == 0){
			fprintf(newfp, "%c", ss);
		}
		print = 0;
		stint = 0;
	}
	fclose(filep);
	fclose(newfp);
	printf("done :)");
	//remove("pasaka.txt");
	//rename("pafailas.txt", "pasaka.txt")
	return 0;
}


