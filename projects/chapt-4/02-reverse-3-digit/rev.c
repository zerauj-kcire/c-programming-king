#include <stdio.h>

bool check_digit(char c);

int main(void){

	char d1, d2, d3; 
	d1 = 'a', d2 = 'a', d3 = 'a';

	while (check_digit(d1) && check_digit(d2) && check_digit(d3)){
		printf("GIVE ME THE 3-DIGIT NUMBER: ");
		scanf("%c%c%c", &d1, &d2, &d3); 
	}

	printf("THE REVERSAL IS: %c%c%c\n", d3, d2, d1);
	return 0;
}

bool check_digit(char c){
	return (c < '0') || (c > '9');
}
