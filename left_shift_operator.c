
#include <stdio.h>

int main()
{
    int num,a;
    printf("enter a number to perform left shift operation\n");
    scanf("%d",&num);
    printf("enter the number of position for bits to shift to left\n");
    scanf("%d",&a);
    printf("the result of left shift operation is:%d ",num<<a);
    return 0;
    
}
