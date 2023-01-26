/* Sketch - Command Line Arguments */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){
  char* first_arg = argv[0];
  printf("argv0? %s\n", first_arg);

  char* second_arg = argv[1];
  printf("argv1? %s\n", second_arg);

  char* third_arg = argv[2];
  printf("argv2? %s\n", third_arg);

  char* fourth_arg = argv[3];
  printf("argv3? %s\n", fourth_arg);

//   char* fifth_arg = argv[4];
//   printf("argv4? %s\n", fifth_arg);
  return 0;
}