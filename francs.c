#include <stdio.h>
#include <stdlib.h>

	double xe(double euros)
{	
	double fr = 0;
	fr =  6.55957 * euros ;
	return fr;
}

	double main( double argc[], char **argv[])
{
	printf("10€ = %f fr\n", xe(10));
	printf("20€ = %f fr\n", xe(20));
	printf("50€ = %f fr\n", xe(50));
	printf("100€ = %f fr\n", xe(100));
	printf("200€ = %f fr\n", xe(200));
}

