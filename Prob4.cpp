#include <stdio.h>
#include <stdlib.h>
 
int palCheck(unsigned int num) {
    unsigned int reversed = 0;
    unsigned int original = num;
 
    if (num < 10) return 1;
    if (num % 10 == 0) return 0;
 
    while (num >= 1) {
        reversed = (reversed * 10) + (num % 10);
        num = num/10;
    }
 
    if (original == reversed) return 1;
    else return 0;
}
 
int main(void)
{
  unsigned int i, j, max = 0;
  for (i = 100; i <= 999; i++) {
    for (j = 100; j <= 999; j++) {
      unsigned int p = i*j;
      if (palCheck(p) && p > max) {
        max = p;
      }
    }
  }
  printf("%u\n", max);
  return 0;
}
