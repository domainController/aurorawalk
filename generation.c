#include <stdio.h>
#include <stdlib.h>

	int age = 42;

	int main(int argc[], char *argv[])
 {		
	 	switch (age)
	{
	case 2: printf("You are some kind of useless baby"); break;
	case 6: printf("You are some kind of useless kid"); break;
	case 12: printf("You are some kind of kid"); break;
	case 16: printf("You are some kind of teenager"); break;
	case 18: printf("You are some kind of an adult"); break;	
	case 68: printf("You are some kind of senior"); break;	
	default: printf("You are free to to be yourself"); break;

	}

 }
