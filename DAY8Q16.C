/*Write a program to input three numbers and find the largest among them using if–else*/

#include<stdio.h>

int main () {


    int a,b,c;

    printf(" enter 1st no : ");
    scanf("%d" , & a);
    printf(" enter 2nd no : ");
    scanf("%d" , & b);
    printf(" enter 3rd  no : ");
    scanf("%d" , & c);

    if ( a>b && a>c) {

        printf("%d is greatest\n" , a);
    }

    if (b>a && b>c) {
        printf("%d is greatest\n" , b);
    }
    if (c>a  && c>b) {
        printf("%d is greatest\n" , c);
    }
    return 0;
}
