#include <stdio.h>



int main ()
{
	printf("%20s %15s\n","Fahrenheit","Celsius" );
	printf("%20s %15s\n", "==========","=======");

	int fahrenheit;
	int celsius;
	for(fahrenheit=0;fahrenheit<301;fahrenheit+=10)
	{
		celsius = (fahrenheit-32)*5/9;
		printf("%20d %15d\n" ,fahrenheit,celsius);
	}
}