#include<stdio.h>

main()

{
	int a[100];
	int i,n;
	printf("Enter Array Size");
	scanf ("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n*******************************************************\n");
	for (i=0;i<n;i++)
	{
		if (a[i]<0)
		printf("%d\n",a[i]);
	}
	
}
