#include <stdio.h>

#define RECORDS 3

int main(void){

	float l;
	float ia,im;
	float m;

	printf("GIVE THE AMOUNT OF THE LOAN: ");
	scanf("%f", &l); 
	printf("GIVE THE INTEREST RATE: ");
	scanf("%f", &ia); 
	im = (ia / 100) / 12;
	printf("GIVE THE MONTHLY PAYMENT: ");
	scanf("%f", &m); 

	int j;
	for (j = 0 ; j < RECORDS; j++) {
		l = l * (1 + im) - m;
		printf("Balance after the %dth payment: $%.2f\n" , j+1 , l);
	}

	return 0;
}
