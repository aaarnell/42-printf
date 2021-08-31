#include "ft_printf.h"

static char	*ft_rec_str(char *tmp, int n)
{
	char	*tmp2;
	int		r;

	r = 0;
	if (tmp)
		r = ft_strlen(tmp);
	tmp2 = (char *)malloc(sizeof(char) * (r + 2));
	if (tmp2 == NULL)
		return (NULL);
	ft_strlcpy(tmp2, tmp, r + 1);
	tmp2[r] = n;
	tmp2[r + 1] = '\0';
	ft_fr(&tmp);
	return (tmp2);
}

char	*ft_treat_dtoh(unsigned long d, int x)
{
	char			n;
	unsigned long	d_rem;
	char			*tmp;

	if (x != 120 && x != 88)
		x = 120;
	if (d)
	{
		d_rem = d % 16;
		if (d_rem > 9)
			n = (x - 23) + (d_rem - 10);
		else
			n = d_rem + 48;
		d = d / 16;
		tmp = ft_treat_dtoh(d, x);
		return (ft_rec_str(tmp, n));
	}
	return (NULL);
}
