#include <stdio.h>

int main(void){
	int d1, d2, n1, n2;
	printf("ENTER TWO FRACTIONS [ D1/N1+D2/N2 ]: ");
	scanf("%d/%d+%d/%d", &d1,&n1,&d2,&n2); 
	printf("THE SUM IS: %d/%d", d1 * n2 + d2 * n1, n1 * n2);
	return 0;
}
