#include <stdio.h>

/* A function that returns the length of a string by counting the number of characters until '\0' */
// ptr is a pointer to a character
int stringLength(char *ptr){
    //int lenght is now 0
  int length = 0;
  // while the pointer is not pointing to the last null character
  while((*ptr) != '\0'){
    length++; // incremenet the length by 1
    // Fix: Add a line to advance the pointer
    ptr = ptr + 1;
 }
  return length;
}

int main(void) {
  char aString[] = "Hello!";
  // We can escape a quote inside a quote by adding \ before the quote
  printf("\"Hello!\" is %d characters long\n", stringLength(aString));
  return 0;
}
