#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*ptr;

	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (0);
	len = 0;
	while (src[len] != 0)
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = 0;
	return (ptr);
}
