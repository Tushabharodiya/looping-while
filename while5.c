#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(n>=i)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
}