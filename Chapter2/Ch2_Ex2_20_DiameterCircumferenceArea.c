/*
       Program: Ch2_Ex2_20_DiameterCircumferenceArea.c
   Descripción: This program reads in the radius of a circle and prints the
                circle’s diameter, circumference and area. Use the constant 
                value 3.14159 for π. Perform each of these calculations inside 
                the printf statement(s) and use the conversion specifier %f.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	int radius;

	puts("Please, enter the circle radius:");
	scanf("%d", &radius);

	printf("The circle's diameter is %d.\n", 2 * radius);
	printf("The circle's circunference is %f.\n", 2 * 3.14159 * radius);
	printf("The circle's area is %f.\n", 3.14159 * radius * radius);

	return 0;

}