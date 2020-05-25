#include <stdio.h>
#include <stdlib.h>
main()
{	int *a, i, n, sum=0;
	printf("\n %s%s","An array will ve created dynamically. \n\n","Input an array size n followed bye integers: ");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	for (i=0;i<n;i++)
	{printf("Enter %d values: ");
	scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
		sum+=a[i];
	free(a);
	printf("\n %s%s7d\n%s%s7d\n\n","number of elements: ", n, "sum of the elements: ", sum)
;
}
