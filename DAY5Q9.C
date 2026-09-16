/*Write a program to calculate simple and compound interest 
for given principal, rate, and time */

  #include<stdio.h>


  int main () {

    float p,r,t,si;

     p= 100;
     r =10;
     t =2;

    si = p*r*t/100;

    printf( "%f",si);

    return 0;

  }