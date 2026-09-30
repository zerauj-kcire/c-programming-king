#include <stdio.h>

#define N 3
#define M 5

int main(void){
	int i,j,k;
	for (i=M ; i>=0; --i) {
		k = M - i + 1;
		for (j=1 ; j<k; j++) {
			printf("  ");
		}
		if (i < N && i > 0) printf("*");
		else if (i != 0) printf(" ");
		for (j=0 ; j<i; j++) {
			printf("    ");
		}
		printf("*\n");
	}
	return 0;
}
