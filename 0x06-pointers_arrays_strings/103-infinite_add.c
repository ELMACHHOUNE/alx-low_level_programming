#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
	char *rev_n1, *rev_n2;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 > size_r || len2 > size_r || size_r < 1)
		return (0);

	rev_n1 = malloc(len1 * sizeof(char));
	rev_n2 = malloc(len2 * sizeof(char));

	for (i = 0, j = len1 - 1; i < len1; i++, j--)
		rev_n1[i] = n1[j];

	for (i = 0, j = len2 - 1; i < len2; i++, j--)
		rev_n2[i] = n2[j];

	for (i = 0; i < len1 || i < len2 || carry; i++)
	{
		sum = carry;
		if (i < len1)
			sum += rev_n1[i] - '0';
		if (i < len2)
			sum += rev_n2[i] - '0';
		if (i >= size_r)
			return (0);
		r[i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	r[i] = '\0';
	for (i = 0, j = strlen(r) - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	free(rev_n1);
	free(rev_n2);

	return (r);
}
