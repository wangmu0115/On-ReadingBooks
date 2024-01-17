#include <math.h>
#include <stdio.h>

double computer(double left, double right, char op) {
  double result;

  switch (op) {
    case '+':
      result = left + right;
      break;
    case '-':
      result = left - right;
      break;
    case '*':
      result = left * right;
      break;
    case '/':
      result = left / right;
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}
double numberAddBit(double num, int decimalBit, char addBit) {
  if (decimalBit == 0) {
    return num * 10.0 + (addBit - '0');
  } else {
    return num + (addBit - '0') / pow(10.0, decimalBit);
  }
}

int main(void) {
  printf("Enter an expression: ");
  char ch;
  double result = 0.0;
  char op = ' ';
  double right = 0.0;
  int decimalBit = 0;
  while ((ch = getchar()) != '\n') {
    if ('0' <= ch && ch <= '9') {
      if (op == ' ') {
        result = numberAddBit(result, decimalBit, ch);
      } else {
        right = numberAddBit(right, decimalBit, ch);
        if (decimalBit != 0) {
          decimalBit += 1;
        }
      }
    } else if (ch == '.') {
      decimalBit = 1;
    } else {
      if (op == ' ') {
        op = ch;
      } else {
        result = computer(result, right, op);
        op = ch;
        right = 0.0;
        decimalBit = 0;
      }
    }
  }
  if (op != ' ') {
    result = computer(result, right, op);
  }
  printf("Value of expression: %.2lf\n", result);
}