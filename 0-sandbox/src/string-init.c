/* Sketch - Array/String Initializers */
#include <stdio.h>
#include <string.h>

int main (void){
int main (void){
    //  char* str = "abc"; // Creates a read only (static array)
    //   char str[] = "abc"; // An array of characters
    //  char str[10] = "abc"; // An array of characters, with some extra memory padding
    //  char str[] = {'a', 'b', 'c'}; // An array of characters

  printf("Read: %s\n", str);
  str[2] = '?';
  printf("Write: %s\n", str);

  // Memory allocated
  for(int i = 0; i < 10; i++){
    printf(" %i - %c\n", i, str[i]);
  }
  printf("end\n");
  return 0;
}