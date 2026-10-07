#include <stdio.h>

bool check_digit(int c);

int main(void){

	int d1, d2, d3; 
	d1 = 'a', d2 = 'a', d3 = 'a';

	while (check_digit(d1) && check_digit(d2) && check_digit(d3)){
		printf("GIVE ME THE 3-DIGIT NUMBER: ");
		scanf("%1d%1d%1d", &d1, &d2, &d3); 
	}

	printf("THE REVERSAL IS: %d%d%d\n", d3, d2, d1);
	return 0;
}

bool check_digit(int c){
	return (c < 0) || (c > 9);
}
