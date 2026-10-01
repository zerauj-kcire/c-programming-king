#include <stdio.h>

int main(void){
	double x, px;
	printf("GIVE THE VALUE OF X = ");
	scanf("%le", &x); 
	/* HORNER */
	px = ( ( ( ( 3 * x + 2 ) * x - 5 ) * x - 1) * x + 7 ) * x - 6;
	printf("THE VALUE OF P(X) = %10.4f\n", px);
	return 0;
}
