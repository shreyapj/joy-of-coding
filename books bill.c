/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    float tot_amount;
    printf("enter the number of books : \n");
    scanf("%d",&n);
    tot_amount=n*10;
    if(n<10000)
    {
        printf("no discount!!!\n");
        printf("total cost is=%.2f",tot_amount);
    }
    else if(n>10000&&n<15000)
    {
        printf("hey!! you got 10percent discount!!!\n");
        tot_amount=tot_amount-(0.1*tot_amount);
        printf("total cost is=%.2f",tot_amount);
    }
    else if(n>15000&&n<20000)
    {
        printf("hey!! you got 20percent discount!!!\n");
        tot_amount=tot_amount-(0.2*tot_amount);
        printf("total cost is=%.2f",tot_amount);   
    }
}

