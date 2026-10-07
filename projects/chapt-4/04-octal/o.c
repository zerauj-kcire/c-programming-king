#include <stdio.h>
#include <limits.h>

int main(void){

	int num;

	printf("GIVE ME A NUMBER BETWEEN %d AND %d: ", INT_MIN, INT_MAX);
	scanf("%d", &num); 

	printf("%o\n", num);
	return 0;
}
