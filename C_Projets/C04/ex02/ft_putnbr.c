#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
        ft_putnbr(nb);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        char a;

        a = nb + '0';
        write(1, &a, 1);
    }
}