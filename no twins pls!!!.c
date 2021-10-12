#include<stdio.h>
int main()
{
    int i,n=0,count=0;
    int arr[8]={2,6,10,14,18,10,3,7};
    while(n<8)
    {
        for(i=n+1;i<8;i++)
        {
        if(arr[i]==arr[n])
        count++;
        }
      n++;
    }
    if(count)
    printf("group is not unique");
    else
    printf("group is unique");
    
}
