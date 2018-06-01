#include <stdio.h>
#include <stdlib.h>

#define num1 -40
#define num2 50
#define size 5     // size of array

void ArrA(int A[size]);
void ArrB(int B[size]);
void calculate(float C[size], int A[size], int B[size]);
void show(float C[size], int A[size], int B[size]);

int main() {
	int A[size];
	int B[size];
	int fun;
	int num;
	float C[size];
	srand(time(NULL));
	ArrB(A);
	ArrA(B);
	calculate(C, A, B);
	show(C, A, B);	
	return 0;
}

void ArrA(int A[size]){
	printf("\nenter A array:");
	int a;
	for(a = 0; a<size; a++){
		scanf("%d", &A[a]);
		//	printf("%d", A[a]);
	}
	return;
}

void ArrB(int B[size]){
		printf("B array is: ");
	int i;
	for(i=0; i<size; i++){
		int fun = num2 - num1;
		B[i] = (rand() % (fun + 1) + num1);
		printf(" %d ", B[i]);
	}
	return;
}

void calculate(float C[size], int A[size], int B[size]){
	int o;
	float s;
	//float C[size];
	for(o=0; o<size; o++){
		
		s = A[o] + (2.5 * B[o]);
		C[o] = s;
		
	}
	return;
}

void show(float C[size], int A[size], int B[size]){
	printf("C array:\n ");
	int p;
	for(p=0; p<size; p++){
		printf("%f ", C[p]);
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
	return;
}
	
