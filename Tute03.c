/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int i , n , sum = 0;

  printf("Enter any number : ");
  scanf("%d" , &n);    //read last number

  for(i = 1 ; i <= n ; i++)   //for loop 
  {
    sum = sum + i;  //calculate total
  }
    printf("sum : %d" , sum);   //display total
  
  
  return 0;
}

