#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_itoa_tn(int n);
char	*ft_uitoa(unsigned int n);
char	*ft_treat_dtoh(unsigned long d, int x);
int		ft_treat_put_types_diu(va_list ap, int s, int *res);
int		ft_treat_put_types_xp(va_list ap, int s, int *res);
int		ft_fr(char **str);
int		ft_check_treat_put(int i, const char *inp, va_list ap, int *res);
int		ft_printf(const char *inp, ...);

#endif
