#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space = 0;
    char str;
    while(scanf("%c", &str) != EOF){
        if(str == ' '){
            space++;
        } else {
        space = 0;
        }
        if(str != ' ' || space < 2){
           printf("%c", str);
        }

    }
    return 0;
}

