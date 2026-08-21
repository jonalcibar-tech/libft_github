int main(void)
{
    int     words;
    int     leters;
    int     iwords;
    int     ileters;
    char    **matriz;

    words = 3;
    leters = 4;
    iwords = 0;
    ileters = 0;

    matriz = malloc((words + 1) * sizeof(char *));
    if (!matriz)
      return (NULL);
    while (iwords < words)
    {
      matriz[iwords] = malloc((leters + 1) * sizeof(char));
      if(!matriz[iwords])
        return 'NULL';
      while (ileters < leters)
      {
        matriz[iwords][ileters] = 'X';
        ileters++;
      }
    matriz[iwords][ileters] = '\0' ;
    iwords++;
    ileters = 0;
    }
    matriz[iwords] = 'NULL';
    return (0);
}