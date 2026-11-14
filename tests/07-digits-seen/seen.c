#include <stdio.h>

#define N 10
#define true  1
#define false 0

int main(void){

	bool digit_seen[N] = {false};
	int digit;
	long n;

	printf ("ENTER NUMBER: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0) printf ("REPEATED DIGIT");
	else printf ("NO REPEATED DIGIT");

	printf ("\n");

	return 0;
}
