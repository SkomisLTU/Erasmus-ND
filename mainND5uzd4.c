#include <stdio.h>
#include <stdlib.h>


int recursiveMinimum(int arr[], int asd);
int minval(int min1, int min2);

int main(int argc, char *argv[]) {
	
	int a[10];
	int size = 10;
	int i;
	printf("enter array numbers");
	for(inc = 1; inc <= 10; inc++){
		printf("enter array number %d:\n", inc);
		scanf("%d", &arr[inc-1]);
	}
	min = recursiveMinimum(arr, 10);
	printf("min value is %d", min);
	return 0;
}

int recursiveMinimum(int arr[], int asd){
	
	if(asd == 0)
	return arr[0];
	return minval(recursiveMinimum(arr, asd-1), arr[asd]);
}

int sort(int a, int size){
	int maxindex, t;
	if(seze>1)
}
