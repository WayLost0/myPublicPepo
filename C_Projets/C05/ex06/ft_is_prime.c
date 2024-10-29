int ft_is_prime(int nb)
{
    unsigned int i;

    i = 2;
    while(i < nb)
    {
        if(nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}