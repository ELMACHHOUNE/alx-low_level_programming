#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1 = strlen(n1);
        int len2 = strlen(n2);
        int i, j;
        int carry = 0;

        if (len1 + 1 > size_r || len2 + 1 > size_r)
                return 0;

        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
                int digit1 = i >= 0 ? n1[i] - '0' : 0;
                int digit2 = j >= 0 ? n2[j] - '0' : 0;
                int sum = digit1 + digit2 + carry;

                if (sum >= 10) {
                        carry = 1;
                        sum -= 10;
                } else {
                        carry = 0;
                }

                r[len1 + len2 - i - j - 2] = sum + '0';
        }

        r[len1 + len2 - i - j - 2] = '\0';

        for (i = 0, j = len1 + len2 - 3; i < j; i++, j--) {
                char tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
        }

        return r;
}
