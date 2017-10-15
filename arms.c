#include<stdio.h>  
#include<conio.h>  
main()  
{  
int n,s,sum=0,temp;  
clrscr();  
printf("enter the number=");  
scanf("%d",&n);  
temp=n;  
while(n>0)  
{  
s=n%10;  
sum=sum+(s*s*s);  
n=n/10;  
}  
if(temp==sum)  
printf("is an armstrong number ");  
else  
printf("is not armstrong number");  
getch();  
}  
