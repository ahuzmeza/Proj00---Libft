


#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t len_dest;

	len_dest = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len_dest + i] = s2[i];
		i++;
	}
	s1[len_dest + i] = '\0';
	return (s1);
}
