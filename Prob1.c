#include <stdio.h>

int main(void) {
	int i = 0; //i is the sum of all multiples of 3
	int j = 0; //j is the sum of all multiples of 5
	int k = 0; //j is the sum of all multiples of 15
	int iter = 0;
	
	/*because 15 has 3 and 5 both as their muliples, 
	I am subtracting all multiples 15*/
	
	while ( iter < 1000 ){
		if(iter%3==0){
			i += iter;
		}
		
		if(iter%5==0){
			j += iter;
		}
		
		if(iter%15==0){
			k += iter;
		}
		
		iter++;
			
	}
	
	//printf("hello world");
	
	printf("%d", i+j-k);
	return 0;
}
