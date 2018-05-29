/*
       Program: Ch3_Ex3_16_GasMileage.c
   Descripción: This program inputs the miles driven and gallons used for each
                tankful. Then the program calculates and displays the miles per
                gallon obtained for each tankful. The program also calculates
                and prints the combined miles per gallon obtained for all tankfuls.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	float gallonsCurrentTank;
	float milesCurrentTank;
	float totalMiles = 0.0;
	float totalGallons = 0.0;
	float averageMilesPerGallon;

	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%f", &gallonsCurrentTank);

	while (gallonsCurrentTank != -1.0) {

		totalGallons += gallonsCurrentTank;

		printf("%s", "Enter the miles driven: ");
		scanf("%f", &milesCurrentTank);
		totalMiles += milesCurrentTank;

		printf("The miles/gallon for this tank was: %f\n\n", milesCurrentTank / gallonsCurrentTank);

		printf("%s", "Enter the gallons used (-1 to end): ");
		scanf("%f", &gallonsCurrentTank);
		
	}

	averageMilesPerGallon = totalMiles / totalGallons;
	printf("\nThe overall average miles/gallon was %f\n", averageMilesPerGallon);
	
	return 0;

}