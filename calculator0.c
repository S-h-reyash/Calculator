#include<stdio.h> 

int main(void) 
{ 
   double result =0, num1, num2; 
   char operator; 
   
   printf("Enter the first number : \n");
   scanf("%lf", &num1);
   printf("Enter the second number : \n");
   scanf("%lf", &num2);
   printf("Choose an operator: \n"); 
   scanf("%s", &operator);
   
   switch(operator)
   { 
    case '+': 
       result = num1 +num2 ; 
       break; 

    case '-':  
       result = num1 - num2; 
       break; 

    case '*':
       result = num1 * num2; 
       break; 

    case '/':
       result = num1 / num2; 
       break;

    default : 
       printf("Invalid Operation\n"); 
   }
  printf("The Value is : %lf", result);
   return 0;
}