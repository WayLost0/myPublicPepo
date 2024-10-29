int ft_iterative_power(int nb, int power)
{
    int total;

    total = nb;
    while(power > 0)
    {
        total *= nb;
        power--;
    }
    if(power == 0)
        return (1);
    if (power < 0)
        return (0);
}