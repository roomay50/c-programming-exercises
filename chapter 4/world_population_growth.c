/*Exercise 4.40*/
#include <stdio.h>
#include <math.h>

int main(void){
  // defining the current and previous population
  double current_population = 8322957898.0;
  double previous_population = current_population;

  // defining the annual growth rate and increase in population
  double growth_rate = 0.85/100;
  double annual_increase;

  // calculating the year it will take for the population to double
  int double_year = ceil(log(2) / log(1 + growth_rate));

  // displaying the table headings
  printf("\n%-10s %-36s %s\n", "Year", "Anticipated World population", "Numerical Increase In world Population");

  // calculating and displaying the population and annual increase for 75 years
  for(int year = 1; year<=75; year++){
    annual_increase = previous_population * growth_rate;

    previous_population += annual_increase;

    printf("%-10d %-36.f %.f\n", year, previous_population, annual_increase);
  }

  // displaying the year it will take for the population to double
  printf("\nThe doubling year is %d", double_year);
}