#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int vetor[5] = {3,2,2,4,2};
	int achar;
	bool achou = false;
	printf("{");
	for(int i = 0; i < 5; i++){
		if(i == 4){
			printf(" %d ",vetor[i]);
			break;
		}
		printf(" %d, ",vetor[i]); 
	}
	printf(" }\n");
	printf("digite o elemento que queira tirar: ");
	scanf("%d", &achar);
	
	printf("{ ");
	for(int i = 0;i < 5; i++){
		if(vetor[i] == achar){
			achou = true;
			if(i == 4 && achar != vetor[i]){
				printf(" %d ",vetor[i]);
			}
			continue;
		}
		if( i == 4){
			printf("tesd %d ",vetor[i]);
			break;
		}else if (achar != vetor[i]){
			printf(" %d ",vetor[i]);
		}
	}
	printf(" }\n");
	if(achou == false){
		printf("Elemento nao existe no vetor\n");
	}

}
