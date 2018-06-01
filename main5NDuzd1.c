#include <stdio.h>
#include <stdlib.h>


void calc(float val[], int tas);


int main() {
	
	float inputval;
	float val[30];
	int tas = 1;
	
	printf("enter resistence in kOhms\n");
	scanf(" %f", &inputval);
	val[0] = inputval;
	while(inputval != 0){
		scanf(" %f", &inputval);
		val[tas] = inputval;
		tas++;
	}
	calc(val, tas);
	
	return 0;
}



void calc(float val[], int tas){
	float rez1 = 0;      //   series
	float rez2 = 0;     //  parrarel
	int asd;
	float hhy;
	for (asd = 0; asd<tas-1; asd++){
		rez1 = rez1 + val[asd];
		rez2 = rez2 + 1/val[asd];
	}
	rez2 = 1/rez2;
	
	printf("tas %d\n", tas);
	printf("rez %.2f kOhm or %.0f Ohm\n", rez1, rez1*1000);
	printf("rez %.2f kOhm or %.0f Ohm\n", rez2, rez2*1000);
	return;
}
