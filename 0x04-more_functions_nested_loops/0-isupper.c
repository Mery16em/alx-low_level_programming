/*
 * Function: isupper
 * ----------------------------
 *   Checks if a character is an uppercase letter.
 *
 *   c: the character to be checked.
 *
 *   returns: 1 if the character is uppercase, 0 otherwise.
 */

int _isupper(int c)

/*
 * Function: isupper
 * ----------------------------
 *   Checks if a character is an uppercase letter.
 *
 *   c: the character to be checked.
 *
 *   returns: 1 if the character is uppercase, 0 otherwise.
 */
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
