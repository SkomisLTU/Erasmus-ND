#include <stdio.h>
#include <stdlib.h>

#define num1 0
#define num2 90
#define size 12     // size of array

int A[size];
int B[size];
int fun;
int num;
float C[size];

void ArrA();
void ArrB();
int calculate();
void show();

int main() {
	
	ArrB();
	ArrA();
	calculate();
	show();	
	return 0;
}

void ArrA(){
	printf("\nenter A array:");
	int a;
	for(a = 0; a<size; a++){
		scanf("%d", &A[a]);
		//	printf("%d", A[a]);
	}
}

void ArrB(){
		printf("B array is: ");
	int i;
	for(i=0; i<size; i++){
		int fun = num2 - num1;
		B[i] = (rand() % (fun + 1) + num1)-40;
		printf(" %d ", B[i]);
	}
	
}

int calculate(){
	int o;
	float C[size];
	for(o=0; o<size; o++){
		C[o] = A[o] + 2.5 * B[o];
	}
}

/*void show(int A[size], int B[size], float C[size]){
	printf("C array:\n ");
	int p;
	for(p=0; p<size; p++){
		printf("%f  ", C[p]);
	}
	printf("\n\n");
	printf("A array: ");
	for(p=0; p<size; p++){
		printf("%d  ", A[p]);
	}
	printf("\n\n");
	printf("B array:\n ");
	for(p=0; p<size; p++){
		printf("%d  ", B[p]);
	}

}*/
