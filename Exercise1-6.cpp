#include <stdio.h>

main()
{
	int c;
	c = getchar();
	printf("getchar value: ");
	printf("%d\n", getchar() != EOF);
	
	return 0;
}
