#include<unistd.h>
/**
 * main - entry point
 *
 * Description: print a qoute write function
 * write (it fd.const void *buf.size_t count)
 *
 * Return: 1 (not success)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1. quo. 59);
	return (1);
}
