#include <stdio.h>

int main(void){

	int g; g = 5;

	while (g > 4){
		printf("ENTER GRADE [ 0 - 4 ]: ");
		scanf("%1d", &g); 
	}

	switch (g){
		case 4: printf("Excelent"); 
		case 3: printf("Good"); 
		case 2: printf("Average"); 
		case 1: printf("Poor"); 
		case 0: printf("Failing"); 
		default: printf("Illegal Grade");
	}
	printf("\n");

	/* 
	 * gs-no-break.c:13:25: warning: this statement may fall through [-Wimplicit-fallthrough=]
	 *    13 |                 case 4: printf("Excelent");
	 *       |                         ^~~~~~~~~~~~~~~~~~
	 * gs-no-break.c:14:17: note: here
	 *    14 |                 case 3: printf("Good");
	 *       |                 ^~~~
	 * gs-no-break.c:14:25: warning: this statement may fall through [-Wimplicit-fallthrough=]
	 *    14 |                 case 3: printf("Good");
	 *       |                         ^~~~~~~~~~~~~~
	 * gs-no-break.c:15:17: note: here
	 *    15 |                 case 2: printf("Average");
	 *       |                 ^~~~
	 * gs-no-break.c:15:25: warning: this statement may fall through [-Wimplicit-fallthrough=]
	 *    15 |                 case 2: printf("Average");
	 *       |                         ^~~~~~~~~~~~~~~~~
	 * gs-no-break.c:16:17: note: here
	 *    16 |                 case 1: printf("Poor");
	 *       |                 ^~~~
	 * gs-no-break.c:16:25: warning: this statement may fall through [-Wimplicit-fallthrough=]
	 *    16 |                 case 1: printf("Poor");
	 *       |                         ^~~~~~~~~~~~~~
	 * gs-no-break.c:17:17: note: here
	 *    17 |                 case 0: printf("Failing");
	 *       |                 ^~~~
	 * gs-no-break.c:17:25: warning: this statement may fall through [-Wimplicit-fallthrough=]
	 *    17 |                 case 0: printf("Failing");
	 *       |                         ^~~~~~~~~~~~~~~~~
	 * gs-no-break.c:18:17: note: here
	 *    18 |                 default: printf("Illegal Grade");
	 *       |                 ^~~~~~~
	 */

	return 0;
}
