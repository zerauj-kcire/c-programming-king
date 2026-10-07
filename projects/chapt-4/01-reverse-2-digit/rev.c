#include <stdio.h>

bool check_digit(char c);

int main(void){

	char d1, d2; 
	d1 = 'a', d2 = 'a';

	while (check_digit(d1) && check_digit(d2)){
		printf("GIVE ME THE 2-DIGIT NUMBER: ");
		scanf("%c%c", &d1, &d2); 
	}

	printf("THE REVERSAL IS: %c%c\n", d2, d1);
	return 0;
}

bool check_digit(char c){
	return (c < '0') || (c > '9');
}
