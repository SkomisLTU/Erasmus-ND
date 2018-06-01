#include <stdio.h>
#include <stdlib.h>

struct list{
	
	int snum;
	char fnm[15];
	char snm[15];
	int year;
	
};

void inserting(struct list a[], int ffl);
void EditByID(struct list a[]);
void Display(struct list a[], int ffl);

int main() {
	
	int choice;
	int ffl = 0;     // integer to for loop which will be changed only when entering ///
	int asd;
	int num;
	struct list a[100];      ////// dabar/darau/antra
	while(1){
		printf("Enter number:\t1 to introduce new students\t");
		printf("2 to  edit data\t3 to list catalog\n");
		scanf("%d", &choice);
		if(choice == 1){
			inserting(a, ffl);
			printf(" %d \t %s \t %s \t %d \n", a[ffl].snum, a[ffl].fnm, a[ffl].snm, a[ffl].year);
			printf("ffl is %d ", ffl);
			ffl++;
		}
		if(choice == 2){
			EditByID(a);
		}
		if(choice == 3){
			Display(a, ffl);
		}
		
	}
	
	
	
	
	
	return 0;
}


void inserting(struct list a[], int ffl){
	
	
	printf("enter students number\t");
	scanf(" %d", &a[ffl].snum);
	printf("enter students first name\t");
	scanf(" %s", &a[ffl].fnm);
	printf("enter students last name\t");
	scanf(" %s", &a[ffl].snm);
	printf("enter students year\t");
	scanf(" %d", &a[ffl].year);
	
	return;
}

void EditByID(struct list a[]){
	
	int sID;
	int inc = 0;
	printf("enter student number\n");
	scanf(" %d", &sID);
	while(1){
		if(a[inc].snum == sID){
			printf("student found: \n");
			printf("student number\t name\t last name\t year\n");
			printf("%d\t %s\t %s\t %d\n\n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
			printf("enter students number\n");
			scanf(" %d", &a[inc].snum);
			printf("enter students first name\n");
			scanf(" %s", &a[inc].fnm);
			printf("enter students last name\n");
			scanf(" %s", &a[inc].snm);
			printf("enter students year\n");
			scanf(" %d", &a[inc].year);
			break;
		}
		if(inc == 100){
			printf("nothing found :( \n)");
			break;
		}
		inc++;
	}
	return;
}

void Display(struct list a[], int ffl){
	
	int inc = 0;
	prinf("ffl yra ",ffl);
	printf("student number\t name\t last name\t year\n");
	while(inc <= ffl){
		
		printf("%d\t %s\t %s\t %d\n\n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
		inc++;
	}
	
}

