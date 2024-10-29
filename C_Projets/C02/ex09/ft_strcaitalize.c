int is_al_num(char str)
{
    if (str >= 'a' && str <= 'z')
        return (1);
    if (str >= 'A' && str <= 'Z')
        return (1);
    if(str >= '0' && str <= '9')
        return(1);
    return (0);
}



char *ft_strcapitalize(char *str)
{
    int i;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    
    i = 1;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (is_al_num(str[i - 1]) == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        i++;
    }
    return(str);
}