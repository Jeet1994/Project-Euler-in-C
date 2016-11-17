#include<stdio.h>

int main(void){
	
	int a = 0;
	int b = 1;
	int c = 1; 
	int sum = 0;
	
	//my fib = 0,1,1,2,3,5,8...
	
	while (c < 4000000){
		c = a+b; //generate fib series
		 
		if (c%2==0) //finding even
		
		{
			sum += c; //adding all evens.
			
		}
		
		a = b; //updating the series.
		b = c; 
		 
		c++; //updating c, which is used for iteration. 
		
	}
	
	printf("%d", sum);
	
	return 0;
	
}
