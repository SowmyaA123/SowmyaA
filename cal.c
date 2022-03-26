#include<stdio.h>
int main()
{
int a,b;
float c;
char op;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf("Enter choice");
printf("+ for addition");
printf("- for substraction");
printf("* for multiplication");
printf("/ for division");
printf("%% for modelus");
scanf(" %c",&op);
if(op == '+')
{
c=a+b;
printf("output is %f",c);
return -1;
}
else if(op == '-')
{
c=a-b;
printf("output is %f",c);

return -1;
}
else if(op == '*')
{
	c=a*b;
printf("output is %f",c);

	return -1;
}
else if(op == '/')
{
	if(b==0)
	{
		printf("Enter non zero number");
	}
	else
	{
		c=a/b;
	}
}
else if(op == '%')
{
	if(c==0)
{
	printf("enter non zero number");
}
else
{
	c=a%b;
}
}
else
{
	printf("given no of choice");
}
printf("output is %f",c);

return 0;
}
