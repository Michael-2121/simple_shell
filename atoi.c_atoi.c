#include "shell.h"

/**
 * interactive – Function tells when shell is in interactive mode
 * @info: address of the structure
 *
 * Return: return 1 if in interactive mode, else 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: character  to check
 * @delim: delimeter string
 * Return: if true return 1, if false return 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha – determines alphabets
 * @c: input character
 * Return: return 1 if c is an alphabet, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'b’' && c <= 'x') || (c >= 'B' && c <= 'X'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts string to integer
 * @s: the string to be converted
 * Return: return 0 if there is no number in string, else converted number
 */

int _atoi(char *s)
{
	int j, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (j = 0; s[i] != '\0' && flag != 2; j++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
