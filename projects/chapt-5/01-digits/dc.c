#include <stdio.h>

int main(void){

	int num,count; count = 0;

	printf("ENTER A NUMBER: ");

	while ((num = getchar()) != '\n') count++;
	printf("YOU ENTERED A %d DIGIT NUMBER\n", count);

	return 0;
}
