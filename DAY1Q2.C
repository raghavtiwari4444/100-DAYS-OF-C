/* WTP TO FIND PRODUCT AND DIFFRENCE OF VALUES INPUT FROM THE USER*/

#include<stdio.h>

int main () {
int a;
printf("Enter value of a : ");
scanf("%d" , &a);

int b;
printf("Enter value of b : ");
scanf("%d" , &b);

int product= a * b;
printf("Product is : %d\n" , product );

int quotient = a/b;
printf("Quotient  is : %d\n" , quotient );

return 0;
}