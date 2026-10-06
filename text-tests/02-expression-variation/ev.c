#include <stdio.h>

int main(void){
	int i; i = 0;
	(i++)++;
	printf("%d", i);
	//  ev.c:5:14: error: lvalue required as increment operand
	//      5 |         (i++)++;
	//        |              ^~
	return 0;
}
