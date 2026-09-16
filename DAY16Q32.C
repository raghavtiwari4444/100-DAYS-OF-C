/*Write a program to check if 
a number is a palindrome.*/

#include<stdio.h>

int main () 

{
int n, rem,q , result=0 ;
printf(" enter number : ");
scanf("%d" ,&n);

q=n;


while(q>0) {
    
    rem = q%10;
    result = result *10 + rem;
    q=q/10;

    if( result ==n) {
    printf("It is a pallindrom");
    }

    else {
         printf("No it is not a pallindrom");
    }

         
}
return 0;
}