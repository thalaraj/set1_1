#include<stdio.h>

int main()
{
int a[10],i,n,k,sum=0;
printf("  \nenter upto what u have to sum ");
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
 scanf("%d",&a[i]);   
}
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
