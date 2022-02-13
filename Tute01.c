/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1 , mark2 , average;

  printf("Enter mark 1 :");
  scanf("%2f" , &mark1);  //read mark

  printf("Enter mark 2 :");
  scanf("%2f" , &mark2); //read mark

  average = (mark1 + mark2 ) / 2;   //Calculate average

  printf("Average = %2f\n" , average ); //print average
  
  
  return 0;
}

