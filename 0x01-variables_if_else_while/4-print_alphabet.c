#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (readable)
 */

int main(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c != 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
