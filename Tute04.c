/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(int no1 , int no2);
int minimum(int no1 , int no2);
int multiply(int no1 , int no2);

int main() {
   int no1, no2 ;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);                    //read number1
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);                   //read number2
   printf("Minimum %d\n ", minimum(no1, no2));   //display minimum
   printf("Maximum %d\n ", maximum(no1, no2));   //display maximum
   printf("Multiply %d\n ", multiply(no1, no2));  //display multiply
   return 0;
}

int maximum(int no1 , int no2)
{
    int maximum;      //calculation maximum
    if(no1 > no2)
    {
      maximum = no1;
    }
    else
    {
      maximum = no2;
    }
    return maximum;
}

int minimum(int no1 , int no2)
{
    int minimum;      //calculation minimum
    if(no1 > no2)
    {
      minimum = no2;
    }
    else
    {
      minimum = no1;
    }
    return minimum;
}

int multiply(int no1 , int no2)
{
  int multiply;           //calculation multiply
  multiply = no1 * no2;
  return multiply;
}