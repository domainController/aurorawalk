#include <stdio.h>
#include <stdlib.h>
	
	int main()
{
	int x;
	for (x=0; x<=100; x++)
{	switch(x)
	{
	  case (x % 15 == 0): printf("Fizzbuzz");break;
	  case (x % 3  == 0): printf("Fizz");break;
	  case (x % 5  == 0): printf("Buzz");break;
          default: printf("x");break;		    
	}
	return 0;
}

