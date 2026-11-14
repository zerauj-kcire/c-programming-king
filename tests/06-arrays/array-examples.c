#include <stdio.h>

#define N 5

int main(void){

	int a[N] = { 6, 5}; // everything else is set to 0;
	int b[N] = { [2] = 6, [4] = 5}; // everything else is set to 0;
	int sum1, sum2; 
	sum1 = sum2 = 0;

	// printf ("PUT VALUES OF a[2], a[3], a[4]");
	// scanf("%d %d %d", &a[2], &a[3], &a[4]);

	printf ("THE VECTOR IS:\n");
	for ( int i = 0 ; i<N ; i++ ) printf ("%d:\t%d\t%d\n", i, a[i], b[i]);

	for ( int i = 0 ; i<N ; i++ ){
		sum1+=a[i];
		sum2+=b[i];
	}
	printf ("ITS SUM IS:\t%d\t%d\n", sum1, sum2);
	return 0;
}
