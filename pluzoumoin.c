#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main ( int argc[], char** argv[])
  {
    int salaire_mystere = 0;
    int estimation = 0;	
    const int MAX = 10000, MIN = 2000;

    srand(time(NULL));
    salaire_mystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Combien gagne un developpeur chanceux ?:\n");
    scanf("%d", &estimation);
    
    if (salaire_mystere == estimation)
    {
	printf("Felicitations Vous avez trouve le bon salaire\n");
    }
    else if (salaire_mystere != estimation)
    {
	    while (1)
	    {
		if (estimation > salaire_mystere)
		{	    
			printf("Le salaire est inferieur a ce montant !\n");
		}

		else (estimation < salaire_mystere)
		{	    
			printf("Le salaire est superieur a ce montant\n");
		}
	    }
    }
    else 
    { 
	printf("Felicitations Vous avez trouve le bon salaire\n");
    }
    return 0;
  } 

/* tout fonctionne correctement sauf le "Felicitations ne passe pas"
 * Dans la correction est utilise un DO/While
 * Ne fonctionne plus apres car j'ai tout change comme le Felicitation
 * ne passait pas. Maintenant j'ai 3 boucles imbriquees...
 * C'est la merde
 *
 */
