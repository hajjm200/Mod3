#include <stdio.h>

int main(void) {
  int i;
  int* p;

  // Store 1 in the variable i
  // i is an integree
  i = 1;

  // Store the address of variable i in variable p
  // p is andress of i
  p = &i;

  // The address of i

printf("The adress of i is %p \n", (void*) &i);

  // The value of p, which is the same as the address printed by the previous statement

printf("The value of p is %p \n", (void*) p);

  // Print the value at the address stored in p, i.e., the value of i
printf("THe value  at the adress stored in p (value of i) is %d \n", *p);

  // Increment the value at the address stored in p. This will increment the value of i

  *p = *p + 1;
  // Print the value at the address stored in p, i.e., the value of i
printf("THh value  at the adress stored in p (value of i) after incrementation is %d \n", *p);

  // To make sure, let's print the value of i. It is now 2
printf ("The value of i after incrementation is %d \n", i);
  return 0;
}
