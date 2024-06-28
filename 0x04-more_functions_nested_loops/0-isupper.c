/**
 * _isupper - checks if a character is an uppercase letter.
 * @c: the character to be checked.
 *
 * Description: This function takes a single character and checks if it
 * is an uppercase letter (A through Z). If it is, the function returns 1;
 * otherwise, it returns 0.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
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

