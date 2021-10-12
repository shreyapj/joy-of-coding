#include<stdio.h>
int main()
{
    int i;
    int arr[11]={2,6,10,14,18,3,7,11,15,19};
    for(i=11;i>=4;i--)
    arr[i+1]=arr[i];
    arr[4]=22;
    printf("array after insertion\n");
    for(i=0;i<11;i++)
    printf("%d\t",arr[i]);
}
