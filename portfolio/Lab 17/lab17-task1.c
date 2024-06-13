#include <stdio.h>

long factorial(long n);

int main(void) {
    
    int i = 10; 
	while (i>=1) {
		long f = factorial(i); 
		printf("%d! = %ld\n", i, f);
		i--;
	}
	
    return 0;
}

long factorial(long n) {
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

