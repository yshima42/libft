#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ans;

	if (!s1)
		return (NULL);
	start = 0;
	ans = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	ans = ft_substr(s1, start, end - start);
	return (ans);
}
