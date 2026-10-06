#include <stdio.h>

int main(void){
	char l[3], p[3], s[4];
	printf("GIVE THE PHONE NUMBER [ (xxx) xxx-xxxx ]: ");
	scanf("(%c%c%c) %c%c%c-%c%c%c%c", 
			&l[0], &l[1], &l[2], &p[0], &p[1], &p[2], &s[0], &s[1], &s[2], &s[3]);
	printf("You entered: %c%c%c.%c%c%c.%c%c%c%c",
			l[0], l[1], l[2], p[0], p[1], p[2], s[0], s[1], s[2], s[3]);
	return 0;
}
