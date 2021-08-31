#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	if (s)
		return (write(1, s, ft_strlen(s)));
	return (0);
}
