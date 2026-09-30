#include <stdio.h>

#define PI 3.14159265

int main(void){
	float r;
	printf("GIVE ME THE RADIUS: ");
	scanf("%f", &r); 
	printf("THE VOLUME OF YOUR SPHERE IS: %4.4f\n", (4.0f/3.0f) * PI * r * r * r);
	return 0;
}
