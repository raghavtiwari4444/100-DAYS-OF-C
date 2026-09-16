/* W.T.P TO CALCULATE THE AREA AND PERIMETER OF RECTANGLE 
GIVEN LENGTH AND BREDTH FROM THE USER */

#include<stdio.h>

int main () {

    int l,b;

    
printf("Enter value of l : ");
scanf("%d" , &l);


printf("Enter value of b: ");
scanf("%d" , &b);

int perimeter = 2 * (l + b);
printf( " Value of perimeter is : %d\n" ,perimeter);

int area  = l*b;
printf( " Value of area  is : %d\n" , area );

return 0;
}
