/* =======================================================*
Lab 03L
Toncey Stevenson
* =======================================================*/

#include <stdio.h>
#include <math.h>

int main(void) {

  double principal, interest_rate;
  int years;
  double future_value, present_value;

  printf("Enter principal: ");
  scanf("\n%lf", &principal);
  printf("Enter interest rate (as %): ");
  scanf("\n%lf", &interest_rate);
  printf("Enter Number of years:");
  scanf("\n%i", &years);

  future_value = principal * pow(1 + (interest_rate / 100), years);
  printf("For an initial Principal of $%6.2f", principal);
  printf(" at an interest rate of %3.2f%% ", interest_rate);
  printf("for %i years:\n", years);
  printf("Future value: $%6.2f", future_value);

  printf("\n\nEnter future value: ");
  scanf("\n%lf", &future_value);
  printf("Enter interest rate (as %): ");
  scanf("\n%lf", &interest_rate);
  printf("Enter Number of years:");
  scanf("\n%i", &years);

  present_value = future_value / pow(1 + (interest_rate / 100), years);
  printf("For a future value of $%6.2f", future_value);
  printf(" at an interest rate of %3.2f%% ", interest_rate);
  printf("for %i years:\n", years);
  printf("Present value: $%6.2f", present_value);


  return 0;
}
