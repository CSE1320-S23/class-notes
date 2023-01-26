/* Sketch - Integer Promotion & Casting */
#include <stdio.h>
#include <stdlib.h>

int main (void){
  char a = 'a';
  int b = a; // integer promotion
  double c = a; // integer promotion
  double e = b; // integer promotion
  int x = 10;
  double y = x; // integer promotion

  // Mixing float and integer
  int numr = 10; 
  int denr = 20;
  
  double frac = (double) numr/denr;
  printf("frac %f\n", frac);

  // Integer promotion
  double numr2 = 10; 
  int denr2 = 20;
  
  double frac2 = numr2/denr2;
  printf("frac %f", frac2);

  return 0;
}