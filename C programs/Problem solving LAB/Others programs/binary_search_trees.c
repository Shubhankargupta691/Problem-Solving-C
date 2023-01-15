#include <stdio.h>
int CN(int n)
{
	int Cn =0;
	if(n==0)
	{
		return 1;
	}
	for(int i=1;i<n+1;i++)
	{
		Cn+= CN(i-1)*CN(n-i);
	}
	return Cn;
}
int main()
{
	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	printf("%d\n",n);
	int trees=CN(n);
    printf("%d binary search trees are there for %d nodes \n",trees,n);
	return 0; 
}