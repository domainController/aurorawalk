#include <stdio.h>
#include <stdlib.h>

        int triple(int chiffre_au_hasard)
{
	int le_chiffre_au_cube = 0;
	chiffre_au_hasard * 3 == chiffre_au_cube;
	return chiffre_au_cube;
}

	int main (int argc[], char **argv[])

{
	int number_saisi, number_saisi_au_cube;
	number_saisi = 0;
	number_saisi_au_cube = 0;

	printf("Entrez un nombre : /n");
	scanf("%d", &number_saisi);
	triple(number_saisi) = number_saisi_au_cube;
	printf("Le cube de nombre saisi est %d\n", &number_saisi_au_cube);
}
