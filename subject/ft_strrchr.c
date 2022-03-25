#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ans;

	i = 0;
	ans = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ans = ((char *)(s + i));
		i++;
	}
	if ((char)c == 0)
		return ((char *)(s + i));
	return (ans);
}
