#include "ft_printf.h"

int	ft_fr(char **str)
{
	if (str)
	{
		free(*str);
		*str = NULL;
	}
	return (0);
}

int	ft_treat_put_types_diu(va_list ap, int s, int *res)
{
	char	*f;

	f = NULL;
	if (s == 'u')
		f = ft_uitoa(va_arg(ap, unsigned int));
	else
		f = ft_itoa_tn(va_arg(ap, int));
	if (f == NULL)
		f = ft_strdup("");
	*res += ft_putstr(f);
	ft_fr(&f);
	return (0);
}

int	ft_treat_put_types_xp(va_list ap, int s, int *res)
{
	char			*f;
	unsigned long	d;

	d = va_arg(ap, unsigned long);
	if (d)
		f = ft_treat_dtoh(d, s);
	else
		f = ft_strdup("0");
	if (s == 'p')
		*res += ft_putstr("0x");
	*res += ft_putstr(f);
	ft_fr(&f);
	return (0);
}

int	ft_check_treat_put(int i, const char *inp, va_list ap, int *res)
{
	char	*s;

	if (inp[i] == '%')
		*res += ft_putchar('%');
	if (inp[i] == 'c')
		*res += ft_putchar(va_arg(ap, int));
	if (inp[i] == 's')
	{
		s = va_arg(ap, char *);
		if (s)
			*res += ft_putstr(s);
		else
			*res += ft_putstr("(null)\0");
	}
	if (inp[i] == 'p')
		ft_treat_put_types_xp(ap, inp[i], res);
	if (inp[i] == 'd' || inp[i] == 'i' || inp[i] == 'u')
		ft_treat_put_types_diu(ap, inp[i], res);
	if (inp[i] == 'x' || inp[i] == 'X')
		ft_treat_put_types_xp(ap, inp[i], res);
	return (++i);
}

int	ft_printf(const char *inp, ...)
{
	int		i;
	va_list	ap;
	int		res;

	i = 0;
	res = 0;
	va_start(ap, inp);
	while (inp[i])
	{
		if (inp[i] == '%')
		{
			i++;
			i = ft_check_treat_put(i, inp, ap, &res);
		}
		else
		{
			i += ft_putchar(inp[i]);
			res++;
		}
	}
	va_end(ap);
	return (res);
}
