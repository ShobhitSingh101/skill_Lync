#include<stdio.h>

int main()
{
int n,i,sum;
printf("Enter number: \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("sum of the N natural number is: %d\n",sum);
return 0;
}
