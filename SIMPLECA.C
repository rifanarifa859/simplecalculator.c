#include<stdio.h>
int main()
{
char op;
float a,b;
 printf("ENTER EXPRESSION:");
 Scanf("%f %c %f",&a,&op,&b);
switch(op)
{
case'+':
 printf("%.2f\n",a+b);
 break;
case'-':
 printf("%,2f\n",a-b);
 break;
case'*':
 printf("%.2f\n",a*b);
 break;
case'/':
 if(b!=0)
 print("%.2f\n",a/b);
 else
 printf("Division by zero!\n");
 break;
 default:
 printf("invalid operation\n");
}
 return 0;
}