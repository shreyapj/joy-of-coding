#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, big;
    
    printf("Enter any two numbers ");
    scanf("%d%d", &a, &b);
    
    if(a<0 || b<0 )
    {
        printf("Invalid number in input");
        exit(0);
    }
    if(a>b )
        big=a;
    else 
     
        big=b;
    
    printf("The biggest number is %d", big);
    return 0;
}

