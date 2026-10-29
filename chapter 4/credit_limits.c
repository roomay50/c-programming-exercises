/*Exercise 4.17*/
#include <stdio.h>

int main(void){
  // initializing the number of customers
  unsigned int number_of_customers = 0;

  // repeating the process for 3 customers
  while (++number_of_customers<=3){  
    // getting the account number of the customer
    unsigned int account_number;
    printf("\nEnter the account number for customer %u: ", number_of_customers);
    scanf("%u", &account_number);

    // getting the customer's credit limit
    unsigned long credit_limit;
    printf("Enter your credit_limit for customer %u: ", number_of_customers);
    scanf("%lu", &credit_limit);

    // getting the customer's current balance
    unsigned long current_balance;
    printf("Enter your current_balance for customer %u: ", number_of_customers);
    scanf("%lu", &current_balance);

    // reducing the original credit limit by half
    unsigned long new_credit_limit = (credit_limit/2);

    // checking if the current balance is greater than the new credit limit
    if (current_balance>new_credit_limit){
      printf("\nAccount: %u\nYou Have Exceeded Your Credit Limit\nYour new limit due to the recession: %lu.\nAmount exceeding your new credit limit: %lu", account_number, new_credit_limit, current_balance-new_credit_limit);
    }

    // displaying the amount the customer can still borrow if the limit has not been exceeded
    else{
      printf("\nAccount: %u\nYou Have Not Exceeded Your Credit Limit.\nYour new limit due to the recession: %lu\nYou can still borrow up to: %lu", account_number, new_credit_limit, new_credit_limit - current_balance);
    }
  }

}