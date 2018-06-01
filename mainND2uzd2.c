#include <stdio.h>
#include <stdlib.h>

int replace(char str[], char ch);

int main() {
	// pradinis zodzio ilgis
 	char mstr[20];
	char mch;
	char zodis[20];
	
	printf("Enter letter that is in need to replace\n");
	scanf("%c", &mch);
	printf("enter string\n");
	scanf("%s", &mstr);
	
	replace(mstr, mch);
	printf("Word without letters is %s \n", mstr);

	return 0;
}

int replace(char str[], char ch){
	
	int a;
	int b;
	int c;
	for(c = 0; str[c] != '\0'; ++c);                           // Sitas skirtas surasti zodzio ilgi
	
	for(a=0,b=0;a<c;a++){
		if(str[a]!=ch){
			str[b]=str[a];
			b++;
		}
	}
	
	str[b]='\0';
return  str;
	
}



	





/*


#include <stdio.h>
#include <stdlib.h>

void getS(char* getstr[20]);
int getletter(char letter);
int replace(char str[20], char ch);


int main() {
	
	     		// pradinis zodzio ilgis
 	char mstr[20];
	char mch;
	
	getS(mstr);
	getletter(mch);
	replace(mstr, mch);
	printf("Word without letters is %s \n", mstr);
	//printf("Word  %s \n",str);
	//printf("chhh %s \n",ch);
	
	return 0;
}

int replace(char str[20], char ch){
	
	int a;
	int b;
	int c;
	int d; 
	for(c = 0; str[c] != '\0'; ++c);                           // Sitas skirtas surasti zodzio ilgi
	
	for(a=0,b=0;a<c;a++){
		if(str[a]!=ch){
			str[b]=str[a];
			b++;
		}
	}
	
	str[b]='\0';
return  str;
	
}

void getS(char getstr[20]){
	
	printf("Enter word \n");
	scanf(" %s", &getstr);
	
	//return getstr;
}

int getletter(char letter){
	printf("Enter letter that is in need to replace\n");
	scanf(" %c", &letter);
	
	return letter;
}

*/



/*

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	     		// pradinis zodzio ilgis
 	char str[20];
	char ch;
	printf("Enter word \n");
	scanf(" %s", &str);
	printf("Enter letter that is in need to replace\n");
	scanf(" %c", &ch);
	int a;
	int b;
	int c;
	int d; 
	for(c = 0; str[c] != '\0'; ++c);                           // Sitas skirtas surasti zodzio ilgi
	
	for(a=0,b=0;a<c;a++){
		if(str[a]!=ch){
			str[b]=str[a];
			b++;
		}
	}
	
	str[b]='\0';

	printf("Word without letters is %s \n",str);
	//printf("Word  %s \n",str);
	//printf("chhh %s \n",ch);
	
	return 0;
}
*/
