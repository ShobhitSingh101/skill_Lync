#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
char choice;
int i,num,count;

printf("\n");
printf("*      WELCOME    *\n");
printf("\n");
printf("\n");

printf("press 'a' for Addition\n");
printf("press 'b' for Multiplication\n");
printf("press 'c' for Increment\n");
printf("press 'd' for Modulus\n");
printf("press 'e' for Right shift\n");
printf("press 'f' for Left shift\n");
printf("press 'g' for power\n");
printf("press 'h' for AND operation\n");
printf("press 'i' for OR operation\n");
printf("press 'j' to Count no of set bits\n");
printf("press 'k' to show kpi status\n");
printf("press 'q' to Shutdown the platform\n");
printf("Waiting for your Input\n");
 

while(1)
{
scanf(" %c",&choice);
switch(choice)
{
case 'a':
        printf("performing Addition\n");
        printf("Enter the number of elements you want to add: ");
        scanf("%d",&num);
        printf("Enter the number one by one\n");
        int val,sum = 0;
        for (i=0; i<num; ++i)
        {
        scanf("%d",&val);
        sum=sum+val;
        }
   printf("\nSum of %d numbers = %d \n\n",num,sum);
 break;

case 'b':
    printf("performing Multiplication\n");
    printf("Enter the number of elements is: ");
        scanf("%d",&num);
        int val1,mul = 1;
        for (i=0; i<num; ++i)
        {
        scanf("%d",&val1);
        mul=mul*val1;
        }
   printf("\nMul of %d numbers = %d \n\n",num,mul);
 break;
case 'c':
    printf("performing Increment\n");
    printf("Enter the number is: ");
        scanf("%d",&num);
        int incr;
        scanf("%d",&incr);
        incr=num++;
   printf("\nIncrement is %d  for %d \n\n",num,incr);
    break;    
case 'd':
printf("performing modulus\n");
printf("Enter the numbers is: ");
        
        int num1,num2;
        float res;
        scanf("%d",&num1);
        scanf("%d",&num2);
        res=num1%num2;
   printf("\nM of %d numbers = %d \n\n",num,incr);
    break;    
case 'e':
printf("performing Right Shift\n");
printf("Enter the number to Right Shift: ");
        int num3;
        scanf("%d",&num);
   printf("num>>1 of %d = %d\n",num,(num >> 1));
    break;   
case 'f':
printf("performing Left Shift\n");
printf("Enter the number to left Shift: ");
        int num4;
        scanf("%d",&num4);
   printf("num<<1 of %d = %d\n",num4,(num4 << 1));
    break;   
case 'g':
printf("performing power\n");
printf("Enter the number to make power of base and exponent: ");
       int base, exponent;
    long long power = 1;
    int j;
    scanf("%d", &base);
    scanf("%d", &exponent);
    for(j=1; j<=exponent; j++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);
    break; 
case 'h':
    printf("performing AND operation\n");
    printf("Enter the numbers to perform AND operation: ");
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a&&b = %d\n", a&&b);
    break; 
case 'i':
    printf("performing OR operation\n");
    printf("Enter the numbers to perform OR operation: ");
    int a1,b1;
    scanf("%d", &a1);
    scanf("%d", &b1);
    printf("a||b = %d\n", a1||b1);
    break; 
case 'j':
    printf("performing count of set bits\n");
    printf("Enter the numbers to perform count of set bits: ");
    int n,count3 = 0;
    scanf("%d",&n);
    while (n) {
        n &= (n - 1);
        count3++;
    }
    printf("\n count of set bits of count= %d\n",count3);
    break;
case 'k':
        printf("KPI:\n");
        printf("Last operation is :\n");
        printf("Total no of Operations = %d\n",count);
        break;
case 'q':
        printf("Shutdown\n");
        break;

default:
   printf("\nEnter Valid Operator!!!\n");
   printf("\n\nPress Enter Again for New Input\n");
}
printf("\n\n\n Please Press Enter to restart operation\n");
printf("\n");
printf("Waiting for your input \n");
getch();
}
}



