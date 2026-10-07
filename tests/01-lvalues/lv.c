#include <stdio.h>

int main(void){
	int i,j;
	12 = i;
	i + j = 0;
	-i = j;
	//  lv.c:5:12: error: lvalue required as left operand of assignment
	//      5 |         12 = i;
	//        |            ^
	//  lv.c:6:15: error: lvalue required as left operand of assignment
	//      6 |         i + j = 0;
	//        |               ^
	//  lv.c:7:12: error: lvalue required as left operand of assignment
	//      7 |         -i = j;
	//        |            ^
	return 0;
}
