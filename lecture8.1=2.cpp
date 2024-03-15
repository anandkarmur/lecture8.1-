#include<stdio.h>

main()

{
	int i,n,sum=0,ave;
	printf("Enter Size Of Array =  ");
	scanf("%d",&n);
	int array[n];
	
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
		sum = sum + array[i];
		
	}
	printf("Sum Of All Element In Array = %d",sum);
	ave = sum/n;
	printf("\nAverage Of Array = %d",ave);
	
}