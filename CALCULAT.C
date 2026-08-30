#include<stdio.h>
#include<conio.h>
int main()
{ int a, b, c, d, e, f;
  clrscr();
  printf("Enter the numbers to perform operation \n");
  scanf("%d %d \n", &a, &b);
  c = a+b;
  d = a-b;
  e = a*b;
  f = a/b;
  printf("Sum = %d \n", c);
  printf("Difference = %d \n", d);
  printf("Product = %d \n", e);
  printf("Division = %d \n", f);
  printf("Made by Ojesev Bhardwaj");
  return 0;

  }