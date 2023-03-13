/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int s1m1, s2m2, totalmark;
  float average;

  printf("Enter the marks for Subject 1 : ");
  scanf("%d", &s1m1);

  printf("Enter the marks for Subject 2 : ");
  scanf("%d", &s2m2);

  totalmark = s1m1 + s2m2;

  average = totalmark / 2.0;

  printf("The Average Marks is %.2f\n", average);

  return 0;
}
