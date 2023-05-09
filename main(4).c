#include<stdio.h>

int main()
{
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if
(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
    printf("%c\t is a vowel. " ,ch);
}
else if
((ch>'a' && ch<'z') || ch>'A' && ch<'Z')
{
    printf("%c\t is constant. ",ch);
}
else 
printf("%c\t is not a alphabet. ",ch );
return 0;
}
