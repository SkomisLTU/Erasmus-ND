#include <stdio.h>
#include <stdlib.h>

int inserting1(int ary[15]);
int show(int ary2[15], int ans2);

int main() {
	int asd1;
	int ary1[15];
	
	
	inserting1(ary1);
	inserting2(asd1);
	show(ary1, asd1);
	
	return 0;
}

int inserting1(int ary[15]){
	int asd;
	int abc = 0;
	while(abc<15){
		printf("insert number %d: \n", abc+1);
		scanf(" %d", &ary[abc]);
		abc++;
	}
	
}

int inserting2(int asd){
	printf("insert integer: \n");
	scanf("%d", &asd);
	return asd;
}

int show(int ary2[15], int asd2){
	int ans;
	int qwe;
	int abc2;
	
	for(qwe = 0, abc2 = 0; qwe<15; qwe++, abc2++){
		ans = ary2[qwe]*asd2;
		printf("array number is %d other array is %d \n", ary2[abc2], ans);
	}
	return ans;
}


