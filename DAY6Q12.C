/* Write a program to input an integer and check whether 
it is positive, negative or zero using nested if–else.
*/

#include<stdio.h>

int main () {

int n;
printf("Enter the number : ");
scanf( "%d",&n);


if (n == 0) {
    printf("No is equal to zero\n");

}
if( n>0) {
    printf(" No is positive\n");
}   else if (n<0) { 
    printf(" No. is negative\n");
}



return 0;

}







