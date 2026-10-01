#include <stdio.h>

#define MAX_MONEY 10000

int main(void){

	int item;
	float price;
	int d,m,y;

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price); 
	while (price >= MAX_MONEY){
		printf("--- WARNING!: AMOUNT NOT ACCEPTED ---\n");
		printf("Enter price lower than 10k: ");
		scanf("%f", &price); 
	}

	printf("Enter purchase date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d, &m, &y); 

	printf("ITEM\t\t\tUNIT\t\t\tPURCHASE\n");
	printf(" \t\t\tPRICE\t\t\tDATE\n");
	printf("%d\t\t\t$%7.2f\t\t%s%d-%s%d-%d\n", 
			item, price, (d < 10) ? "0" : "", d, (m < 10) ? "0" : "", m, y);

	return 0;
}
