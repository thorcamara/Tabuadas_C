#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, j, res;
	
	for(i=1; i <=10; i++){
		for(j=1; j<=10; j++){
			res = i * j;
			printf("%d x %d = %d\n", i, j, res);
		}
		printf("\n");
	}
	printf("Programa finalizado....");
	
	return 0;
}
