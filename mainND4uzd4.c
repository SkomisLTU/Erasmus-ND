#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num=0;
	
	char c;
	while((c=getchar()) != EOF){
		if(c>'a'&&c<'z'){
			putchar(c+('A'-'a'));
		}else if(c>'A'&&c<'Z'){
			putchar(c-('A'-'a'));
		}else {
		putchar(c);
		num++;
		}
	}
	printf("letters written: %d", num);
	
	return 0;
}
