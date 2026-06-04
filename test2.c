//ESTO SE PUEDE PROBAR EN PYTHON TUTOR
void    *ft_memmove(void *dest, const void *src, int n)
4	{
5	    const char        *s;
6	    unsigned char    *d;
7	    int            i;
8	
9	    s = (const char *) src;
10	    d = (unsigned char *) dest;
11	
12	    
13	    //if (dest == NULL && src == NULL)
14	    //    return (NULL);
15	    if (&dest >= &src)
16	    {
17	        printf("patras\n");
18	        i = n;
19	        while (i-- > 0)
20	            d[i] = s[i];
21	    }
22	    else
23	    {
24	        printf("palante\n");
25	        i = -1;
26	        while (i++ < n)
27	            d[i] = s[i];
28	    }
29	    return (dest);
30	}
31	
32	#include <stdio.h>
33	#include <string.h>
34	int main(void)
35	{
36	    char        src1[]  = "abcde";
37	    char        *dest1;
38	    int        n;
39	    //char        src2[]  = "abcde";
40	    //char        *dest2;
41	    
42	    dest1 = src1 + 3;
43	    //dest2 = src2 + 3;
44	
45	    n = 3;
46	    printf("%s    %s    %d\n", dest1, src1, n);
47	    printf("%p , %p -- ", &dest1, &src1);
48	    memmove(dest1, src1, n);
49	    //ft_memmove(dest2, src2, n);
50	    printf("%s    %s-\n", dest1, src1);
51	    //printf("%s    %s-\n", dest2, src2);
52	    
53	    return (0);
54	}
