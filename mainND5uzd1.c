#include <stdio.h>
#include <stdlib.h>

#define om 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float inputval;
	float val[30];
	int tas = 1;
	int asd;
	float s;
	float rez1 = 0;      // series
	float rez2 = 0;     //  pararel
	
	
	printf("enter resistence in kOhms\n");
	scanf(" %f", &inputval);
	val[0] = inputval;
	while(inputval != 0){
		scanf(" %f", &inputval);
		val[tas] = inputval;
		tas++;
	}
	for (asd = 0; asd<tas; asd++){
		rez1 = rez1 + val[asd];
	}
	rez2 = 1/rez1;
	
	printf("tas %d\n", tas);
	printf("rez %.2f %c", rez1, om);
	printf("rez %.2f %c", rez2, om);
	
	return 0;
}
