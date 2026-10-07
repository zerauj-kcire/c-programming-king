#include <stdio.h>

int max_i(int i, int j);

int main(void){
	int n,m;
	printf("FIRST NUMBER: ");
	scanf("%d", &n); 
	printf("SECOND NUMBER: ");
	scanf("%d", &m); 
	printf("THE MAX IS: %d\n", max_i(n,m));
	return 0;
}

int max_i(int i, int j){
	return i > j ? i : j;
}
