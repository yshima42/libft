#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s1_uc;
	unsigned char		*s2_uc;

	s1_uc = (unsigned char *)s1;
	s2_uc = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_uc[i] != s2_uc[i])
			return ((int)(s1_uc[i] - s2_uc[i]));
		i++;
	}
	return (0);
}
