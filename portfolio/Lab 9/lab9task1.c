#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char product[30];
	char brand[50];
	int units;
	double price;
}item;

//function prototype
void restock( item *h);

int main(void){

item grocery;

printf("please enter name of product\n");
scanf("%s",&grocery.product);

printf("please enter name of brand\n");
scanf("%s",&grocery.brand);

printf("please enter the number of units\n");
scanf("%d",&grocery.units);

printf("please enter price of items\n");
scanf("%lf",&grocery.price);

restock(&grocery);

printf("units: %d\n", grocery.units);
printf("price: %.2lf\n", grocery.price );

return 0;
}

//functions

void restock(item *h)
{
	h->units=2*h->units;
	h->price-=h->price*0.20;
}