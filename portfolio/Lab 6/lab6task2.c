#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype

int is_prime(int possible_prime, int divisor);
int truth=1;

int main(void)
{
int prime;

printf("enter your number;");
scanf("%d", &prime);

truth=is_prime(prime,3);
if(truth==0)
{
	printf("not prime!!");
}
else
{
	printf("is prime!!!");
}

return 0;
}

int is_prime(int possible_prime, int divisor)
{

		if(divisor==possible_prime)
		{
			return 1;
		}
		else if( (possible_prime%divisor)==0)
		{
			return 0;
		}
		else if( (possible_prime%2)==0 )
		{
			return 0;
		}
		else
		{
			return is_prime(possible_prime,divisor+2);
		}
}