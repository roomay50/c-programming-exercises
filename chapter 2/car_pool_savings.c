/*Exercise 2.33*/
#include <stdio.h>

int main(void){
  // defining the variables for calculating the daily driving cost
  float DailyDrivingCost, TotalMilesDrivenPerDay, AverageMilesPerGallon, CostPerGallonofGasoline, ParkingFeesPerDay, TollsPerDay;

  // getting user input
  printf("%s","Enter TotalMilesDrivenPerDay: ");
  scanf("%f", &TotalMilesDrivenPerDay);
  printf("%s","Enter AverageMilesPerGallon: ");
  scanf("%f", &AverageMilesPerGallon);
  printf("%s","Enter CostPerGallonofGasoline: ");
  scanf("%f", &CostPerGallonofGasoline);
  printf("%s","Enter ParkingFeesPerDay: ");
  scanf("%f", &ParkingFeesPerDay);
  printf("%s","Enter TollsPerDay: ");
  scanf("%f", &TollsPerDay);

  // calculating the total cost of driving per day
  DailyDrivingCost = (((TotalMilesDrivenPerDay/AverageMilesPerGallon) * CostPerGallonofGasoline) + ParkingFeesPerDay + TollsPerDay);

  // displaying the daily driving cost to two decimal places
  printf("Your daily driving cost is %.2f", DailyDrivingCost);
}