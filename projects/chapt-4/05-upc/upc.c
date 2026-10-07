#include <stdio.h>

#define N 11

int main(void){

	int d[N], fs, ss;

	printf("GIVE THE FIRST 11 DIGITS OF UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
			&d[0], &d[1], &d[2], &d[3], &d[4], &d[5], &d[6], &d[7], &d[8], &d[9], &d[10]);

	fs = d[0] + d[2] + d[4] + d[6] + d[8] + d[10];
	ss = d[1] + d[3] + d[5] + d[7] + d[9];

	int t,cd;
	t = 3 * fs + ss;
	cd = 9 - ((t - 1) %10);

	printf("CHECK DIGIT: %d\n",cd);
	return 0;
}
