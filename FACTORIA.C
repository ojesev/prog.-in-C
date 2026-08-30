#include<stdio.h>
#include<conio.h>
void main()
{ int i, num;
  double fact = 1.0;
  clrscr();
  printf("Enter a number : \n");
  scanf("%d \n", &num);
  if (num < 0) {
     printf("Error ! \n");
     }
     else {
     for (i = 1; i<= num; i++) {
     fact = fact * i;
     }
     printf("Factorial of %d is: %.0f \n", num, fact);
     }
     printf("Made by Ojesev Bhardwaj \n");
     getch();
     }