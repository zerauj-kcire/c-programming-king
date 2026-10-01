#include <stdio.h>

int main(void){

	int day,month,year;

	printf("ENTER THE NUMERIC CURRENT DATE (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year); 

	printf("TODAY IS: %d-%s%d-%s%d\n", year, 
			(month < 10) ? "0" : "", month, (day < 10) ? "0" : "", day);

	return 0;
}
