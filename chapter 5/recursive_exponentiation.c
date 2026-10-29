/*Exercise 5.43*/
/*Overflow warning: ensure that your return value gets no bigger than LLONG_MAX.*/

#include <stdio.h>

// function prototype
long long power(unsigned long long base, unsigned long long exponent);

// creating the main function
int main(void){
  // calling the power function to calculate 3 to the power of 20
  unsigned long long result = power(3, 20);

  // displaying the result
  printf("%llu\n", result);
}

// defining the recursive function to calculate the power of a number
long long power(unsigned long long base, unsigned long long exponent){
  // base case: returning the base when the exponent gets to 1
  if (exponent == 1){
    return base;
  }
  else{
    // multiplying the base by the result of the previous recursive call
    return base * power(base, exponent-1);
  }
}