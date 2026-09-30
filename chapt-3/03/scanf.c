#include <stdio.h>

int main(void){

	//(a): RESULT: THE EXPRESSIONS "%D" AND " %D" ARE EQVUIALENT.
	printf("--- EXERCISE A ---");
	int a,b;
	printf("%%d: ");
	scanf("%d", &a); 
	printf(" %%d: ");
	scanf("%d", &b); 
	printf("a: %d and b: %d\n", a,b);

	//(b): RESULT: THE EXPRESSIONS %D-%D-%D AND %D -%D -%D ARE REALLY DIFFERENT.
	printf("--- EXERCISE B ---");
	int ma,mb,mc;
	printf("GIVE ME: d-d-d: ");
	scanf("%d-%d-%d", &ma, &mb, &mc); 
	printf("%d BABA %d IS %d YOU\n", ma, mb, mc);
	printf("GIVE ME: d -d -d: ");
	scanf("%d -%d -%d", &ma, &mb, &mc); 
	printf("%d BABA %d IS %d YOU\n", ma, mb, mc);

	//(c): RESULT: THE EXPRESSIONS "%F" AND "%F "  ARE REALLY DIFFERENT.
	printf("--- EXERCISE C ---");
	float mf,mf2;
	printf("GIVE: %%f: ");
	scanf("%f", &mf);
	printf("GIVE: %%f2 : ");
	scanf("%f ", &mf2); // this waits for more content...
	printf("f: %f, f2: %f\n", mf, mf2);

	// (d): RESULT: THE EXPRESSIONS %f,%f AND %f, %f ARE EQUIVLANT
	printf("--- EXERCISE D ---");
	float mf,mf2;
	printf("GIVE: %%f,%%f: ");
	scanf("%f,%f", &mf, &mf2); 
	printf("The number %f, is very different to %f\n",mf,mf2);
	printf("GIVE: %%f, %%f: ");
	scanf("%f, %f", &mf, &mf2); 
	printf("The number %f, is very different to %f\n",mf,mf2);

	return 0;
}
