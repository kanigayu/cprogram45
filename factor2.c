#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		if(a[i]%2!=0)
		printf("%d\t",i);
	}
	return 0;
}
