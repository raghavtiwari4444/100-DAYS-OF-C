/*Write a program to print the product of even numbers from 1 to n*/

#include<stdio.h>

int main () {

int n;
printf(" enter number : ");
scanf("%d" ,&n);
int product = 1;
for ( int i=2; i <=n; i = i + 2) {
    product= product * i; 
}

    printf("Product = %d\n" , product);
    
return 0;

}