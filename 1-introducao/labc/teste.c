#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int X, Y, i;
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X < Y){
        while(i <= Y){
            i = X;
            printf("%d ", i);
            i = i + 1;
        }
    }else{
        while(i <= X){
            i = Y;
            printf("%d ", i);
            i = i + 1;
        }
    }


    return 0;
}

