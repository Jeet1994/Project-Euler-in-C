/*Logic :
Subject: 8
Integer: 2


Iteration 1: Does 2 divide 8? Yes, so divide 8 by 2.
Iteration 2: Does 2 divide 4? Yes, so divide 4 by 2. 
Iteration 3: Does 2 divide 2? Yes, so divide by 2. 
Iteration 4: Does 2 divide 1? Nope!... subject equals 1. 
Highest prime that divides 8 is 2.  
   
Subject: 147
Integer: 2


Iteration 1: Does 2 divide 147? No, increase Integer. 
Iteration 2: Does 3 divide 147? Yes, so divide by 3. 
Iteration 3: Does 3 divide 49? No, increase Integer.
Iteration 5: Does 5 divide 49? No, increase Integer. 
Iteration 7: Does 7 divide 49? Yes, so divide by 7. 
Iteration 8: Does 7 divide 7? Yes, so divide by 7.
Iteration 9: Does 7 divide 1? No. Subject equals 1. 
Highest prime that divides 147 is 7.
*/

# include <stdio.h>
# include <math.h>

int main(void)
{

 
 
	long long int n = 600851475143;
	int i;

    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%lld ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        printf ("%lld ", n);
 
}
