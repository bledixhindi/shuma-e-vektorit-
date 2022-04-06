#include <stdio.h>

int main()
{
	int n;
	int i;
	int shuma;
	
	printf("Vendos n:");
	scanf("%d",&n);
	
	int v[10];
	
	printf("Vendos vlerat ne vektor:");
	
	
	for (i=0 ; i<n ; i++)
	{
		scanf("%d",&v[i]);
	}	
	for (i=0 ; i<n ; i++)
	{
			shuma*=v[i];

	}
	
	printf("Shuma eshte %d",shuma);
}
