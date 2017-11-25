


#include "../includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	ok;

	i = 0;
	ok = 1;
	while (i < n)
	{
		if (s2[i] && ok)
			s1[i] = s2[i];
		else
		{
			s1[i] = '\0';
			ok = 0;
		}
		i++;
	}
	return (s1);
}

