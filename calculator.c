#include<stdio.h>
int main()
{
char op;
float num1,num2,result=0.01;
printf("Welcome to simple calculator:");
printf("  \n");
printf("Enter[num1][+ - * /][num2]\n");
scanf("%f %c %f",&num1,&op,&num2);
switch(op)
{
case'+':
result=num1 + num2;
break;
case'-':
result=num1 - num2;
break;
case'*':
result=num1 * num2;
break;
case'/':
if(num2!=0)
{
result=num1 / num2;
}
else
{
printf("Error!Division By Zero Is Not Allowed\n");
}
break;
default:
printf("INVALID OPERATOR");
}
printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
return 0;
}
