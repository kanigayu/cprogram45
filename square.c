#include<stdio.h>
int main()
{
int k,n,l,i;
scanf("%d\t%d",&k,&n);
l=k*n;
for(i=2;i<=l;i++)
{
if(i*i==l)
{
printf("yes");
}
}
return 0;
}
