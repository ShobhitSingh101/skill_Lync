#include<stdio.h>

int main()
{
   int radious;
   float pie=3.14;
   
    printf("Enter the radious of the circle: \n");
    scanf("%d",&radious);
    
    float area =(pie*radious*radious);
    printf("Area of the circle is %f",area);
    return 0;
    
}