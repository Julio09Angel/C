#include<stdio.h>
//Print the table Fahrenheit-Celsius

main()
{
	int fahr;
	
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	printf("%5d\t%7.2f\n", fahr, (5.0/9.0) * (fahr - 32));
}
