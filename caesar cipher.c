#include<stdio.h>
int main()
{
    int code,acode,n,i;
    i=1;
    printf("enter the code\n");
    scanf("%d",&code);
    acode=0;
    while(code>0)
    {
        n=code%10;
        code=code/10;
        if(n==9)
            acode=acode+0;
        else
            acode=acode+(n+1)*i;
        i=i*10;
    }
    printf("actual code %d",acode);
}
