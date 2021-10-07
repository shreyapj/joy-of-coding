
#include <stdio.h>

int main()
{
    int a,b,c,large;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("largest of %d and %d is %d\n",a,b,(a>b)?a:b);
    large=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest of %d ,%d and %d is %d",a,b,c,large);
}

