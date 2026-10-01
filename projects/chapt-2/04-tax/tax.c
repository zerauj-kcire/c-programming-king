#include <stdio.h>

#define TAX 0.05

int main(void){
	float price;
	printf("GIVE THE AMOUNT OF THE ITEM: ");
	scanf("%f", &price); 
	printf("THE TOTAL IS: %.2f\n", price * (1.0f + TAX));
	return 0;
}
