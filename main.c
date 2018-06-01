#include <stdio.h> 
 
// Variable definition:
 
 int num1=0;
 int x=1;
 int ans=1;
 
 
int main () { 

	scanf("%d", &num1);
	if(num1=0)
		printf("0");
	else{
		while(x<num1)
		{
			ans=ans*ans++;
			x++;
		}
printf("answer is %d", ans);
printf(num1);

	}
	
 
	  return 0;
	   } 
