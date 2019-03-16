#include <stdio.h>

int main ()
{
	int cold_days=0;
	int all_days=0;
	int temperature;
	const int miyona = 0;
	
	printf ("Enter the list of dayli low temperature. \n");
	printf ("Use Celsius, and enter q to quit.");
	
	
	
	while (scanf ("%d", &temperature)== 1)
	{
		all_days++;
	
		if (temperature<miyona)
		{
			cold_days++;
		}
		}
		if (all_days != 0)
		{
			printf ("%d days total: %.1f%% ehere below freezing.\n", all_days, 100.0*(float)cold_days/all_days);
		}
		if (all_days==0)
		{
			printf ("No data ntered!\n");
		}

	return 0;
}
