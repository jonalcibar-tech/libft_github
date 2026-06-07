//ESTO SE PUEDE PROBAR EN PYTHON TUTOR

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i

	if (dest == NULL && src == NULL)
		return (NULL);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (dest >= src)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = -1;
		while (i++ < n)
			d[i] = s[i];
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char		src1[]  = "HOLA MUNDO";
	char		*dest1;
	int			n;
	char		src2[]  = "HOLA MUNDO";
	char		*dest2;
	
	dest1 = src1 + 5;
	dest2 = src2 + 5;

	n = 2;
	printf("%s    %s    %ld\n", dest1, src1, n);
	printf("%p , %p\n", &dest1, &src1);
	memmove(dest1, src1, n);
	ft_memmove(dest2, src2, n);
	printf("%s    %s-\n", dest1, src1);
	printf("%s    %s-\n", dest2, src2);
	
	return (0);
}

/*
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/
