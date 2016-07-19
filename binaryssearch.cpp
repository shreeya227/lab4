//Program: To implement Binary search.
 // Author: Shreeya Pandey
 // Date: 14/07/2016
//Ref: Data Structures. Using C and C++, Chap 3, page 133//
 #include <stdio.h>
 #define SIZE 10
 
 int binary_search(int[],int,int,int);
 int main()
 {
 	int n[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	int num,i=0,low,high;
 	printf ("enter a number to search\n");
 	scanf("%d",&num);
 	i = binary_search(n,num,0,SIZE-1); //binary search funtion is called
 	if (i==-1)
 	{
 		printf("entered num is not in array");
 	}else
 	{
 		printf("entered num is in array");
 	}
 } 
 
 int binary_search(int  n[], int x, int low, int high)
 {
 int mid;
 if (low>high)
 {
 return(-1);
 } else
 {
 	mid=(low + high)/2;
 	return (x== n[mid] ? mid: x< n[mid] ? binary_search(n, x, low, mid-1): binary_search(n, x, mid+1, high));
 }
 }

