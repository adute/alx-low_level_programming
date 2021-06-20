#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headrs goes here*/
/* betty style doc for function main goes there
 */
int main(void)
{

	int n;
	int  lastDigit;

	srand(time(0));
	n= rand() - RAND_MAX / 2;

	/* Your code goes here*/
	
	if((n%10)>5){
	printf(" Last digit of%d",n ,"%dis" );
	}
	else if(n>5){
	

	}
	else if(){}
	return(0);
}
