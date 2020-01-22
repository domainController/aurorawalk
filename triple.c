#include <stdio.h>
#include <stdlib.h>

        int triple(int chiffre_au_hasard)
{
	int le_chiffre_au_cube = 0;
	le_chiffre_au_cube = 3 * chiffre_au_hasard;
	return le_chiffre_au_cube;
}

	int main (int argc[], char **argv[])

{
	int number_saisi = 0, number_saisi_au_cube = 0 ;

	printf("Entrez un nombre : \n");
	scanf("%d", &number_saisi);
	number_saisi_au_cube = triple(number_saisi);
	printf("Ce nombre multiple par 3 donne %d\n", number_saisi_au_cube);
}
