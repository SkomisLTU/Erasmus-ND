#include <stdio.h>
#include <stdlib.h>

int fakt(int num1);

int main() {
	
	int num1;
	int answ;
	while(1){
		printf("insert number: \n");
		scanf("%d", &num1);
		answ = fakt(num1);
		printf("answer is %d \n", answ);
		}
	
	return 0;
}

int fakt(int num){
	
	int ans;
	ans = num;
	
	if(ans != 0){
		while(num>1){
			ans = ans*(num - 1);
			num--;
		}
	
	} else {
		ans = 1;
	}
	return ans;
}

