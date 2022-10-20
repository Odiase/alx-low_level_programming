#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
 
/**
*main- This is the main function of the program
*
*Return: this returns Zero if no errors
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
