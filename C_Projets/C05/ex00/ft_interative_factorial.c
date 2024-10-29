int ft_interative_factorial(int nb)
{
    int total;

    total = 1;
    while(nb > 0)
    {
        total *= nb;
        nb--;
    }
    if (nb < 0)
        return (0);
    return (total);
}