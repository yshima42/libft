#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest == src && n == 0)
		return (dest);
	if (dest > src && dest - src < (int)n)
	{
		while (n != 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
