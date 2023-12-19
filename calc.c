#include <stdio.h>

int main() {
   
    char op;
    double num1, num2;
    double result;
    
    printf("Enter an operator +, -, /, *\n");
    scanf(" %c", &op);  
    
    printf("Enter the first number\n");
    scanf("%lf", &num1);  
    
    printf("Enter the second number\n");
    scanf("%lf", &num2);  
    
    switch (op) {
        case '+': {  
            result = num1 + num2;
            break;
        }
        
        case '-': {  
            result = num1 - num2;
            break;
        }
        
        case '/': {  
            result = num1 / num2;
            break;
        }
        
        case '*': {  
            result = num1 * num2;
            break;
        }
        
        default: {
            return 1;  
        }
    }
    
    printf("Result: %.2lf\n", result); 
    
    return 0;
}
