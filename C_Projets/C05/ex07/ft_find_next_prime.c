int ft_find_next_prime(int nb)
{
    unsigned int i;
    
    i = 2;
    while(i < nb)
    {
        if (nb % i == 0)
            nb++;
        else
            return (nb);
        i++;
    }
}