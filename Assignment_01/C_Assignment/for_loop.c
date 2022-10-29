#include <stdio.h>
int main() { 

//1-10 using for loop

 int i; 
 for (i = 1; i < 11; ++i) 
 { 
 printf("%d ", i); 
 } 
 
 //Program to calculate the sum of first n natural numbers
 
 int num, count, sum = 0; 
 printf("Enter a positive integer: "); 
 scanf("%d", &num); 
 // for loop terminates when num is less than count
 for(count = 1; count <= num; ++count) 
 { 
 sum += count; 
 } 
 printf("Sum = %d", sum); 

 return 0; 
} 
