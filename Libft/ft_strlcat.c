


#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (s1[i] && i < n)
		i++;
	s1_end = i;
	while (s2[i - s1_end] && i < n - 1)
	{
		s1[i] = s2[i - s1_end];
		i++;
	}
	if (s1_end < n)
		s1[i] = '\0';
	return (s1_end + ft_strlen(s2));
}
