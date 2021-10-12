#include<stdio.h>
int main()
{
    int i;
    int arr[10]={2,6,10,14,18,3,7,11,15,19};
    for(i=6;i<10;i++)
    arr[i-1]=arr[i];
    printf("array after deletion:\n");
    for(i=0;i<9;i++)
    printf("%d\t",arr[i]);
}

