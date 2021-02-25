#include<stdio.h>
//Print Fahrenheit-Celsius table
//for fahr = 0, 20, ..., 300
//with floating-point

main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;     //lower limit temperature scale
	upper = 300;   //upper limit
	step = 20;     //step size
	
	printf("Fahrenheit\tCelsius\n"); //This is the heading
	
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%10.2f\t%7.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
