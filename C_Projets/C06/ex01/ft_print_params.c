#include <unistd.h>
char ft_putchar(char c)
{
    write(1, &c, 1);
}

void main(int argc, char **argv)
{
    unsigned int i;
    unsigned int j;

    i = 1;
    
    while(i < argc)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        
        ft_putchar('\n');
        i++;
    }
}