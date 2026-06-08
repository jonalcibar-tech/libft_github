#include "libft.h"

int main(void)
{
	char		src1[]  = "abcde";
	char		*dest1;
	int			n;
	
	*dest1 = *src1 + 2 ;

	n = 3;
	printf("%s    %s    %d\n", dest1, src1, n);
	printf("%p , %p\n", &dest1, &src1);
	ft_memmove(dest1, src1, n);
	printf("%s    %s-\n", dest1, src1);
	return (0);
}