#include <stdio.h>

#define N 4

int main(void){

	/* INPUT */
	int n[N*N];
	int i,j;
	printf("GIVE THE %d NUMBERS IN ANY ORDER:\n", N * N);
	for (i=0; i<N; i++) for (j=0; j<N; j++){
		printf("%d: ", i*N + j + 1);
		scanf("%d", &n[i*N + j]); // since i want to be N a free variable, is must
															// be done this way.
	}

	/* MATRIX */
	for (i=0 ; i<N ; i++) {
		for (j=0 ; j<N ; j++) printf("%2d ", n[i*N + j]); 
		printf("\n");
	}

	/* CALC SUMS */
	int rs[N], cs[N], ds[2];
	for (i=0 ; i<N ; i++) rs[i] = 0;
	for (i=0 ; i<N ; i++) cs[i] = 0;
	ds[0] = 0; ds[1] = 0;

	for (i=0 ; i<N; i++) for (j=0 ; j<N; j++) rs[i] += n[i*N + j];
	for (i=0 ; i<N; i++) for (j=0 ; j<N; j++) cs[i] += n[j*N + i];
	for (i=0; i<N; i++) ds[0] += n[i*N + i];
	for (i=N-1; i>=0; i--) ds[1] += n[i*N + (N - i - 1)];

	/* PRINTING SUMS */
	printf("ROW SUMS: "); for (i=0; i<N; i++) printf("%d ", rs[i]);
	printf("\n");
	printf("COL SUMS: "); for (i=0; i<N; i++) printf("%d ", cs[i]);
	printf("\n");
	printf("DIA SUMS: "); printf("%d %d", ds[0], ds[1]);
	printf("\n");

	return 0;
}
