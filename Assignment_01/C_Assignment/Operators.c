#include <stdio.h>
int main() 
{ 

//ARITHMETIC

 int a = 9,b = 4, c; 
 
 c = a+b; 
 printf("a+b = %d \n",c); 
 c = a-b; 
 printf("a-b = %d \n",c); 
 c = a*b; 
 printf("a*b = %d \n",c); 
 c = a/b; 
 printf("a/b = %d \n",c); 
 c = a%b; 
 printf("Remainder when a divided by b = %d \n",c); 
 

//INCREAMENT DECREMENT

int a = 10, b = 100; 
 float c = 10.5, d = 100.5; 
 printf("++a = %d \n", ++a); 
 printf("--b = %d \n", --b); 
 printf("++c = %f \n", ++c); 
 printf("--d = %f \n", --d); 
 
 
 //ASSINGNMENT 
 
 int a = 5, c; 
 c = a; 
 printf("c = %d\n", c); 
 c += a; 
 printf("c = %d\n", c); 
 c -= a; 
 printf("c = %d\n", c); 
 c *= a; 
 printf("c = %d\n", c); 
 c /= a; 
 printf("c = %d\n", c); 
 c %= a; // c = 0
 printf("c = %d\n", c); 
 
 
 //RELATIONAL
 
 int a = 5, b = 5, c = 10; 
 printf("%d == %d is %d \n", a, b, a == b); 
 printf("%d == %d is %d \n", a, c, a == c); 
 printf("%d > %d is %d \n", a, b, a > b); 
 printf("%d > %d is %d \n", a, c, a > c); 
 printf("%d < %d is %d \n", a, b, a < b); 
 printf("%d < %d is %d \n", a, c, a < c); 
 printf("%d != %d is %d \n", a, b, a != b); 
 printf("%d != %d is %d \n", a, c, a != c); 
 printf("%d >= %d is %d \n", a, b, a >= b); 
 printf("%d >= %d is %d \n", a, c, a >= c); 
 printf("%d <= %d is %d \n", a, b, a <= b); 
 printf("%d <= %d is %d \n", a, c, a <= c); 
 
 
 //LOGICAL 
 
 int a = 5, b = 5, c = 10, result; 
 result = (a == b) && (c > b); 
 printf("(a == b) && (c > b) is %d \n", result); 
 result = (a == b) && (c < b); 
 printf("(a == b) && (c < b) is %d \n", result); 
 result = (a == b) || (c < b); 
 printf("(a == b) || (c < b) is %d \n", result); 
 result = (a != b) || (c < b); 
 printf("(a != b) || (c < b) is %d \n", result); 
 result = !(a != b); 
 printf("!(a != b) is %d \n", result); 
 result = !(a == b); 
 printf("!(a == b) is %d \n", result); 

return 0;
}
