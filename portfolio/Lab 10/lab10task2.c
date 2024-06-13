#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


enum Capital{false,true};

int main(void){
	char sentence[100]; 
	int i=0, position;
	
	enum Capital result=1;
	
	printf("please enter your string:\n");
	fgets(sentence,sizeof(sentence),stdin);
	
	while(result==true)
	{
		if(isupper(sentence[i]))
		{
			i+=1;
			position=i;
			result=0;
		}
		else{
			i++;
		}
	}
	
	printf("The first capital letter is at: %d",position);

return 0;
}

//functions


