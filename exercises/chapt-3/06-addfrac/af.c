#include <stdio.h>

int main(void){
	int n1, d1, n2, d2, result_n, result_d;
	printf("ENTER FIRST FRACTION: ");
	scanf("%d / %d", &n1, &d1); 
	printf("ENTER SECOND FRACTION: ");
	scanf("%d / %d", &n2, &d2); 
	result_n = n1 * d2 + n2 * d1;
	result_d = d1 * d2;
	printf("THE SUM IS: %d/%d\n", result_n,result_d);
	return 0;
}
