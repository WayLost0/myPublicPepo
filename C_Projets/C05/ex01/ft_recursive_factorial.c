int ft_recursive_factorial(int nb)
{
    int total;
    
    total = 1;
    if (nb > 0)
        total = nb * ft_recursive_factorial(nb - 1);
    if (nb < 0)
        return (0);

    return (total);
}