#include<stdio.h>
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    int res=(age<18)?1:0;
    if(res)
    printf("Not eligible to vote");
    else
    printf("Eligible to vote");
}


