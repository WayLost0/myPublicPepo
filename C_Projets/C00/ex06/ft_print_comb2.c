#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_comb2()
{
    int nmbr1;
    int nmbr2;

    nmbr1 = 00;
    while(nmbr1 <= 98)
    {
        nmbr2 = nmbr1 + 1;
        while(nmbr2 <= 99)
        {
            ft_putchar(nmbr1 / 10 + 48);
            ft_putchar(nmbr1 % 10 + 48);
            ft_putchar(' ');
            ft_putchar(nmbr2 / 10 + '0');
            ft_putchar(nmbr2 % 10 + '0');
            if(nmbr1 < 98)
                ft_putchar(',');               
            nmbr2++;
        }
        nmbr1++;
    }
}