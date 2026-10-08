#include <stdio.h>

int main(void){

	int hr,min;

	printf("GIVE 24-HR TIME [ H:M ]: ");
	scanf("%d:%d", &hr, &min);

	printf("EQUIVALENT 12-HR TIME: ");
	if(hr > 12) printf("%2d:%2d PM\n", hr % 12, min);
	else printf("%2d:%2d AM\n", hr,min);

	return 0;
}
