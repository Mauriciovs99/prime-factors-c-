//prime factors of a number
#include <stdio.h>
#include <math.h>

main(){
	int number;
	int n=0;
	
	printf ("Write the integer number\n");
	scanf ("%d", &number); //saves the number
	
	while (number%2==0){ //divide by 2 the number many times as possible
		number=number/2;
		n=n+1;
	}
	if(n){
	printf ("2^%d\n", n); //if the number was divided by 2, print it as a factor (many times as you divided)
	}
	for (int i=3;i<=sqrt(number);i+=2){ //starting by 3, adding 2 and ending in the root of the number, try to divide the number
		n=0;
			while(!(number%i)){ //if the residue of the division is 0, add 1 to the count of n and divide the number (try this many times as possible)
				n=n+1;
				number=number/i;
			}
		if(n){
		printf ("%d^%d\n", i, n); //print the prime if it divided the number (namy times as it divided the number)
		}
	}
	printf ("%d\n", number); //print the number (it is the last prime factor)
}
