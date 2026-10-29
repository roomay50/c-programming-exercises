/*Exercise 2.32*/

#include <stdio.h>

// creating the main function
void main(){
  puts("This is my first C program!");
  puts("Yo! Yo! Yo! I'm just kidding");

  // defining the weight and height variables
  float weight, height, bmi;


  // taking input for the user
  printf("%s","Enter your weight in kg: "); //prompt
  scanf("%f", &weight);
  printf("%s","Enter your height in meters: "); //prompt
  scanf("%f", &height);

  // calculating the BMI in kg
  bmi = (weight)/(height*height);

  // display the results based on conditions
  printf("Here is your BMI %.1f\n", bmi);

  // checking if the BMI is less than 18.5
  if (bmi < 18.5){
    puts("Underweight");
  }

  // checking if the BMI is between 18.5 and 24.9
  if ((bmi >= 18.5) && (bmi <= 24.9)){
    puts("Normal");
  }

  // checking if the BMI is between 25 and 29.9
  if ((bmi >= 25) && (bmi <= 29.9)){
    puts("Overweight");
  } 

  // checking if the BMI is greater than 30
  if (bmi > 30){
    puts("Obese");
  }
}