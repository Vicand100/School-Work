#define NDEBUG // must be #defined before #include <assert.h>

#include <stdio.h>
#include <assert.h> // <== must #include this for the 'assert()' macro

int main(void) {
    int x = 18;
    int y = 8;
    
    int v = x % y % 2;
	printf("%d\n",v);
   int z = 100 / y - 8;
	printf("%d\n",z);
	int w = z / z;
	printf("%d\n",w);
	int q = --w;
	printf("%d\n",q);
	assert(q != 0); // <== an example of using 'assert()'
					// can also be used as: assert(ptr != null && "null pointer!");
	int p = (v+9) / (q+3);
	x = y = w = 10 / z;
	printf("%d\n",x);
	int k = (2 + p) / (2 - p);
	y ^= y+1;
	x /= y;
	
    printf("k = %d\n", k);
    printf("p = %d\n", p);
    printf("q = %d\n", q);
    printf("v = %d\n", v);
    printf("w = %d\n", w);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}
