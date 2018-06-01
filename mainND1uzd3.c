#include <stdio.h>
#include <stdlib.h>
#define ars 15

int inserting1(int ary[]);
int show(int ary2[], int asd2);

int main() {
	
	int asd;
	int ary1[ars];
	
	inserting1(ary1);
	printf("insert integer: \n");
	scanf("%d", &asd);
	show(ary1,asd);
	
	return 0;
}

int inserting1(int ary[]){
	int abc = 0;
	while(abc<ars){
		printf("insert number %d: \n", abc+1);
		scanf(" %d", &ary[abc]);
		abc++;
	}
	return ary;
}

int show(int ary2[], int asd2){
	
	int ans;
	int qwe;
	int abc2;
	
	for(qwe = 0, abc2 = 0; qwe<ars; qwe++, abc2++){
		ans = ary2[qwe]*asd2;
		printf("array number is %d other array is %d \n", ary2[abc2], ans);
	}
	return ans;
}
