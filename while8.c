#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	
	printf("Enter Value N =");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=i+sum;
		printf("%d\n",i);
		i++;
	}
	printf("sum of 1 to n= %d",sum);
}