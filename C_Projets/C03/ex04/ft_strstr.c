char *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while(str[i] != '\0')
    {
        while(str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if(to_find[j] == '\0')
            return(&str[i]);
        j = 0;
        i++;
    }
    return (0);
}