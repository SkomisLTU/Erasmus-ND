#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5

void enter(int ssss[][N]);
//int enterB(int B[][N]);
void mm(int z[][N],int v[][N], int w[][N]);
void show(int xx[][N], char mn);
void show2(int *xx, int r, int c,char mn);
int main(int argc, char *argv[]) {
	
	int s, x, y, z,A[M][N], B[M][N], AA[2][2]={1,2,3,4}, BB[3][3]={10,11,12,13,14,15,16,17,18}, P[M][N];
	printf("\nEnter the A matrix : \n");
	//enter(A);
	printf("\nEnter the B matrix : \n");
//	enter(B);
	mm(P, A, B);
	show(A,'A');
	show(B, 'B');
	show(P, 'P');
	show2(AA, 2, 2, 'U');
	show2(BB, 3, 3, 'Y');
	return 0;
}

void enter(int xx[][N]){
	int x;
	int y;
	
	for(x = 0; x<M; x++){
		for(y = 0; y<N; y++){
			printf("enter the %d,%d element of the matrix : ",x+1,y+1);
		    scanf(" %d", &xx[x][y]);
		}
	}
	return;
}
/*

int enterB(int B[3][3]){
	int x;
	int y;
	printf("enter first matrix: \n");
	for(x = 0; x<=2; x++){
		for(y = 0; y<=2; y++){
		scanf(" %d", &B[x][y]);
		}
	}
	return B;
}

*/
void mm(int zz[][N],int v[][N], int w[][N])
{	

	int x;
	int y;
	int z;
	int s;
	for(x = 0; x<M; x++){
		for(y = 0; y<N; y++){
			zz[x][y] = 0;
			for(z = 0; z<N; z++){
				zz[x][y] += v[x][z]*w[z][y];
			}
		}
	}
	return;
}
	
void show(int xx[][N], char mn){
int x, y;
    printf("\nThe matrix %c is :\n",mn);	
	for(x = 0; x<M; x++){
		for(y = 0; y<N; y++){
		   printf("%10d", xx[x][y]);
		}
		printf("\n");
	}
	return;
}

void show2(int *xx, int r, int c,char mn)
{
int x, y;
    printf("\nThe matrix %c is :\n",mn);	
	for(x = 0; x<r; x++){
		for(y = 0; y<c; y++){
		   printf("%10d", xx[x*c+y]);
		}
		printf("\n");
	}
	return;
}


/*



#include <stdio.h>
#include <stdlib.h>

// run this program using the console pauser or add your own getch, system("pause") or input loop 


int main(int argc, char *argv[]) {
	
	int s;
	int x;
	int y;
	int z;
	int A[3][3];
	int B[3][3];
	int C[3][3];
	
	printf("enter first matrix: \n");
	for(x = 0; x<=2; x++){
		for(y = 0; y<=2; y++){
		scanf("%d", &A[x][y]);
		}
	}
		printf("enter first matrix: \n");
	for(x = 0; x<=2; x++){
		for(y = 0; y<=2; y++){
		scanf("%d", &B[x][y]);
		}
	}
	
	
	
	for(x = 0; x<=2; x++){
		for(y = 0; y<2; y++){
			s = 0;
			for(z = 0; z<=2; z++){
				s = s+A[x][z]*B[z][y];
			}
			C[x][y]= s;
		}
	}
	for(x = 0; x<=2; x++){
		for(y = 0; y<=2; y++){
		printf(" %d   ", C[x][y]);
		}
	}
	return 0;
}


*/
