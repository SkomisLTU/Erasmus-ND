#include <stdio.h>        ////  5ND uzd6
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
void swithcstr(struct list a[], int top);

int main() {

	int choice;
	int ffl = 0;
	int asd;
	int num;
	struct list a[100];
	while(1){
		printf("enter number:\n1 to introduce new students\n");
		printf("2 to edit data\n3 to list catlog\n 4 to sort by number\n");
		scanf("%d", &choice);
		if(choice == 1){
			inserting(a, ffl);
			printf(" %d \t %s \t %s \%d \n", a[ffl].snum, a[ffl].fnm, a[ffl].snm, a[ffl].year);
			ffl++;
		}
		if(choice == 2){
			EditByID(a);
		}
		if(choice == 3){
			Display(a, ffl);
		}
		if(choice == 4){
			swithcstr(a, ffl);
		}
	}
	return 0;
}

void inserting(struct list a[], int ffl){

	printf("enter students number\n");
	scanf(" %d", &a[ffl].snum);
	printf("enter students first name\n");
	scanf(" %s", a[ffl].fnm);
	printf("enter students last name\n");
	scanf(" %s", a[ffl].snm);
	printf("enter students year\n");
	scanf(" %d", &a[ffl].year);

	return;

}

void EditByID(struct list a[]){

	int sID;
	int inc = 0;
	printf("enter student`s number\n");
	scanf(" %d", &sID);
	while(1){
		if(a[inc].snum == sID){
			printf("student found: \n");
			printf(" %d \t %s \t %s \%d \n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
			printf("enter students number\n");
			scanf("%d", &a[inc].snum);
			printf("enter students first name\n");
			scanf("%d", &a[inc].fnm);
			printf("enter students last name\n");
			scanf("%d", &a[inc].snm);
			printf("enter students year\n");
			scanf("%d", &a[inc].year);
			break;

		}
		if(inc == 100){
			printf("nothing found\n");
			break;
		}
		inc++;
	}
	return;
}

void Display(struct list a[], int ffl){

	int inc = 0;
	//printf("ffl yra \n", ffl);
	printf("student number \t name\t last name\t year \n");
	while(inc <= ffl){

		printf("%d\t\t %s \t %s \t %d \n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
		inc++;
	}
	return;
}

void swithcstr(struct list a[100], int top){

	int inc;
	int toph;
	int sorted;
	int h;
	int Qsnum;
	char Qfnm[15];
	char Qsnm[15];
	int Qyear;
	struct list b[100];
	do{
		for(inc = 0; inc<top; inc++){
			if(a[inc].snum>a[inc+1].snum){
				b[inc] = a[inc];
				a[inc] = a[inc+1];
				a[inc+1] = b[inc];
				/*a[inc].snum = a[inc+1].snum;
				a[inc+1].snum = Qsnum;

				Qfnm = a[inc].fnm;
				a[inc].fnm = a[inc+1].fnm;
				a[inc+1].fnm = Qfnm;

				Qsnm = a[inc].snm;
				a[inc].snm = a[inc+1].snm;
				a[inc+1].snm = Qsnm;

				Qyear = a[inc].year;
				a[inc].year = a[inc+1].year;
				a[inc+1].year = Qyear;

				toph = inc;
				sorted = 0;*/
			}
			top = toph;
		}
	}while(sorted == 0);
	return;
}
