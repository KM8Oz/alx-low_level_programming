/**
 * Author: @KM8Oz
 * check_if_prime a recursive check function
 * @i : bit point
 * @n : input number
 * Return: is prime number 1 or 0
 */
int check_if_prime(int i, int n)
{
	if (i < n)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
		else
		{
			return (check_if_prime(i + 1, n));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * Author: @KM8Oz
 * is_prime_number a function that check if input number is prime or not
 * @n : input number
 * Return: is prime number 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
	{
		return 0;
	}
	if (n < 0)
	{
		return (check_if_prime(2, (n * -1)));
	}
	return (check_if_prime(2, n));
}
