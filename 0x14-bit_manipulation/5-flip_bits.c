/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: current number
 * @: destination number
 *
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int res;
	int count;

	res = n ^ m;
	count = 0;
	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}

	return (res);
}
