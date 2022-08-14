#include "mage.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: The string
 *
 * Return: The string
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
			}
		}
	}

	return (s);
}

int main(void)
{
	char s[6] = "zngu";

	printf("%s", rot13(s));
}