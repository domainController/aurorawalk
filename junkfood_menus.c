#include <stdio.h>
#include <stdlib.h>

	int main( int argc[], char *argv[])
{
	int menu_number_choice;

	printf("========= Mac Junk Food Menus ============\n\n");
	printf("1.Milkshake\n");
	printf("2.Royal Cheese\n");
	printf("3.Mac Flurry\n");
	printf("4.Sundae Vanilla\n");
	printf("\nPlease be nice choose something fresh\n !!");
	scanf("%d", &menu_number_choice);


	printf("\n\n");	

	switch (menu_number_choice)
	{
		case 1: printf("Obsviously You made the best choice!");break;		
		case 2: printf("You look really hungry!\n"); break;
		case 3: printf("This is full of sugar dude!\n"); break;
		case 4: printf("So fresh So Clean !\n"); break;
	}

	printf("\n\n");

	return 0;
}
