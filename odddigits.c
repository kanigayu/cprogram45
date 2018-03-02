#include<stdio.h>
int main()
{
int n,k;
scanf("%d",&n);
while(n!=0)
{
k=n%10;
if(k%2!=0)
{
printf("%d\t",k);
}
n=n/10;
}
return 0;
}
