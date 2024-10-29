int ft_atoi(char *str)
{
    unsigned int i;
    int result;
    int total;

    i = 0;
    result = 1;
    total = 0;

    while(str[i] == ' ')
        i++;
    while(str[i] == '-')
    {
       result *= -1;
       i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        total = total * 10 + (str[i] - 48);
        i++;
    }
    return (total * result);
}