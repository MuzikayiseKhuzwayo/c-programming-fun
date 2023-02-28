#include <stdio.h>

/**
 * main - accept one int(kilometers traveled) and one float(spent fuel)
 * output the average consumption
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * use scanf and printf
	 */

	int k;

	float fuel, ans;

	printf("Input total distance in km: ");
	fflush(stdout);
	scanf("%d", &k);
	printf("Input total fuel spent in liters: ");
	fflush(stdout);
	scanf("%.2f", &fuel);
	
	printf("%f, %d\n", k, fuel);
	ans = (k / fuel);
	printf("Average Consumption (km/lt) = %.2f\n", ans);
	return (0);
}
