


#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int	len;

	len = ft_strlen(s1) + 1;
	while (--len)
	{
		if (s1[len] == (char)c)
			return ((char*)s1 + len);
	}
	if (s1[len] == (char)c)
		return ((char*)s1 + len);
	return (NULL);
}
