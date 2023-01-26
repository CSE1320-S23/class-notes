/* Sketch - Password Requirement - Char Manipulation */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


// PASSWORD VERIFICATION
// Pass password candidate via command line argument.

bool isValidPassword(char* passwordCandidate){
  // Requirements: Assume false until proven valid
  bool hasUpper = false;
  bool hasLower = false;
  
  // Assess password candidate

  size_t n = strlen(passwordCandidate);
  for(int i = 0; i < n; i++){
    char x = passwordCandidate[i];
    if(isupper(x)){ hasUpper = true; }
    if(islower(x)){ hasLower = true; }
  }
  
  // Requirements check
  return hasUpper && hasLower; // AND OPERATION
}

int main (int argc, char* argv[]){
  char* passwordCandidate = argv[1];
  printf("Valid? %s - %d\n", passwordCandidate, isValidPassword(passwordCandidate));
  return 0;
}