/* Program:to find the factorial using recursion*/
  /*Author: Shreeya Pandey*/
/*Date:2016/07/17*/
/*Refrence:Data structure using C and C++ page #127*/
#include<stdio.h>
int fact(int);
int main(){
  int num,f;
  printf("Enter a number: \n");
  scanf("%d",&num);
  f=fact(num);
  printf("Factorial of %d is: %d \n",num,f);
  return 0;
}

int fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }

