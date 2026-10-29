/*Exercise 5.36*/
#include <stdio.h>

// function prototype
void recursive_hanoi(unsigned int no_of_discs, unsigned int initial_peg, unsigned int holding_peg, unsigned int final_peg);

// creating the main function
int main(void){
  // defining the number of discs to move
  unsigned int no_discs_to_move;

  // getting the total number of discs from the user
  printf("%s", "Enter the total number of discs on your Hanoi Tower: ");
  scanf("%u", &no_discs_to_move);

  // calling the recursive function to move the discs from peg 1 to peg 3
  recursive_hanoi(no_discs_to_move, 1, 2, 3);

  return 0;

}

// defining the recursive function for solving the Tower of Hanoi
void recursive_hanoi(unsigned int no_of_discs, unsigned int initial_peg, unsigned int holding_peg, unsigned int final_peg){
  // base case: moving the last disc directly to the final peg
  if (no_of_discs == 1){
    printf("%u --> %u\n", initial_peg, final_peg);
  }
  else{
    // moving the smaller discs to the holding peg first
    recursive_hanoi(no_of_discs - 1, initial_peg, final_peg, holding_peg);

    // moving the largest disc to the final peg
    printf("%u --> %u\n", initial_peg, final_peg);

    // moving the remaining discs from the holding peg to the final peg
    recursive_hanoi(no_of_discs - 1, holding_peg, initial_peg, final_peg);
  }
}