#include <stdio.h>

int main(void){
	int m[5][9] = {
		{1, 1, 1, 1, 1, 0, 1, 1, 1},
		{0, 1, 0, 1, 0, 1, 0, 1, 0},
		{0, 1, 0, 1, 1, 0, 0, 1, 0},
		{1, 1, 0, 1, 0, 0, 0, 1, 0},
		{1, 1, 0, 1, 0, 0, 1, 1, 1},
	};

	int i,j;
	for ( i=0 ; i<5 ; i++ ) {
		for ( j=0 ; j<9 ; j++ ) printf ("%d\t", m[i][j]);
		printf ("\n");
	}

	double ident[2][2] = { [0][0] = 1.0, [1][1] = 1.0};
	for ( i=0 ; i<2 ; i++ ) for ( j=0 ; j<2 ; j++ ) printf ("%f\t", ident[i][j]);
	printf ("\n");
	return 0;
}
