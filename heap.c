#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
void create_heap(int *ptr,int size);
void main()
{
	int a[100],size,i;
	char ch;
	printf("How many elements you want to enter ?\n");
	scanf("%d",&size);
	printf("Enter elements\n");
	for(i=1;i<=size;i++)
	{
       scanf("\n%d",&a[i]);
	}
	for(i=1;i<=size;i++)
	{
	 create_heap(a,i);
    }
	printf("\n");
	for(i=1;i<=size;i++)
	{
		printf("%d\t",a[i]);
	}
	while(1)
	{
	  printf("\nYour options are:-\n{\n 1 for instertion \n 2:for deletion\n 0:for nothing\n}\n");
	  scanf("%c",&ch);
	  if((ch=='1')||(ch=='2'))
	    {
	    	if(ch=='1')
	    	{
              printf("\nEnter element which you want to enter:");
              scanf("%d",&a[size+1]);
              size=size+1;
              create_heap(a,size);
              printf("\n Now your updated heap array is:");
     	      for(i=1;i<=size;i++)
      	      {
	     	    printf("%d\t",a[i]);  
	          }
	        }
	        else
	        {
	        	if(size==0)
	        	{
	        		printf("\nHeap does not have any element so insert elements\n");

	        	}
	        	else
	        	{
	        	    printf("\nyour deleted element is:%d",a[1]);	        	
	        	    a[1]=a[size];
	        	    size=size-1;
	        	    if(size!=0)
	        	     { 
	        	      for(i=1;i<=size;i++)
	        	       {
                         create_heap(a,i);
	        	       }
	        	      printf("\nNow updated heap is:\n");
	        	      for(i=1;i<=size;i++)
	        	       {
                         printf("%d\t",a[i]);
	        	       } 
	        	     }
	        	    else
	        	     {
	        	        printf("\nHeap is empty\n");
	        	     }               
	        	printf("\nAgain available option for you:\n");
	        	}  	        	
	        }  
	    }  
	
	  else if(ch=='0')
	    {
           break;
	    }
	  else
	    {
		 printf("\nEntry is not valid so plz Answer with valid option\n");
	    }
    }

}
void create_heap(int *ptr,int size)
{
	int i,child,parent,temp;
		if(size==1)
		{
			
		}
		else
		{
           child=size;
           parent=child/2;
           temp=ptr[child];
           while((parent>=1)&&(temp>ptr[parent]))
           {
            ptr[child]=ptr[parent]; 
           	child=parent;
           	parent=child/2;
           }
           ptr[child]=temp; 
        }
}