#include <stdio.h>
#include <stdlib.h>

void raides(int sk);


int main() {
	
	int sk;
	int c;
	printf("ivesti\n");
	scanf("%d", &sk);
	c =  raides(sk);
	printf("vardas %d \n", sk);
	printf("raide %d \n", c);
	return 0;
}

void raides(int sk){
	sk = 2*sk;
	
}
