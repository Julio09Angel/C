#include <stdio.h>

main()
{
	int c;
	int b;
	int t;
	int n;
	
	b = 0;
	t = 0;
	n = 0;
	
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			++b;
		}
		
		if(c == '\t')
		{
			++t;
		}
		
		if(c == '\n')
		{
			++n;
		}
	}
	printf("BLanks: %d\nTabs: %d\nNewlines: %d\n", b, t, n);
}
