#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * Return: 1 for alphabetic character, 0 for anything else.
*/
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
        else
        return (0);
}
