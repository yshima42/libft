#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	size_t	i;

	if (!s || !f)
		return (NULL);
	ans = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
