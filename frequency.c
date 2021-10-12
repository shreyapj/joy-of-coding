#include <stdio.h>
int main()
{
	int  i, j, Count, n;	
	printf("\n Enter the number of elements in an array  :   ");
	scanf("%d", &n);               //Declare size array	
    int a[n], Freq[n];            //Declare two arrays
	printf("\n Enter the elements of an Array  :  ");
	for (i = 0; i < n; i++)       //Initialize both the arrays
	{
    	    scanf("%d", &a[i]);
    	    Freq[i] = -1;         
   	}      
	for (i = 0; i < n; i++)
	{
		Count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])    
    		{
    			Count++;
    			Freq[j] = 0;   
    		}
    	}
    	if(Freq[i] != 0)        
    	{
    		Freq[i] = Count;
		}
	}
 	for (i = 0; i < n; i++)
  	{
  		if(Freq[i] != 0)        
  		{
  			printf("%d : %d \n", a[i], Freq[i]);
		}		
  	}	     
 	return 0;
}