#include <stdio.h>

int main(void){
	int a[] = { 10, 20, 30, 60, 432848324 };
	printf ("%ld\n", sizeof(a));
	printf ("%ld\n", sizeof(a) / sizeof(a[0]));
	return 0;
}

