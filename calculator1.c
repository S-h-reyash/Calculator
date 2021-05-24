#include<stdio.h>  

int main(void)
{ 
    double num1; 
    double num2; 
    char op; 
    printf("Enter a number: \n");
    scanf("%lf",&num1);

    printf("Enter an operator: \n");
    scanf("\n%c", &op);
    
    printf("Enter an number: \n");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);     
    }
    else if (op == '-'){ 
        printf("%f", num1 - num2); 
    }
    else if(op == '/') { 
        printf("%f", num1 / num2); 
    }
    else{ 
      printf("%f", num1 * num2);
    }
   
    
return 0; 
}