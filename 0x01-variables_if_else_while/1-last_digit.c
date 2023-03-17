#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x;
	x = n / 10;
	if (x > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5",n,x);
	}
	else if (x < 6 && x != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0",n,x);
        }
	else if (x == 0)
        {
                printf("Last digit of %d is %d and is %d",n,x);
        }

	return (0);
}
