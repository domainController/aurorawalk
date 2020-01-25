#include <stdio.h> 
int main(int argc, char *argv[])
{
	int resultat = 0, nombre1 = 0, nombre2 = 0;

	printf("Entre ton 1er chiffre: ");
	scanf("%d", &nombre1);
	printf("Entre ton 2nd chiffre: ");
	scanf("%d", &nombre2);
	resultat = nombre1 % nombre2;
	printf("%d modulo %d = %d\n", nombre1, nombre2, resultat);
	return 0;

}
	
