#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    
    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);
    printf("enter the operator: ");
    scanf(" %c",&op);  
    if(op=='+')
      printf("the sum is %d",n1+n2);
    else if(op=='-')
      printf("the subtraction is %d",n1-n2);
    else if(op=='*')
      printf("the muliplication is %d",n1*n2);
   else if (op == '/')
    {
        if (n2 != 0)
            printf("The division is %d\n", n1 / n2);
        else
            printf("Error: Division by zero!\n");
    }
    else if (op == '%')
    {
        if (n2 != 0)
            printf("The remainder is %d\n", n1 % n2);
        else
            printf("Error: Modulus by zero!\n");
    }
    else
      printf("invalid operator");
return 0;

}