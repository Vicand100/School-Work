	#include <stdio.h> 
#include <ctype.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>
	
int main()
{

    int num, n, index;
    int number[8];
   
    printf("please input a number from 0 to 255:");
    scanf("%d", &num);
	n = num;
    index = 7;

    for(int i=index;i >= 0;i--)
    {
 
        number[i] = num & 1;
        num >>= 1;

		
    }
//prints out binary number
printf("your output is: ");	
for(int i=0;i<8;i++)
{
	printf("%d", number[i]);
}
int c = 0;
for(int j=7;j>=0;j--)
      if (number[j] == 0){
		   if (number[j+1] == 0){
			   c++;
		   }
	   }
//task 3
//tells if there are trailing zeros    
printf("\n");
//if there are
	if ( c >= 2)
	{
		printf (" - it has %d trailing zeros.", c);
	}
		//if there are not
	else if ( c<= 1)
	{
		printf (" does not have any trailing zero");
	}
// end of program
return 0;
}