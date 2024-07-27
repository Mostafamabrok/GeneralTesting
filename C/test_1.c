#include <stdio.h>
#include <stdbool.h>


int number_variable = 15;
int comparison_variable = 25;
//This is a comment
int main() {
  printf("Your number is: ");
  printf("%d" ,number_variable);

  if (number_variable > comparison_variable) {
    printf("\n\nYour number is also greater than %d!", comparison_variable);

  }
  else {
    printf("\n\nYour number is not greater than %d.", comparison_variable);
  }


  return 0;
}
