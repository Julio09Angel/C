#include <stdio.h>

main()
{
	int c;
	c = getchar();
	printf("getchar\nvalue");
	printf("%4d\n", getchar() != EOF);
	
	return 0;
}
