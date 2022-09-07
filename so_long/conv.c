#include "so_long.h"

int	ft_conv_base(unsigned long long n, char *base, unsigned long long base_size)
{
	int	count;

	count = 0;
	if (n >= base_size)
		count = ft_conv_base(n / base_size, base, base_size);
	count += ft_putchar(base[n % base_size]);
	return (count);
}