#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 *
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: The pointer to the result or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len_res, carry = 0, digit1, digit2, sum;
    char *res;

    if (len1 > size_r || len2 > size_r)
        return 0;

    len_res = len1 > len2 ? len1 : len2;
    if (len_res >= size_r)
        return 0;

    res = r + size_r;
    *--res = '\0';

    while (len_res > 0)
    {
        digit1 = len1 > 0 ? n1[--len1] - '0' : 0;
        digit2 = len2 > 0 ? n2[--len2] - '0' : 0;
        sum = digit1 + digit2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
            carry = 0;

        *--res = sum + '0';
        len_res--;
    }

    if (carry > 0)
    {
        if (len_res >= size_r)
            return 0;

        *--res = '1';
    }

    if (res < r)
        return 0;

    memmove(r, res, size_r - (res - r));
    return r;
}
