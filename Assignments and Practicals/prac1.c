#include<stdio.h>
int main()
{
	int a[20],i,j,size,k;
	
	printf(" Enter no of elements in array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf(" Enter numbers : ");
		scanf("%d",&a[i]);
	}
		printf("\n Numbers inserted : ");
		for(i=0;i<size;i++)
		printf("%d  ",a[i]);
	
		printf("\n\n Traverse of array : ");
		for(i=0;i<size;i++)
		printf("%d ",a[i]);
	
		printf("\n\n Search for a specific element : ");
		scanf("%d",&k);
		printf(" Element is : %d",a[k-1]);
	
		printf("\n\n Enter the location where you wish to delete element : ");
		scanf("%d",&j);
	
		printf(" Print numbers : ");
		if(j<0 || j>=size)
		{
			printf("\n Enter valid position");
		}
		else
		{
			for(i=j-1;i<size;i++)
			{
				a[i]=a[i+1];
			}
	  	size--;
		}
		
		for(i=0;i<size;i++)
		printf("%d ",a[i]);
		
	return 0;
}
