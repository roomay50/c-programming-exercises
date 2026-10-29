/*Exercise 3.47*/
#include <stdio.h>

int main(void){
  // defining the variables for the current date, birthday and age
  unsigned int current_year, current_month, current_day, birth_year, birth_month, birthday, age;

  // getting the current date from the user
  printf("%s","Enter current year: ");
  scanf("%u", &current_year);

  printf("%s", "Enter current month (1 - 12): ");
  scanf("%u", &current_month);

  printf("%s", "Enter current day(1 - 31): ");
  scanf("%u", &current_day);

  // getting the user's date of birth
  printf("%s", "Enter birth year: ");
  scanf("%u", &birth_year);

  printf("%s", "Enter birth month (1 - 12): ");
  scanf("%u", &birth_month);

  printf("%s", "Enter birth day(1 - 31): ");
  scanf("%u", &birthday);

  // calculating the age using the current year and birth year
  age = current_year - birth_year;

  // checking if the birthday month has not been reached
  if (current_month < birth_month){ // if we haven't gotten to birth month
    puts("running 1");
    age -= 1;
  }

  // checking if the birthday month has already passed
  else if (current_month > birth_month){ // if we have passed birth month
    puts("running 2");
    age;
  }

  // checking if the current month is the same as the birth month
  else if(current_month == birth_month){
    puts("running 3");

    // checking if the birthday has not been reached in the current month
    if (current_day < birthday){
      puts("running 3.1");
      age -=1;
    }

    // checking if the birthday has already passed in the current month
    else if (current_day > birthday){
      puts("running 3.2");
      age;
    }

    // checking if today is the user's birthday
    else if (current_day == birthday){
      puts("running 3.3");
      age;
    }
  }

  // computing max heart rate
  int maxHeartRate = 220 - age;

  // computing lower target for heart rate
  float lower_target = (50.0/100.0) * maxHeartRate;

  // computing upper target for heart rate
  float upper_target = (85.0/100.0) * maxHeartRate;

  // displaying the age and maximum heart rate
  printf("Your age is %u\nYour max heart rate is %d", age, maxHeartRate);

  // displaying the lower and upper target heart rate limits
  printf("\nThe target lower limit of your heart rate is %.2f: ", lower_target);
  printf("\nThe target upper limit of your heart rate is %.2f: ", upper_target);
}