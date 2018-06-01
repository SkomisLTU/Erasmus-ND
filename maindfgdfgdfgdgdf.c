#include <stdio.h>
#include <stdlib.h>

void int2string(int n, char* s){
	
	int q = n;
	int i =0;
	int j;
	char ch;
	do
	{
		s[i++] = q % 10 + '0';
	} while ((q=q/10)!=0);
	j = i-1;
	i = 0;
	

	while (i<j)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		j--;
		i++;
	}
	return;
}

int main(int argc, char *argv[]) {
	int x;
	char str[20];
	printf("give int\n");
	scanf("%d",&x);
	int2string(x,str);
	printf("%s",str);
	return 0;
}
