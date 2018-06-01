#include <stdio.h>
#include <stdlib.h>

#define num1 0
#define num2 90

float A[12];
float B[12];
int i,o,p,a;
int fun;
int num;
float C[12];

int main() {
	
	printf("B array is: ");
	
	for(i=0; i<12; i++){
		fun = num2 - num1;
		B[i] = (rand() % (fun + 1) + num1)-40;
		printf(" %f ", B[i]);
	}
	printf("\nenter A array:");
	for(a=0; a<12;a++){
		scanf("%d", &A[a]);
	//	printf("%d", A[a]);
		
	}
	
	for(o=0; o<12; o++){
		C[o] = A[o] + 2.5 * B[o];
		
	}
	for(p=0; p<12; p++){
		printf("%f  ", C[p]);
	}
	
	return 0;
}
