


#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	while (*s1)
	{
		if (*s1 == (char)c)
			return ((char*)s1);
		s1++;
	}
	if (*s1 == (char)c)
		return ((char*)s1);
	return (NULL);
}
