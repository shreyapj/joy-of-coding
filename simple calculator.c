#include <stdio.h>

void main()
{
    float a,b,c;
    char op;
    printf("enter an expression\n");
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
        case'+':
        c=a+b;
        printf("sum=%f",c);
        break;
        case'-':
        c=a-b;
        break;
        case'*':
        c=a*b;
        printf("product=%f",c);
        break;
        case'/':
        c=a/b;
        break;
        default:
        printf("invaid expression");
    }
}
