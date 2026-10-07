#include <stdio.h>

int main(void){

	int g; g = 5;

	while (g > 4){
		printf("ENTER GRADE [ 0 - 4 ]: ");
		scanf("%1d", &g); 
	}

	switch (g){
		case 4: printf("Excelent"); break;
		case 3: printf("Good"); break;
		case 2: printf("Average"); break;
		case 1: printf("Poor"); break;
		case 0: printf("Failing"); break;
		default: printf("Illegal Grade");
	}
	printf("\n");

	return 0;
}
