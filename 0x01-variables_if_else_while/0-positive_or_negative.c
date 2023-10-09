#include <stdlib.h>
#include <time.h>
/*this code is reaten in betty style 
 * this code cheakes wheter a nunber 
 * is positve or negative or equal to 
 * zero
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("is positive")
	else if (n == 0)
		printf("is zero")
	else
		printf("is negative")
	return (0);
}
