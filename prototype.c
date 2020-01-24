#include <stdio.h>
#include <stdlib.h>

double aire(double largeur, double hauteur);

int main(int argc, char *argv[])
{
	printf("Aire de rect de LA 5 et LO 10 est de %f\n", aire(5,10));
	printf("Aire de rect de LA 2.5 et LO 3.5 est de %f\n", aire(2.5,3.5));
	printf("Aire de rect de LA 4.2 et LO 9.7 est de %f\n", aire(4.2,9.7));

	return 0;
}

double aire(double largeur, double hauteur)
{
	return largeur * hauteur;
}

