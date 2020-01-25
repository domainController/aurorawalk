#include <stdio.h>
#include <stdlib.h>

void clock(int heures, int minutes);

	int main(int argc, char **argv[])

	{ 
		int heures = 0, minutes = 90;

		printf("90 min c'est %dh et %dmin", clock(0,90));
	}



void clock(int heures, int minutes)

	{	
		heures  = minutes / 60;
		minutes = minutes % 60;
	}


