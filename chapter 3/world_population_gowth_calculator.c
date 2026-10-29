/*Exercise 3.46*/
#include <stdio.h>

int main(void){
  // defining the variables for the current world population
  float currentWordPopulation;
  printf("%s", "\nEnter Current World Population: ");
  scanf("%f", &currentWordPopulation);

  // getting the annual growth rate from the user
  float annualGrowthrate;
  printf("%s", "Enter Annual World Population: ");
  scanf("%f", &annualGrowthrate);

  // calculating the growth rate per year
  float growthrate = (1+(annualGrowthrate/100));

  printf("the growth rate per year is %f", growthrate);
  // computing growth rate to the power of no_of_years

  // defining the variables for calculating the growth rate over the number of years
  float power;
  unsigned int index, noYears;
  printf("%s", "\nEnter No. of Years: ");
  scanf("%d", &noYears);

  // initialize index and power
  index = 1;
  power = 1;

  // multiplying the growth rate by itself for the number of years entered
  while(index<=noYears){
    power *= growthrate;
    ++index;
  }

  printf("After %u years, the growth rate is %f", noYears, power);

  // calculating the estimated population
  float estimatedPopulation;
  estimatedPopulation = currentWordPopulation * power;

  // displaying the estimated population after the number of years entered
  printf("\nThe Estimated Poulation after %u of years is %.2f\n", noYears, estimatedPopulation);

}