#include <stdio.h>

int main(){
	int x = 10;
	int y = 20;
	int *p = &x;
	printf("*p: %d\n", *p);
	p = p + 1;
	printf("p = p + 1: %d\n", *p);

}
