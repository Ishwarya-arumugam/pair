#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c,d;
clrscr();
scanf("%d",&a);
c=a;
while(a!=0)
{
d=a%10;
b=b+d*d*d;
a=a/10;
}
if(c==b)
{
printf("Armstrong number");
}
else
{
printf("Not an Armstrong number");
}
getch();
}
