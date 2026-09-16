/*Write a program to print the following pattern:
*****
*****
*****
*****
******/

#include<stdio.h>

int main () {

int n;
printf( "Enter the no of rows : ");
scanf( "%d", &n);

int m;
printf( "Enter the no of column : ");
scanf( "%d", &m);

for ( int i = 1; i<= n; i++) {
    for (int  i = 1; i<=m; i++) {
    printf("*");
}
printf("\n");
}

return 0;



}






