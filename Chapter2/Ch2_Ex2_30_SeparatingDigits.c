/*
       Program: Ch2_Ex2_30_SeparatingDigits.c
   Descripción: This program inputs one five-digit number, separates the number
                into its individual digits and prints the digits separated from
                one another by three spaces each. [Hint: Use combinations of
                integer division and the remainder operation.] 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	
	int number;

	puts("Please, enter a five-digit number:");
	scanf("%d", &number);

	printf("%d   ", number/10000); // Print first digit
	printf("%d   ", (number%10000)/1000);
	printf("%d   ", ((number%10000)%1000)/100);
	printf("%d   ", (((number%10000)%1000)%100)/10);
	printf("%d\n", (((number%10000)%1000)%100)%10); // Print last digit

	return 0;
}
