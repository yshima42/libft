#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!dest || !src)
		return (0);
	i = 0;
	len = 0;
	if (size > 0)
	{
		while (src[i] != 0 && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[len] != 0)
		len++;
	return (len);
}
