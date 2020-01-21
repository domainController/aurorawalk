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
    else
    {
	    while (salaire_mystere != estimation)
	    {
		if (estimation > salaire_mystere)
		{	    
			printf("Le salaire est inferieur a ce montant !\n");
			scanf("%d", &estimation);
		}

		else (estimation < salaire_mystere)
		{	    
			printf("Le salaire est superieur a ce montant\n");
			scanf("%d", &estimation);
		}
	    }
   
    }
  } 

/* tout fonctionne correctement sauf le "Felicitations ne passe pas"
 * Dans la correction est utilise un DO/While
 */
