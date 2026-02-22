#include <stdio.h>

int percorre(int *array, int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf(" %d ", array[i]);
	}
}

int main(){
	int array[] = {5,2,3};
	printf("%d\n", *(array + 1));
	int x = 5;
	int y = 2;
	int z = 8;
	int *p = &x;
//	for(int i = 0; i <= 2;i++){
//		printf(" %d ", *(p+i));
//	}
//	printf(" %d ", *(p+0));
//	printf(" %d ", *(p+1));
//	printf(" %d ", *(p+2));
	printf(" %d ", array[3]);
	percorre(array, 3);
}
