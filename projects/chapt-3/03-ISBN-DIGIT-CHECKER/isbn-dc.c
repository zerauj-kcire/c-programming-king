#include <stdio.h>

int str2int(char ch);

int main(void){

	int c_calculated;

	// char versions
	char cgs1, cgs2, cgs3;
	char cgi;
	char cpc1, cpc2, cpc3;
	char cin1, cin2, cin3, cin4, cin5;
	char cc;

	// int versions
	int gs1, gs2, gs3;
	int gi;
	int pc1, pc2, pc3;
	int in1, in2, in3, in4, in5;
	int c;

	printf("ENTER ISBN: ");
	scanf("%c%c%c-%c-%c%c%c-%c%c%c%c%c-%c", 
			&cgs1, &cgs2, &cgs3, &cgi, &cpc1, &cpc2, &cpc3, 
			&cin1, &cin2, &cin3, &cin4, &cin5, &cc);
	printf("GS1 INDEX: %c%c%c\n", cgs1, cgs2, cgs3);        // optional line
	printf("GROUP IDENTIFIER: %c\n", cgi);                  // optional line
	printf("PUBLISHER CODE: %c%c%c\n", cpc1, cpc2, cpc3);   // optional line
	printf("ITEM NUMBER: %c%c%c%c%c\n",                     // optional line
			cin1, cin2, cin3, cin4, cin5);                      // optional line
	printf("CHECK DIGIT: %c\n", cc);                        // optional line

	gs1 = str2int(cgs1);  in1 = str2int(cin1);
	gs2 = str2int(cgs2);  in2 = str2int(cin2);
	gs3 = str2int(cgs3);  in3 = str2int(cin3);
	gi  = str2int(cgi);   in4 = str2int(cin4);
	pc1 = str2int(cpc1);  in5 = str2int(cin5);
	pc2 = str2int(cpc2);  c = str2int(cc);
	pc3 = str2int(cpc3);

	// CALCULATION:
	// REFERNCE:
	// https://en.wikipedia.org/wiki/ISBN#ISBN-13_check_digit_calculation
	int r;
	r = 10 - ( ( gs1 + 3*gs2 + gs3 + 3*gi + pc1 + 3*pc2 + pc3 + 3*in1 + in2 +
				3*in3 + in4 + 3*in5 ) % 10);
	if (r == 0 ) c_calculated = 0;
	else c_calculated = r;

	if (c == c_calculated){
		printf("--- THE ISBN IS VALID! ---\n");
		return 0;
	}
	else{
		printf("--- WARNING!: THE ISBN IS INVALID. ---\n");
		return 1;
	}
}

int str2int(char c){
	int n = c - '0';
	return n;
}
