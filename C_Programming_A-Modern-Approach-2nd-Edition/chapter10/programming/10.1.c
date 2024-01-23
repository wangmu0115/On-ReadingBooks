#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

char contents[STACK_SIZE] = {'\0'};
int top = 0;

void stack_overflow() { printf("stack overflow.\n"); }
void stack_underflow() { printf("stack underflow.\n"); }

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char ch) {
  if (is_full()) {
    stack_overflow();
    exit(EXIT_SUCCESS);
  } else {
    contents[top++] = ch;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
    return '\0';
  } else {
    return contents[--top];
  }
}

int main(void) {
  // 清空栈
  make_empty();
  printf("Enter parenteses and/or braces: ");
  char ch;
  while ((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{') {
      push(ch);
    }
    if (ch == ')' || ch == '}') {
      char pop_ch = pop();
      if ((ch == ')' && pop_ch == '(') || (ch == '}' && pop_ch == '{')) {
        continue;
      } else {
        printf("Parenteses/braces are not nested properly.\n");
        return 0;
      }
    }
  }
  if (is_empty()) {
    printf("Parenteses/braces are nested properly.\n");
  } else {
    printf("Parenteses/braces are not nested properly.\n");
  }
  return 0;
}