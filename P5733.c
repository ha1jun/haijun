#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int i=0;
	while(i<100)
	{
		if(a[i]<123 && a[i]>96)
		{
			a[i]=a[i]-32;
		}

		i++;
	}
	printf("%s",a);
	return 0;
}
