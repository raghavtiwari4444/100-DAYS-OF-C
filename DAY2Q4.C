/* W.T.P TO CALCULATE THE AREA AND CIRCUMFERENCE OF CIRCLE 
GIVEN ITS RADIOUS */

#include<stdio.h>

int main () {
int r;
printf("Enter value of radius : ");
scanf("%d" , &r);

float pi = 3.14;



float circumference = 2 * pi * r;
printf("Value of circumference is :%f\n" , circumference );

float area = pi * r * r;
printf("Value of area is :%f\n" , area);


return 0;
}
