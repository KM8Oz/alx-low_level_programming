/**
 * _sqrt_recursion_sd - a function that does the recursion
 * Author: @KM8Oz
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_sd(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (guess_squared < n)
		return (_sqrt_recursion_sd(n, guess + 1, max));
	else
		return (_sqrt_recursion_sd(n, min, guess - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of input number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_sd(n, 1, n));
}
