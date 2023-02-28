#include <stdio.h>

/**
 * main - Convert a given amount of time in seconds into 
 * hours minutes and seconds(hms)
 *
 * Return: 0 (success)
 */

int main(void)
{
	int sec, h, m, s;

	printf("Input Seconds: ");
	fflush(stdout);
	scanf("%d", &sec);
	h = 0;

	m = 0;

	s = 0;

	if (sec / 3600)
	{
		h = sec / 3600;
		sec = sec - h *3600;
	}
	if (sec / 60)
	{
		m = sec / 60;
                sec = sec - m * 60;
	}

	printf("There are:\n");
	printf("HH:MM:SS - %2d:%2d:%2d", h, m, sec);

	return (0);
}
