/* headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra != 'q' && letra != 'e')
		{
			putchar(letra); }
		if (letra == 'z')
		{
			putchar('\n'); }
	}
	return (0);
}
