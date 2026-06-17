#include <stddef.h>

size_t    ft_strlen(const char *s)
{
    size_t    count;

    count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return (count);
}
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    const char        *s;
    unsigned char    *d;
    size_t            i;

    s = (const char *) src;
    d = (unsigned char *) dest;
    i = 0;
    if (dest == NULL && src == NULL)
        return (NULL);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    dst_len;
    size_t    src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size == 0 || *src == '\0')
        return (dst_len);
    if (src_len <= size-1)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, size - 1);
        dst[size - 1] = '\0';
    }
    return (dst_len + src_len);
}
// FUNCIONA CON 
#include <stdio.h>
#include <bsd/string.h>

int    main(void)
{
    char		dst1[] = "HOLA";
    const char	src1[] = "MUNDO";
    char		dst2[] = "HOLA";
    const char	src2[] = "MUNDO";
    size_t		n1;
	size_t		n2;

    n1 = 15;
	n2 = 15;
	printf("%s - %s %zu\n", dst1, src1, n1);
    printf("%s - %s %zu\n", dst2, src2, n2);
    printf("strlcat: %zu %s-\n", strlcat(dst1, src1, n1), dst1);
    printf("ft_strlcat: %zu %s-\n", ft_strlcat(dst2, src2, n2), dst2);
    return (0);
}