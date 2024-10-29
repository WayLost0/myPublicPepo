#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_printable(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return(0);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (is_printable(str[i]) == 0)
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        else 
            ft_putchar(str[i]);
        i++;
    }
}