#include "main.h"
/**
  *jack_bauer - prints every minute of the day of jack bauer
  *             starting from 00:00 to 23:59
  */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minute = 0; minute <= 59; minute++)
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
	}
}
