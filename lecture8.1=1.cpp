#include<stdio.h>

main()
{
	int i,n;
	printf("how many value enter in array = ");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements = \n");
	int length;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<length;i++)
	{
		printf("%d",i);
	}
	length = sizeof(a)/sizeof(0);
	printf("length of array = %d\n",length);
}