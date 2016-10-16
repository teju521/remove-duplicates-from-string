#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char repeat[100],a[50];
	int i,j,len,k=0,flag=0,count=0;
	printf("Enter the string");
	scanf("%s",repeat);

	len = strlen(repeat);
	
	for(i=0;i<len;i++)
	{
	    
	    for(j=0;j<k;j++)
	    {
	        if(repeat[i]==repeat[a[j]])
	        {
	            flag=1;
	            
	         }
	    }  
	    if(flag==1)
	    {
	        flag=0;
	         continue;
	    
	    }
		
		for(j=i+1;j<len;j++)
		{
		    
			if(repeat[i]==repeat[j])
			{
			 a[k++]=i;
			
			
			  
			}
		
		}
	
	}
	for(i=0;i<len;i++)
	{
	    for(j=0;j<k;j++)
	    {
	       	 if(repeat[i]!=repeat[a[j]])
	        
	        count++;
	    }
	    if(count==k)
	    
	        
	         printf("Repeated numbers are:%c\n",repeat[i]);
	         count=0;
	}
	  
	
	return 0;
	
	
}