#include <stdio.h>
#include <stdlib.h>

int skaiciavims(int b,int e){
	int c;
	int ans = 1;
	for(c=0; c<e; c++){
		ans = ans * b;
	}
	return ans;
}

int main() {
	
	int b;
	int e;
	int ans;
	
	printf("enter the number b \n");
	scanf("%d",&b);
	printf("enter the number e \n");
	scanf("%d",&e);
	
	ans = skaiciavims(b,e);
	printf("answer is %d \n", ans);
	
	return 0;
}

