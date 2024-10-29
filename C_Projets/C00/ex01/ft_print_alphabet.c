#include <unistd.h>

void ft_print_alphabet()
{
    char word;

    word = 'a';
    while(word <= 'z')
    {
        write(1, &word, 1);
        word++;
    }
}