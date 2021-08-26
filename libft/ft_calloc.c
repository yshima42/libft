#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;

	tab = (char *)malloc(size * count);
	if (tab == 0)
		return (0);
	ft_bzero(tab, size * count);
	return ((void *)tab);
}
