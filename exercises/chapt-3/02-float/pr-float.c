#include <stdio.h>

int main(void){
	printf("baba%8.1ebaba\n", 3294.384934); //(a)
	printf("baba%-10.6ebaba\n", 3232.23); // (b)
	printf("baba%8.3fbaba\n", 54253.43243223); // (c)
	printf("baba%-7.0fbaba\n", 24324.3423423); 
	return 0;
}
