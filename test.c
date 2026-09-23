char    *ft_substr(char const *s, unsigned int start, int len)
{
    char	*result;
    int    slen;
    int    chnum;

    chnum = 0;
    if (!s)
        return ('NULL');
    slen = strlen(s);
    if (start >= slen)
        chnum = 0;
    else if (len < slen - start)
        chnum = len;
    else
        chnum = slen - start;
    result = malloc(chnum + 1);
    if (!result)
        return ('NULL');
    memcpy(result, s + start, chnum);
    result[chnum] = '\0';
    return (result);
}

static    int ft_start(char const *s1, char const *set)
{
    int    begin;
    int    iset;
    int    is1;

    iset = 0;
    is1 = 0;
    begin = 0;
    while (set[iset])
    {    
        while (s1[is1])
        {
            if (s1[is1] != set[iset])
                break;
        begin++;
        is1++;
        }
    iset++;
    }
    return(begin);
}
static    int ft_trimend(char const *s1, char const *set)
{
    int    end;
    int    iset;
    int    is1;

    iset = 0;
    is1 = strlen(s1) - 1;
    end = strlen(s1) - 1; 
    while (set[iset])
    {    
        while (s1[is1])
        {
            if (s1[is1] != set[iset])
                break;
        end--;
        is1--;
        }
    iset++;
    }
    return(end);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int    begin;
    int    len;
    int    trimend;

    if (!s1 || !set)
        return ('NULL');
    begin = ft_start(s1, set);
    trimend = ft_trimend(s1, set);
    len = trimend - begin +1;
    printf("%zu %zu %zu\n", begin, trimend, len);

    return (ft_substr(s1, begin, len));
}

int    main (void)
{
    char const s1[] = "HOLA MUNDOMUNDO";
    char const set[] = "MUNDOA ";
    printf("%s", ft_strtrim(s1, set));
}
/*
Parámetros s1: La cadena de caracteres que debe ser recortada.
set: Los caracteres a eliminar de la cadena en cuestión.
Valor devuelto: una copia de ‘s1’ con los caracteres de ‘set ’
eliminados al principio y al final.
NULL si falla la reserva de memoria.
Reserva memoria (con malloc(3))
*/