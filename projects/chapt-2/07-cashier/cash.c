#include <stdio.h>

#define INDEX 4

int Bi[INDEX] = {1, 5, 10, 20};

int main(void){
	int am;
	int change[INDEX];
	printf("GIVE ME THE NUMBER TO PAY: ");
	scanf("%d", &am); 
	int i;
	for (i = INDEX - 1; i > -1; i--) {
		change[i] = am / Bi[i];
		am = am % Bi[i];
	}
	for (i = INDEX - 1; i > -1; i--) {
		printf("$%d Bills: %d\n", Bi[i], change[i]);
	}
	return 0;
}
