#include <stdio.h>
#include <stdlib.h>
#define pin 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sifras(FILE *filep,char kod[] );

int main(int argc, char *argv[]) {
	
	char kod[pin];
	int i;
	FILE *filep;
	filep = fopen("aadata.txt", "w");
	printf("ivesti pin koda:\t");
	for(i = 0; i<pin;i++){
		kod[i]=getchar();
	}
	printf("ccc:%c\t",kod[3]);
	fclose(filep);
	
	return 0;
}
