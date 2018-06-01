#include <stdio.h>        ////  5ND uzd6
#include <stdlib.h>

struct list{
	int snum;
	char fnm[15];
	char snm[15];
	int year;
	
};

void inserting(struct list a[], int ffl);
void EditByID(struct list a[], int ffl);
int  Display(struct list a[], int ffl);
void Display2(struct list a[], int ffl,  FILE * filep2);
void swithcstr(struct list a[], int top);
void findbynum(struct list a[], int ffl);

int main() {
    FILE * fp2;
	int choice;
	int ffl = 0;
	int asd;
	int num;
	struct list a[100];
	
	ffl = Display(a, ffl);
	printf("\nelement number in file is: %d\n", ffl);
	
	
	while(1){
		printf("\n MENU:\n1 to introduce new students\n");
		printf("2 to edit data\n3 to list catalog\n4 to sort by number\n5 to search for data by number\n\nGive your choice : ");
		scanf("%d", &choice);
		if(choice == 1){
			inserting(a, ffl);
			printf("%8d %15s %10s %4d\n", a[ffl].snum,a[ffl].fnm,a[ffl].snm,a[ffl].year);
			ffl++;
		}
		if(choice == 2){
			EditByID(a, ffl);
		}
		
		if(choice == 3){
            fp2 = fopen("listing.txt", "r");
            if(fp2 == NULL){
               printf("cannot read file");
               exit(1);
            }
		ffl = Display(a, ffl);
		EditByID(a, ffl);
        fclose(fp2);
		}
		if(choice == 4){
			swithcstr(a, ffl);
		}
		if(choice == 5){
			findbynum(a, ffl);
		}
		if(choice == 6){
			system("cls");
		}
	}
	return 0;
}

void inserting(struct list a[], int ffl){
    FILE *filep;
	printf("enter students number\n");
	scanf(" %d", &a[ffl].snum);
	printf("enter students first name\n");
	scanf(" %s", a[ffl].fnm);
	printf("enter students last name\n");
	scanf(" %s", a[ffl].snm);
	printf("enter students year\n");
	scanf(" %d", &a[ffl].year);


    filep = fopen("listing.txt", "a");
    if(filep == NULL){
        printf("cannot open file");
        exit(1);
    }
    fprintf(filep, "%8d %15s %10s %4d\n", a[ffl].snum,a[ffl].fnm,a[ffl].snm,a[ffl].year);
    fclose(filep);
	return;

}

void EditByID(struct list a[], int ffl){
	FILE * filep4;
	int sID;
	int inc = 0;
	int i;
	printf("enter student`s number\n");
	scanf(" %d", &sID);
	while(1){
		if(a[inc].snum == sID){
			printf("student found: \n");
			printf(" %d \t %s \t %s \%d \n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
			printf("enter students number\n");
			scanf("%d", &a[inc].snum);
			printf("enter students first name\n");
			scanf("%s", a[inc].fnm);
			printf("enter students last name\n");
			scanf("%s", a[inc].snm);
			printf("enter students year\n");
			scanf("%d", &a[inc].year);
			filep4 = fopen("listing2.txt", "w");
			for(i=0;i<ffl-1;i++){
				printf("%8d %15s %10s %4d\n", a[i].snum,a[i].fnm,a[i].snm,a[i].year);
				fprintf(filep4, "%8d %15s %10s %4d\n", a[i].snum,a[i].fnm,a[i].snm,a[i].year );
			}
			fclose(filep4);
			remove("listing.txt");
			rename("listing2.txt", "listing.txt");
			break;

		}
		if(inc == 100){
			printf("nothing found\n");
			system("pause");
			break;
		}
		inc++;
	}
	return;
}
void Display2(struct list a[], int ffl,  FILE * filep2){

   // FILE * filep2;
	int inc = 0;
	char line[100];
	//printf("ffl yra \n", ffl);
	printf("student number \t name\t last name\t year \n");

    while(!feof(filep2)){
        fscanf(filep2, "%d%s%s%d",&a[inc].snum, a[inc].fnm, a[inc].snm, &a[inc].year );


if(feof(filep2)== 0)
        printf("*%d*\n",a[inc].snum);

        /*a[inc].snum = fgets(line, 100, filep2);
        a[inc].fnm  = fgets(line, 100, filep2);
        a[inc].snm  = fgets(line, 100, filep2);
        a[inc].year = fgets(line, 100, filep2);
        */
        inc++;
    }


	return;
}
int Display(struct list a[], int ffl){

    FILE * filep2;
	int inc = 0;
	char line[100];
	//printf("ffl yra \n", ffl);
	printf("student number \t name\t last name\t year \n");
	filep2 = fopen("listing.txt", "r");
    if(filep2 == NULL){
        printf("cannot read file");
        exit(1);
    }
    while(!feof(filep2)){
        fscanf(filep2, "%d%s%s%d",&a[inc].snum, a[inc].fnm, a[inc].snm, &a[inc].year );


if(feof(filep2)== 0)
        printf("%d\t%s\t%s\t%d\n",a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);

        /*a[inc].snum = fgets(line, 100, filep2);
        a[inc].fnm  = fgets(line, 100, filep2);
        a[inc].snm  = fgets(line, 100, filep2);
        a[inc].year = fgets(line, 100, filep2);
        */
        inc++;
    }
    fclose(filep2);

	return inc;
}

void swithcstr(struct list a[], int top){
    int i,topd = top;
	int inc;
	int toph;
	int sorted;
	FILE * filep3;
	
	struct list h;
	while(1){
		sorted = 0;
		for(inc = 0; inc < topd-1; inc++){

			if(a[inc].snum > a[inc+1].snum){
				h = a[inc];
				a[inc] = a[inc+1];
				a[inc+1] = h;
				sorted = 1;
			}
		}
		if(sorted == 0){
			break;
		}
		
	}
    
    filep3 = fopen("listing2.txt", "w");
	for(i=0;i<topd-1;i++){
		printf("%8d %15s %10s %4d\n", a[i].snum,a[i].fnm,a[i].snm,a[i].year);
		fprintf(filep3, "%8d %15s %10s %4d\n", a[i].snum,a[i].fnm,a[i].snm,a[i].year );
	}
	fclose(filep3);
	remove("listing.txt");
	rename("listing2.txt", "listing.txt");
	return;
}

void findbynum(struct list a[], int ffl){
	
	FILE * filep5;
	int sID;
	int inc = 0;
	int i;
	filep5 = fopen("listing.txt","r");
	if(filep5 == NULL){
		printf("cannot open file\n");
		exit(1);
	}
	printf("enter student`s number\n");
	scanf(" %d", &sID);
	while(1){
		if(a[inc].snum == sID){
			printf("student found: \n");
			printf(" %d \t %s \t %s \%d \n", a[inc].snum, a[inc].fnm, a[inc].snm, a[inc].year);
		}
		
		break;
		
		if(inc > 99){
			printf("nothing found\n");
			break;
		}
		inc++;
	}
	fclose(filep5);
	
	return;
}
	




