int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int x;

    x = ft_strlen(src);
    i = 0;
    if (size != 0)
    {
        while(src[i] != '\0' && i < size -1)
        {
            src[i] = dest[i];
            i++;
        }
        dest[i] = '\0';
    }
    return(x);
}