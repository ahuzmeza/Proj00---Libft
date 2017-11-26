


#include "libft.h"

int	is_delimiter(char c)
{
	if (c == ' '
		|| c == '\n'
		|| c == '\v'
		|| c == '\r'
		|| c == '\f'
		|| c == '\t')
		return (1);
	return (0);
}
