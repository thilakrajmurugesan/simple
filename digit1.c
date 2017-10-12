#include<stdio.h>
int main()
{
int num,tnum,cnt;
printf("Enter the number:");
scanf("%d",&num);
cnt=0;
tnum=num;
while(tnum>=0){
cnt++;
tnum=tnum/10;
}
printf("Total numbers of digits are: %d in number:%d.",cnt,num);
return 0;
}
