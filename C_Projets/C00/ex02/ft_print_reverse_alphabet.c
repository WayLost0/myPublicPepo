#include <unistd.h>

void ft_print_revere_alphabet()
{
    char rword;

    rword = 'z';
    while(rword >= 'a')
    {
        write(1, &rword, 1);
        rword--;
    }
}