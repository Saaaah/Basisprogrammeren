#include <stdio.h>
int main(void) {
	int a;
	int b;
	int c;
	
	printf("voer een heel getal in ...\n");
	scanf_s("%d", &a);

	printf("Voer een heel getal in waar je het wil vermenigvuldigen... \n");
		scanf_s("%d", &b);
	
		c = a * b;

	printf("het antwoord is \n");
	printf("%d\n", c);

	if (c < 1000) {


	 printf("het ingevoerde getal is kleiner dan 1000");
	}
	else {

		printf ("het ingevoerde getal is groter dan 1000");
	}



	return 0;
}