#include <stdio.h>

int main(void){
	double x, px;
	printf("GIVE THE VALUE OF X = ");
	scanf("%le", &x); 
	px = 3 *x*x*x*x*x + 2 *x*x*x*x - 5 *x*x*x - 1 *x*x + 7 * x - 6;
	printf("THE VALUE OF P(X) = %10.4f\n", px);
	return 0;
}
