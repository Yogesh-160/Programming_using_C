#include <stdio.h>

int main() {

 
  float num1, num2;
  char op;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter Number 1: ");
  scanf("%f", &num1);
  printf("Enter Number 2: ");
  scanf("%f", &num2);

  switch (op) {
    case '+':
      printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
      break;
    // In case If user Inputs the Invalid operands or terms
    default:
      printf("Invalid! Kindly try again using correct input");
      break;
  }

  return 0;
}
