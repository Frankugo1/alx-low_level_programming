#include <stdio.h>
/**
 * main - Point Entry
 * Return: Always 0 Readable
 */

int main(void)
{
        int b;

        for (b = 0; b < 10; b++) {

                        putchar(b + '0');
			if (b < 9) {

				putchar(',');
				putchar(' ');
		}
        }
        putchar('\n');
        return (0);
}
