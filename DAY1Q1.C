/* W.T.P TO INPUT TWO NUMBERS AND DISPLAY THEIR SUM */

#include<stdio.h>

int main () {
int a;
printf("Enter value of a : ");
scanf("%d" , &a);

int b;
printf("Enter value of b : ");
scanf("%d" , &b);

int sum = a + b;
printf("Sum is : %d\n" , sum );


return 0;
}