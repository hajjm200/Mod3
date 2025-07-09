#include <stdio.h>
#include <stdlib.h> // for atoi

/* 
* Compute the factorial of x
*/
long factorial(int x){
  long result = 1;
  for (int i = 1; i <=x ; i++){
    result *= i;
  }
  return result;
}

/* Print the factorial of a number */
/* 
  Function: int main (int argc, const char * argv[])
  P
*/
int main(int argc, const char * argv[]) {
  // Verify that the command line contains two strings
  if(argc != 2){
    printf("Please specify an integer value between 1 and 20\n");
    printf("Usage: ./main intVal\n");
    return 1;
  }
  // Get the second string, i.e., element at index 1, and convert it to an integer
  // the number entter after ./main is converted from string to integer and assigned to i
  int i = atoi(argv[1]);
  // if i is less than 1 or greater than 20 then it is invalid
  if(i < 1 || i > 20){
    printf("The number you entered is outside the allowed values\n");
    return 1; // return false
  }
  // else print the results return 0.
  printf("The factorial of %d is %ld\n", i, factorial(i));
  return 0;
}