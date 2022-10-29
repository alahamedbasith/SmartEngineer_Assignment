#include <stdio.h>
int main() 
{ 
  // ASCII PROGRAM
 char chr; 
 printf("Enter a character: "); 
 scanf("%c", &chr); 
 printf("Character %c.\n",chr); 
 printf("ASCII value %d.", chr); 
  
  // IO MULTIPLE VALUES PROGRAM
 
 int a; 
 float b; 
 printf("Enter integer and float: ");
 
  scanf("%d%f", &a, &b); 
 printf("You entered %d and %f", a, b); 
 return 0; 
} 
