#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, big;
    
    printf("Enter any three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a<0 || b<0 || c<0)
    {
        printf("Invalid number in input");
        exit(0);
    }
    if(a>b && a>c)
        big=a;
    else 
    if (b>a && b>c)
        big=b;
    else
        big=c;
    printf("The biggest number is %d", big);
    return 0;
}