#include <stdio.h>

#define new '\n'


int num1;
int ans=1;
int x=1;
   
   

int main () {
	
  
	while(1){

		printf("insert number: %c", new);
   
   		scanf("%d", &num1);
   		if(num1!=0){
   			
   			while (x!=num1){
   			x++;
   			ans=x*ans;
   }
   
   		printf("answer is %d %c %c", ans, new);
   		x=1;
   		ans=1;
   			
   			
		   }
		else
		printf("answer is  1 %c", new);
   
   		
}
   return(0);
}


