#include <stdio.h>

int main(void){
	int i;
	float f;
	printf("GIVE I = ");
	scanf("%d", &i); 
	printf("GIVE F = ");
	scanf("%f", &f); 
	printf("THE RESULT IS: %f\n", i > 0 ? i : f );
	/* 
		type-int-float.c:10:33: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘doub
		le’ [-Wformat=]
			 10 |         printf("THE RESULT IS: %d\n", i > 0 ? i : f );
					|                                ~^   ~~~~~~~~~~~~~
					|                                 |             |
					|                                 int           double
					|                                %f
	 */
	return 0;
}
