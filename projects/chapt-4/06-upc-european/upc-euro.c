#include <stdio.h>

#define N 12

int main(void){

	int d[N], fs, ss;

	printf("GIVE THE FIRST 12 DIGITS OF UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
			&d[0], &d[1], &d[2], &d[3], &d[4], &d[5], &d[6], &d[7], &d[8], &d[9], 
			&d[10], &d[11]);

	fs = d[1] + d[3] + d[5] + d[7] + d[9] + d[11];
	ss = d[0] + d[2] + d[4] + d[6] + d[8] + d[10];

	int t,cd;
	t = 3 * fs + ss;
	cd = 9 - ((t - 1) % 10);

	printf("CHECK DIGIT: %d\n",cd);
	return 0;
}
