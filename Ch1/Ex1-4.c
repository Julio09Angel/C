#include<stdio.h>
//Print Celsius-Fahrenheit table
//for Celsius = 0, 20, ..., 300
//with floating-point
main()
{
	float celsius, fahr;
	float lower, upper, step;
	
	lower = 0;   //lower limit temperature scale
	upper = 300; //upper limit
	step = 20;   //step size
	
	printf("Celsius\t Fahrenheit\n"); //This is the heading
	celsius = lower;
	while(celsius <= upper)
	{
		fahr = (9.0 / 5.0) * celsius + 32;
		printf("%7.2f\t%11.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
