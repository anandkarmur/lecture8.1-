#include<stdio.h>

main()

{
	int i,n,add=0;
	printf("Enter Size Of Array = ");
	scanf("%d",&n);
	int a[n],b[n];
	int sum[n];
	
	printf("Enter A Array Element :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter B Array Element:\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		
	}
	printf("Sum Of Two Arrays : ");
	for(i=0;i<n;i++)
	{
		sum[i] = a[i] + b[i];
		printf("%d",sum[i]);
	}
}