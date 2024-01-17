#include <stdio.h>

int main(void) {
  int command;
  double balance = 0.0;
  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
  double credit;
  double debit;
  while (1) {
    printf("Enter command: ");
    scanf("%d", &command);
    switch (command) {
      case 0:
        balance = 0.00;
        printf("Clear balance, current balance: $0.00\n");
        break;
      case 1:
        printf("Enter amount of credit: ");
        scanf("%lf", &credit);
        balance += credit;
        break;
      case 2:
        printf("Enter amount of debit: ");
        scanf("%lf", &debit);
        balance -= debit;
        break;
      case 3:
        printf("Current balance: $%.2lf\n", balance);
        break;
      case 4:
        break;
      default:
        printf("Unknown command, please re-enter.\n");
        printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
        break;
    }
    if (command == 4) {
      break;
    }
  }
  return 0;
}