#include <stdio.h>
#include <stdlib.h>
#define siz 8

void PrintArray(int arr[], int a);

int main(int argc, char *argv[]) {
	
	int arr[siz];
	int i = 0;
	while(i<siz){
		printf("enter number %d\n", i+1);
		scanf("%d", &arr[i]);
		i++;
	}
	PrintArray(arr,siz-1);
	return 0;
}

void PrintArray(int arr[], int a){
	if(a<0){
		return;
	}
	PrintArray(arr,a-1);
	printf("%d", arr[a]);
	
}
