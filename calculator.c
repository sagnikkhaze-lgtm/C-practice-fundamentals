#include <stdbool.h>
#include <stdio.h>

int main() {
  double a, b, t = 0.0;
  bool flag = true, fstrun = true;

  while (flag) // to continously take input from user
  {
    if (fstrun) // to make the program take 2 inputs from user when it runs for the 1st time, just like a real calculator
    {
      printf("Enter 1st number : ");
      scanf("%lf", &a);
      printf("Enter 2nd number : ");
      scanf("%lf", &b);
      // not setting fstrun=false here coz we need it inside the switch to know its the 1st run
    } else // from the 2nd time it only takes one input and the other number with which the operation is to be performed is the previous total
    {
      printf("enter number : ");
      scanf("%lf", &a); // a is taking the brand new number
      b = t;            // b is holding our old total from before
    }

    int ch;
    printf("\t\tC H A R T \n");
    printf("1.         +  \n");
    printf("2.         -  \n");
    printf("3.         *  \n");
    printf("4.         /  \n");
    printf("Enter Your choice : ");
    scanf("%d", &ch);

    switch (ch) // performing calculations
    {
    case 1:
      t = a + b; // plus doesnt care about order so simple a+b works fine
      break;
    case 2:
      if (fstrun) // for 1st time we want 1st number minus 2nd number
      {
        t = a - b;
      } else // from next time we want old total (b) minus the new input (a)
      {
        t = b - a;
      }
      break;
    case 3:
      t = a * b; // multiplication also doesnt care about order
      break;
    case 4:
      if (fstrun) // 1st time division is a/b so denominator is b
      {
        if (b == 0) // checking if 2nd number is 0 so it doesnt crash
        {
          printf("NA.\n");
        } else {
          t = a / b;
        }
      } else // from 2nd time division is b/a so denominator is a
      {
        if (a == 0) // checking if new input is 0
        {
          printf("NA.\n");
        } else {
          t = b / a;
        }
      }
      break;
    default:
      printf("wrong choice sir please try again\n");
    }

    fstrun = false; // now 1st run is finally done so we flip the flag for the next loops

    char con; // ask user to continue
    printf("Do u want to continue ? y/n : ");
    scanf(" %c", &con);

    if (con == 'y' || con == 'Y') // flag changing statement
    {
      flag = true;
    } else {
      flag = false;
    }
  }

  printf("Your total is = %.2f\n", t);
  return 0;
}