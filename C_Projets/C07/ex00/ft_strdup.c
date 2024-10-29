#include <stdlib.h>

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strcpy(char *src, char *dest)
{
    unsigned int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    int i;
    char *dest;
    dest = malloc(ft_strlen(src) + 1);

    if (src == NULL)
        return (NULL);

    ft_strcpy(src,dest);
    return(dest);
}