#include <stdio.h>

main()
{
	int e;
	int c;
	e = EOF;
	c = getchar();
	
	printf("getchar\tEOF\n");
	printf("%4d\t%2d\n", getchar() != EOF);
	
	return 0;
}
