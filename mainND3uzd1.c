#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int rol;
	int dice1;
	int dice2;
	int both;
	int num[13];
	int rod = 2;    
	srand(time(NULL));
	for(rol = 0; rol < 36000; rol++){
		dice1 = 1+rand() % 6;
		dice2 = 1+rand() % 6;
		both  =dice1 + dice2;
		num[both] = num[both]+1;
		//printf("%d %d %d \n", dice1, dice2, both);
		
	}
/*	
	printf("numeber 2   rolled %d times\n",  num[2]);
	printf("numeris 3   rolled %d times\n",  num[3]);
	printf("numeber 4   rolled %d times\n",  num[4]);
	printf("numeber 5   rolled %d times\n",  num[5]);
	printf("numeber 6   rolled %d times\n",  num[6]);
	printf("numeber 7   rolled %d times\n",  num[7]);
	printf("numeber 8   rolled %d times\n",  num[8]);
	printf("numeber 9   rolled %d times\n",  num[9]);
	printf("numeber 10  rolled %d times\n",  num[10]);
	printf("numeber 11  rolled %d times\n",  num[11]);
	printf("numeber 12  rolled %d times\n",  num[12]);
*/
	for(rod = 2; rod <= 12; rod++){
		printf("numeber %d   rolled %d times\n", rod, num[rod]);
	}
	
	return 0;
}
