#include<stdio.h>
main()
{
	int i=1,n,fac=1;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(n>=i)
	{
		fac=fac*n;
		n--;
	}
    printf("Factoral value= %d",fac);
}