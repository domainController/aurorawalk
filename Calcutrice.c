#include <stdio.h> 
int main(int argc, char *argv[])
{
	int resultat = 0, nombre1 = 0, nombre2 = 0;

	printf("Entrez un premier nombre: ");
	scanf("%d", &nombre1);
	printf("Entrez un second nombre: ");
	scanf("%d", &nombre2);
	resultat = nombre1 + nombre2;
	printf("%d + %d = %d\n", nombre1, nombre2, resultat);
	return 0;

}
	
