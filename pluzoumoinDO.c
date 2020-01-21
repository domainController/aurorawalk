#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main ( int argc[], char **argv[])
{
	int random_salary = 0, estimation = 0;
	const int MAX = 9000, MIN = 3000;
	
	srand(time(NULL));
	random_salary = (rand() % (MAX - MIN + 1)) + MIN;

	do 
	{
		printf("Saisir le montant du salaire: \n");
		scanf("%d", &estimation);

		if (estimation > random_salary)
		{printf("C'est moins\n");}
		else if (estimation < random_salary)
		{printf("C'est plus\n");}
		else 
		{printf("Vous avez trouve");}
	} while (estimation != random_salary);
   return 0;
}
 



	
